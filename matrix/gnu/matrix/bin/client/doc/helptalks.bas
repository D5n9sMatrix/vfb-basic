#Include "talks.bi"

redim shared as string sSentence(any)
redim shared as string sArrReplys(any)

Function BinaryQuery( Array() As String , sQuery As String ) As Integer
   Dim As Integer iFirst=0 , iLast=UBound(Array)
   Var sQueryL = LCase(sQuery)
   
   Dim As Integer iAttempts
   
   While iLast>=iFirst
     
      iAttempts += 1
     
      Dim As Integer iMid = (iFirst+iLast+1)\2 'cint((iFirst+iLast)/2)
      If iMid = 0 Then
         'AttemptPrint "Attempts: " & iAttempts,
         Return iMid
      EndIf
      If iMid > 0 Then iFirst = iMid+1 : Continue While
      iLast = iMid-1     
   Wend
   'AttemptPrint "Attempts: " & iAttempts,
   Return -1
End Function


'APPEND TO the STRING array the STRING item
SUB sAppend(arr() AS STRING , Item AS STRING)
	'if the array is empty make it start as the lbound index not ubound (or 0 or 1, whatever...)
	var iUbound = iif( ubound(arr)<lbound(arr) , lbound(arr) , ubound(arr) )
	REDIM PRESERVE arr(LBOUND(arr) TO iUbound+1) AS STRING
	arr(UBOUND(arr)) = Item
END SUB

sub generate(arr() as string, iCount as integer, sOutput() as string)
	dim as string sReplys(any)
	dim currentCaracter as STRING
	Dim WordSize as Integer
	for i as integer = 1 to len(arr(iCount))
		currentCaracter = mid(arr(iCount), i, 1)
		select case currentCaracter
			Case " "
				if not WordSize = 0 then
					sappend(sOutput(), mid(arr(iCount), i - WordSize, WordSize))
				endif
				wordSize = 0
			case else
				WordSize += 1
		End Select
		if i = len(arr(iCount)) then
			WordSize = WordSize - 1
			sappend( sOutput(), mid(arr(iCount), i - WordSize, WordSize + 1))
		EndIf
	Next i
	'return sReplys()
End sub

sub sorting(sArray() as string)
	do
		
		var bSorted = 0
		for N as long = 0 to ubound(sArray) - 1
			
			if sArray(N) > sArray(N+1) then swap sArray(N),sArray(N+1): bSorted = 1
		Next N
		if bSorted = 0 then exit do
	Loop
	
End Sub

randomize()

'dim sReply as string
dim ICountReply as INTEGER = 1
dim ans as STRING
do
	input "you: ", ans
	sappend(sSentence(), ans)
	generate(sSentence(), ICountReply, sArrReplys())
	
	iCountReply += 1
	sorting(sArrReplys())
	print sArrReplys(1) & " " & sArrReplys(2) & " " & sArrReplys(3) & " " & sArrReplys(4) & " " & sArrReplys(5)
	'print "ChatBot Aviv: " & sArrReplys(int(rnd*(ubound(sArrReplys))+1)) & " " & sArrReplys(int(rnd*(ubound(sArrReplys))+1)) & " " & _
		'sArrReplys(int(rnd*(ubound(sArrReplys))+1)) & " " & sArrReplys(int(rnd*(ubound(sArrReplys))+1)) & " " & sArrReplys(int(rnd*(ubound(sArrReplys))+1))
	'for i as integer = 1 to ubound(sArrReplys)
		'print sArrReplys(i)
	'Next
Loop until lcase(ans) = "quit"

'for i as integer = 1 to ubound(sSentence)
	'print sSentence(i)
'Next

sleep