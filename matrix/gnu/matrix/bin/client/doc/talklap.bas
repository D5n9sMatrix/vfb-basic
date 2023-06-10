'#define fbc -s console -gen gcc -Wc -Ofast -Wc -Wno-maybe-uninitialized -exx -w all
'-exx

#define UseInsertionSort
'#define AllowDuplicatedWords

#Include "crt.bi"
type ReplyStruct
  sWord as string 'word itself
  iUses as long  'how many times it was used?
  'adding cross indexes for usage here would speed it up
end type

type ReplyList
  redim tReplys(any) as ReplyStruct 'word list
  redim iUsageIndex(any) as long    'order of words by usage (rank)
  redim iAlphaIndex(any) as long    'alphabetical order or
  iStorage as integer              'theres space reserved for how many entries?
  iCount  as integer              'how many word are in total?
end type

redim shared as string sSentence(any)
static shared tReplys as ReplyList

sub SortListAlpha( byref tList as ReplyList )
    dim as integer iIterations=0
  with tList
    do       
      var bSorted = 0 : iIterations += 1
      for N as long = 0 to .iCount-2
        #define _s(_N) .tReplys(.iAlphaIndex(_N)).sWord
        if _s(N) > _s(N+1) then swap .iAlphaIndex(N),.iAlphaIndex(N+1): bSorted = 1
      next N
      if bSorted = 0 then exit do
    loop
    'print "Sorted (alphabetically) in " & iIterations & " iterations." & " words=" & .iCount
  end with
end sub
sub SortListUsage( byref tList as ReplyList )
    dim as integer iIterations=0
  with tList
    do       
      var bSorted = 0 : iIterations += 1
      for N as long = 0 to .iCount-2
        #define _s(_N) .tReplys(.iUsageIndex(_N)).iUses
        if _s(N) < _s(N+1) then swap .iUsageIndex(N),.iUsageIndex(N+1): bSorted = 1
      next N
      if bSorted = 0 then exit do
    loop
    print "Sorted (by usage) in " & iIterations & " iterations." & " words=" & .iCount
  end with
end sub

function QSortListAlpha cdecl ( pI1 as integer ptr , pI2 as integer ptr ) as long   
  with tReplys 
    return strcmp( .tReplys(*pI1).sWord , .tReplys(*pI2).sWord )
  end with
end function
function QSortListUsage cdecl ( pI1 as integer ptr , pI2 as integer ptr ) as long   
  with tReplys         
    return .tReplys(*pI2).iUses - .tReplys(*pI1).iUses
  end with
end function

'**** locate query on list linearly ****
function LinearQueryList( byref tList as ReplyList , sQuery as string ) as integer
  with tList
    for N as integer = 0 to .iCount-1
      if strcmp( sQuery , .tReplys(N).sWord ) = 0 then
        return N
      end if
    next N
    return -1
  end with
end function
'**** !!! REQUIRES SORTED LIST !!! *****
function BinaryQueryList( byref tList as ReplyList , sQuery as string ) as integer   
  with tList
    dim as integer iFirst=0 , iLast=.iCount-1
 
    #define sQueryL sQuery
    'Var sQueryL = lcase(sQuery)
 
    dim as integer iAttempts
 
    while iLast>=iFirst
      iAttempts += 1   
      var iMid = (iFirst+iLast+1)\2 'cint((iFirst+iLast)/2)
      var iResult = strcmp( sQueryL , .tReplys(.iAlphaIndex(iMid)).sWord )
      if iResult = 0 then
        'AttemptPrint "Attempts: " & iAttempts,
        return .iAlphaIndex(iMid)
      endif
      if iResult > 0 then iFirst = iMid+1 : continue while
      iLast = iMid-1   
    wend
    'AttemptPrint "Attempts: " & iAttempts
    return not ((iFirst+iLast+1)\2)
  end with
end function

'Add a word to a list
sub AddWord( byref tList as ReplyList , sWord as string )
  var sNewWord = lcase(sWord) 
  with tList
 
    #if 0
      print "------------------------------------"
      for N as integer = 0 to .iCount-1
        print .tReplys(.iAlphaIndex(N)).sWord , .tReplys(.iAlphaIndex(N)).iUses
      next N
      sleep
    #endif
 
    #ifdef AllowDuplicatedWords   
      var iIndex = -1
    #else
      #ifdef UseInsertionSort
        var iIndex = BinaryQueryList( tList , sNewWord )
      #else
        var iIndex = LinearQueryList( tList , sNewWord )
      #endif 
    #endif
 
    if iIndex < 0 then 'new word
   
      #if 0 'buffered new word list output
        scope 'buffered new word list output
          static as string sBuffer
          sBuffer += sNewWord+"'"
          if len(sBuffer)>(80*25) then
            print sBuffer : sBuffer = ""       
          end if
        end scope
      #endif
   
      if .iCount >= .iStorage then
        'if theres no more reserved entries then enlarge the array
        .iStorage = .iStorage+(.iStorage\2)+15 '15,37,70,120,195...
        redim preserve .tReplys(.iStorage)
        redim preserve .iUsageIndex(.iStorage)
        redim preserve .iAlphaIndex(.iStorage)
      end if
      .tReplys(.iCount).sWord = sNewWord 'word
      .tReplys(.iCount).iUses = 1
      .iUsageIndex(.iCount) = .iCount    'set new positon on indexes
   
      #ifdef UseInsertionSort
        iIndex = not iIndex   
        memmove(@.iAlphaIndex(iIndex+1) , @.iAlphaIndex(iIndex) , (.iCount-iIndex)*sizeof(.iAlphaIndex(0)))
        .iAlphaIndex(iIndex) = .iCount
      #else   
        .iAlphaIndex(.iCount) = .iCount
      #endif
   
      .iCount += 1 'one string added :)
   
    else 'world already exist
      .tReplys(iIndex).iUses += 1
    end if
  end with
end sub
'APPEND TO the STRING array the STRING item
sub sAppend(arr() as string , Item as string)
    'if the array is empty make it start as the lbound index not ubound (or 0 or 1, whatever...)
    var iUbound = iif( ubound(arr)<lbound(arr) , lbound(arr) , ubound(arr) )
    redim preserve arr(lbound(arr) to iUbound+1) as string
    arr(ubound(arr)) = Item
end sub

sub ParseSentence( byref tList as ReplyList , sSentence as string )   
    dim currentCaracter as ubyte
    dim WordSize as integer
    for i as integer = 0 to len(sSentence) 'reaches the \0 at the end
        'less slower with ascii :)
    currentCaracter = sSentence[i] 'mid(arr(iCount), i, 1)
        select case as const currentCaracter           
    case asc("A") to asc("Z"),asc("a") to asc("z")      'characteres anywhere on the word
      WordSize += 1
    case asc("0") to asc("9"),asc("-"),asc("_"),asc("'") 'cant start with those
      if WordSize then WordSize += 1     
    case else 'case asc(" "),0
      if WordSize > 1 then
        var sWord = mid(sSentence, (i-WordSize)+1, WordSize)     
        AddWord( tList , sWord )
      endif
      wordSize=0   
        end select       
    next i
end sub

randomize()

#if 0
  ' --------------------------- in this mode it loads the text file --------------------
  var f = freefile(), sLine = ""
  dim as double TMR = timer
  open "BibleKJV.txt" for input as #f
  while not eof(f)
    line input #f, sLine
    if len(sLine) then     
      ParseSentence( tReplys , sLine )     
      if abs(timer-TMR) > 1 then exit while
    end if
  wend
  close #f
 
  print
  print tReplys.iCount & " words added in " & timer-TMR & "s"
 
  TMR = timer
  with tReplys
    #ifndef UseInsertionSort
      'qSort(@.iAlphaIndex(0),.iCount,sizeof(.iAlphaIndex(0)),cast(any ptr,@QSortListAlpha)) ' runtime error
      SortListAlpha( tReplys )
    #endif
    'qSort(@.iUsageIndex(0),.iCount,sizeof(.iUsageIndex(0)),cast(any ptr,@QSortListUsage)) ' runtime error
    SortListUsage( tReplys )
  end with
  print "sort took " & timer-TMR & "s"
 
  with tReplys
    var iWords = .iCount-1
    for N as integer = 0 to iWords 'iif(iWords>4,4,iWords)
      print .tReplys(N).sWord;" ";
      if Pos() > 70 then exit for
    next N
    print 
    for N as integer = 0 to iWords 'iif(iWords>4,4,iWords)
      print .tReplys(.iAlphaIndex(N)).sWord;" ";
      if Pos() > 70 then exit for
    next N
    print
    for N as integer = 0 to iWords 'iif(iWords>4,4,iWords)
      print .tReplys(.iUsageIndex(N)).sWord;"(" & .tReplys(.iUsageIndex(N)).iUses & ")";
      if Pos() > 70 then exit for
    next N
    print
  end with
 
#else

  'in this mode it read from keyboard input

  'dim sReply as string
  dim ICountReply as integer = 1
  dim ans as string
  do
    line input "you: ", ans
    cls
    if len(ans)=0 then print "why the silence?": continue do
 
    sappend( sSentence() , ans )   
    ParseSentence( tReplys , ans )
 
    iCountReply += 1   
 
    #ifdef UseInsertionSort
      'qSort(@tReplys.iAlphaIndex(0),tReplys.iCount,sizeof(tReplys.iAlphaIndex(0)),cast(any ptr,@QSortListAlpha)) ' runtime error !
      SortListAlpha( tReplys ) 'bubble sort
    #endif
 
    'qSort(@tReplys.iUsageIndex(0),tReplys.iCount,sizeof(tReplys.iUsageIndex(0)),cast(any ptr,@QSortListUsage)) ' runtime error!
    SortListUsage( tReplys ) 'bubble sort

    with tReplys
      var iWords = .iCount-1
      for N as integer = 0 to iWords 'iif(iWords>4,4,iWords)
        print .tReplys(N).sWord;" ";
        if Pos() > 70 then exit for
      next N
      print 
      for N as integer = 0 to iWords 'iif(iWords>4,4,iWords)
        print .tReplys(.iAlphaIndex(N)).sWord;" ";
        if Pos() > 70 then exit for
      next N
      print 
      for N as integer = 0 to iWords 'iif(iWords>4,4,iWords)
        print .tReplys(.iUsageIndex(N)).sWord;"(" & .tReplys(.iUsageIndex(N)).iUses & ")";
        if Pos() > 70 then exit for
      next N 
      print
    end with
 
    'print sArrReplys(1) & " " & sArrReplys(2) & " " & sArrReplys(3) & " " & sArrReplys(4) & " " & sArrReplys(5)
    'print "ChatBot Aviv: " & sArrReplys(int(rnd*(ubound(sArrReplys))+1)) & " " & sArrReplys(int(rnd*(ubound(sArrReplys))+1)) & " " & _
      'sArrReplys(int(rnd*(ubound(sArrReplys))+1)) & " " & sArrReplys(int(rnd*(ubound(sArrReplys))+1)) & " " & sArrReplys(int(rnd*(ubound(sArrReplys))+1))
    'for i as integer = 1 to ubound(sArrReplys)
      'print sArrReplys(i)
    'Next
  loop until lcase(ans) = "quit"
 
#endif

'for i as integer = 1 to ubound(sSentence)
    'print sSentence(i)
'Next

sleep