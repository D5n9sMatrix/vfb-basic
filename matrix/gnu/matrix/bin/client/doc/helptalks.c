typedef   signed char       int8;
typedef unsigned char      uint8;
typedef   signed short      int16;
typedef unsigned short     uint16;
typedef   signed int        int32;
typedef unsigned int       uint32;
typedef   signed long long  int64;
typedef unsigned long long uint64;
typedef struct { char *data; int64 len; int64 size; } FBSTRING;
typedef int8 boolean;
struct $16__FB_ARRAYDIMTB$ {
	int64 ELEMENTS;
	int64 LBOUND;
	int64 UBOUND;
};
#define __FB_STATIC_ASSERT( expr ) extern int __$fb_structsizecheck[(expr) ? 1 : -1]
__FB_STATIC_ASSERT( sizeof( struct $16__FB_ARRAYDIMTB$ ) == 24 );
struct $7FBARRAYI8FBSTRINGE {
	FBSTRING* DATA;
	FBSTRING* PTR;
	int64 SIZE;
	int64 ELEMENT_LEN;
	int64 DIMENSIONS;
	int64 FLAGS;
	struct $16__FB_ARRAYDIMTB$ DIMTB[8];
};
__FB_STATIC_ASSERT( sizeof( struct $7FBARRAYI8FBSTRINGE ) == 240 );
struct $7FBARRAYIKvE {
	void* DATA;
	void* PTR;
	int64 SIZE;
	int64 ELEMENT_LEN;
	int64 DIMENSIONS;
	int64 FLAGS;
	struct $16__FB_ARRAYDIMTB$ DIMTB[8];
};
__FB_STATIC_ASSERT( sizeof( struct $7FBARRAYIKvE ) == 240 );
struct $7FBARRAYIvE {
	void* DATA;
	void* PTR;
	int64 SIZE;
	int64 ELEMENT_LEN;
	int64 DIMENSIONS;
	int64 FLAGS;
	struct $16__FB_ARRAYDIMTB$ DIMTB[8];
};
__FB_STATIC_ASSERT( sizeof( struct $7FBARRAYIvE ) == 240 );
struct $8FBARRAY1I8FBSTRINGE {
	FBSTRING* DATA;
	FBSTRING* PTR;
	int64 SIZE;
	int64 ELEMENT_LEN;
	int64 DIMENSIONS;
	int64 FLAGS;
	struct $16__FB_ARRAYDIMTB$ DIMTB[1];
};
__FB_STATIC_ASSERT( sizeof( struct $8FBARRAY1I8FBSTRINGE ) == 72 );
int32 fb_ArrayRedimPresvEx( struct $7FBARRAYIvE*, uint64, int32, int32, uint64, ... );
void fb_ArrayStrErase( struct $7FBARRAYIvE* );
int64 fb_ArrayLBound( struct $7FBARRAYIKvE*, int64 );
int64 fb_ArrayUBound( struct $7FBARRAYIKvE*, int64 );
int32 fb_ConsoleInput( FBSTRING*, int32, int32 );
int32 fb_InputString( void*, int64, int32 );
void fb_Randomize( double, int32 );
void fb_PrintLongint( int32, int64, int32 );
void fb_PrintString( int32, FBSTRING*, int32 );
FBSTRING* fb_StrInit( void*, int64, void*, int64, int32 );
FBSTRING* fb_StrAssign( void*, int64, void*, int64, int32 );
void fb_StrDelete( FBSTRING* );
FBSTRING* fb_StrConcat( FBSTRING*, void*, int64, void*, int64 );
int32 fb_StrCompare( void*, int64, void*, int64 );
FBSTRING* fb_StrAllocTempDescZEx( uint8*, int64 );
FBSTRING* fb_StrMid( FBSTRING*, int64, int64 );
int64 fb_StrLen( void*, int64 );
void fb_StrSwap( void*, int64, int32, void*, int64, int32 );
FBSTRING* fb_StrLcase2( FBSTRING*, int32 );
void fb_Sleep( int32 );
static void fb_ctor__helptalks( void ) __attribute__(( constructor ));
void SAPPEND( struct $7FBARRAYI8FBSTRINGE*, FBSTRING* );
void GENERATE( struct $7FBARRAYI8FBSTRINGE*, int64, struct $7FBARRAYI8FBSTRINGE* );
void SORTING( struct $7FBARRAYI8FBSTRINGE* );
static struct $8FBARRAY1I8FBSTRINGE SSENTENCE$ = { (FBSTRING*)0ull, (FBSTRING*)0ull, 0ll, 24ll, 1ll, 17ll, {  } };
static struct $8FBARRAY1I8FBSTRINGE SARRREPLYS$ = { (FBSTRING*)0ull, (FBSTRING*)0ull, 0ll, 24ll, 1ll, 17ll, {  } };

int64 addss( int64 a, int64 b )
{
	int64 fb$result;
	__builtin_memset( &fb$result, 0, 8ll );
	label$2:;
	fb$result = a + b;
	goto label$3;
	label$3:;
	return fb$result;
}

int64 subs( int64 a, int64 b )
{
	int64 fb$result;
	__builtin_memset( &fb$result, 0, 8ll );
	label$4:;
	fb$result = a - b;
	goto label$5;
	label$5:;
	return fb$result;
}

int64 mul( int64 a, int64 b )
{
	int64 fb$result;
	__builtin_memset( &fb$result, 0, 8ll );
	label$6:;
	fb$result = a * b;
	goto label$7;
	label$7:;
	return fb$result;
}

int64 adivs( int64 a, int64 b )
{
	int64 fb$result;
	__builtin_memset( &fb$result, 0, 8ll );
	label$8:;
	fb$result = a / b;
	goto label$9;
	label$9:;
	return fb$result;
}

void prints( int64 a )
{
	label$10:;
	fb_PrintLongint( 0, a, 1 );
	label$11:;
}

int64 BINARYQUERY( struct $7FBARRAYI8FBSTRINGE* ARRAY$1, FBSTRING* SQUERY$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$12:;
	int64 IFIRST$1;
	IFIRST$1 = 0ll;
	int64 ILAST$1;
	int64 vr$1 = fb_ArrayUBound( (struct $7FBARRAYIKvE*)ARRAY$1, 1ll );
	ILAST$1 = vr$1;
	FBSTRING SQUERYL$1;
	FBSTRING* vr$2 = fb_StrLcase2( (FBSTRING*)SQUERY$1, 0 );
	fb_StrInit( (void*)&SQUERYL$1, -1ll, (void*)vr$2, -1ll, 0 );
	int64 IATTEMPTS$1;
	__builtin_memset( &IATTEMPTS$1, 0, 8ll );
	label$14:;
	if( ILAST$1 < IFIRST$1 ) goto label$15;
	{
		IATTEMPTS$1 = IATTEMPTS$1 + 1ll;
		int64 IMID$2;
		IMID$2 = ((IFIRST$1 + ILAST$1) + 1ll) / 2ll;
		if( IMID$2 != 0ll ) goto label$17;
		{
			fb$result$1 = IMID$2;
			fb_StrDelete( (FBSTRING*)&SQUERYL$1 );
			goto label$13;
		}
		label$17:;
		label$16:;
		if( IMID$2 <= 0ll ) goto label$19;
		{
			IFIRST$1 = IMID$2 + 1ll;
			goto label$14;
			label$19:;
		}
		ILAST$1 = IMID$2 + -1ll;
	}
	goto label$14;
	label$15:;
	fb$result$1 = -1ll;
	fb_StrDelete( (FBSTRING*)&SQUERYL$1 );
	goto label$13;
	fb_StrDelete( (FBSTRING*)&SQUERYL$1 );
	label$13:;
	return fb$result$1;
}

void SAPPEND( struct $7FBARRAYI8FBSTRINGE* ARR$1, FBSTRING* ITEM$1 )
{
	int64 TMP$2$1;
	label$20:;
	int64 IUBOUND$1;
	int64 vr$0 = fb_ArrayUBound( (struct $7FBARRAYIKvE*)ARR$1, 1ll );
	int64 vr$1 = fb_ArrayLBound( (struct $7FBARRAYIKvE*)ARR$1, 1ll );
	if( vr$0 >= vr$1 ) goto label$22;
	int64 vr$2 = fb_ArrayLBound( (struct $7FBARRAYIKvE*)ARR$1, 1ll );
	TMP$2$1 = vr$2;
	goto label$23;
	label$22:;
	int64 vr$3 = fb_ArrayUBound( (struct $7FBARRAYIKvE*)ARR$1, 1ll );
	TMP$2$1 = vr$3;
	label$23:;
	IUBOUND$1 = TMP$2$1;
	int64 vr$5 = fb_ArrayLBound( (struct $7FBARRAYIKvE*)ARR$1, 1ll );
	fb_ArrayRedimPresvEx( (struct $7FBARRAYIvE*)ARR$1, 24ull, -1, -1, 1ull, vr$5, IUBOUND$1 + 1ll );
	int64 vr$6 = fb_ArrayUBound( (struct $7FBARRAYIKvE*)ARR$1, 1ll );
	fb_StrAssign( (void*)((vr$6 * 24ll) + *(int64*)ARR$1), -1ll, (void*)ITEM$1, -1ll, 0 );
	label$21:;
}

void GENERATE( struct $7FBARRAYI8FBSTRINGE* ARR$1, int64 ICOUNT$1, struct $7FBARRAYI8FBSTRINGE* SOUTPUT$1 )
{
	label$24:;
	struct $8FBARRAY1I8FBSTRINGE SREPLYS$1;
	*(FBSTRING**)&SREPLYS$1 = (FBSTRING*)0ull;
	*(FBSTRING**)((uint8*)&SREPLYS$1 + 8ll) = (FBSTRING*)0ull;
	*(int64*)((uint8*)&SREPLYS$1 + 16ll) = 0ll;
	*(int64*)((uint8*)&SREPLYS$1 + 24ll) = 24ll;
	*(int64*)((uint8*)&SREPLYS$1 + 32ll) = 1ll;
	*(int64*)((uint8*)&SREPLYS$1 + 40ll) = 17ll;
	__builtin_memset( (void*)((uint8*)&SREPLYS$1 + 48ll), 0, 24ll );
	FBSTRING CURRENTCARACTER$1;
	__builtin_memset( &CURRENTCARACTER$1, 0, 24ll );
	int64 WORDSIZE$1;
	__builtin_memset( &WORDSIZE$1, 0, 8ll );
	{
		int64 I$2;
		I$2 = 1ll;
		int64 TMP$3$2;
		int64 vr$7 = fb_StrLen( (void*)((ICOUNT$1 * 24ll) + *(int64*)ARR$1), -1ll );
		TMP$3$2 = vr$7;
		goto label$26;
		label$29:;
		{
			FBSTRING* vr$12 = fb_StrMid( (FBSTRING*)((ICOUNT$1 * 24ll) + *(int64*)ARR$1), I$2, 1ll );
			fb_StrAssign( (void*)&CURRENTCARACTER$1, -1ll, (void*)vr$12, -1ll, 0 );
			{
				int32 vr$15 = fb_StrCompare( (void*)&CURRENTCARACTER$1, -1ll, (void*)" ", 2ll );
				if( (int64)vr$15 != 0ll ) goto label$31;
				label$32:;
				{
					if( WORDSIZE$1 == 0ll ) goto label$34;
					{
						FBSTRING TMP$5$6;
						__builtin_memset( &TMP$5$6, 0, 24ll );
						FBSTRING* vr$23 = fb_StrMid( (FBSTRING*)((ICOUNT$1 * 24ll) + *(int64*)ARR$1), I$2 - WORDSIZE$1, WORDSIZE$1 );
						fb_StrAssign( (void*)&TMP$5$6, -1ll, (void*)vr$23, -1ll, 0 );
						SAPPEND( SOUTPUT$1, &TMP$5$6 );
						fb_StrDelete( (FBSTRING*)&TMP$5$6 );
					}
					label$34:;
					label$33:;
					WORDSIZE$1 = 0ll;
				}
				goto label$30;
				label$31:;
				{
					WORDSIZE$1 = WORDSIZE$1 + 1ll;
				}
				label$35:;
				label$30:;
			}
			int64 vr$32 = fb_StrLen( (void*)((ICOUNT$1 * 24ll) + *(int64*)ARR$1), -1ll );
			if( I$2 != vr$32 ) goto label$37;
			{
				FBSTRING TMP$6$4;
				WORDSIZE$1 = WORDSIZE$1 + -1ll;
				__builtin_memset( &TMP$6$4, 0, 24ll );
				FBSTRING* vr$41 = fb_StrMid( (FBSTRING*)((ICOUNT$1 * 24ll) + *(int64*)ARR$1), I$2 - WORDSIZE$1, WORDSIZE$1 + 1ll );
				fb_StrAssign( (void*)&TMP$6$4, -1ll, (void*)vr$41, -1ll, 0 );
				SAPPEND( SOUTPUT$1, &TMP$6$4 );
				fb_StrDelete( (FBSTRING*)&TMP$6$4 );
			}
			label$37:;
			label$36:;
		}
		label$27:;
		I$2 = I$2 + 1ll;
		label$26:;
		if( I$2 <= TMP$3$2 ) goto label$29;
		label$28:;
	}
	fb_StrDelete( (FBSTRING*)&CURRENTCARACTER$1 );
	fb_ArrayStrErase( (struct $7FBARRAYIvE*)&SREPLYS$1 );
	label$25:;
}

void SORTING( struct $7FBARRAYI8FBSTRINGE* SARRAY$1 )
{
	label$38:;
	label$40:;
	{
		int64 BSORTED$2;
		BSORTED$2 = 0ll;
		{
			int32 N$3;
			N$3 = 0;
			int32 TMP$7$3;
			int64 vr$0 = fb_ArrayUBound( (struct $7FBARRAYIKvE*)SARRAY$1, 1ll );
			TMP$7$3 = (int32)(vr$0 + -1ll);
			goto label$43;
			label$46:;
			{
				int32 vr$13 = fb_StrCompare( (void*)(((int64)N$3 * 24ll) + *(int64*)SARRAY$1), -1ll, (void*)((uint8*)(((int64)N$3 * 24ll) + *(int64*)SARRAY$1) + 24ll), -1ll );
				if( (int64)vr$13 <= 0ll ) goto label$48;
				{
					{
						fb_StrSwap( (void*)(((int64)N$3 * 24ll) + *(int64*)SARRAY$1), -1ll, 0, (void*)((uint8*)(((int64)N$3 * 24ll) + *(int64*)SARRAY$1) + 24ll), -1ll, 0 );
					}
					BSORTED$2 = 1ll;
					label$48:;
				}
			}
			label$44:;
			N$3 = (int32)((int64)N$3 + 1ll);
			label$43:;
			if( (int64)N$3 <= (int64)TMP$7$3 ) goto label$46;
			label$45:;
		}
		if( BSORTED$2 != 0ll ) goto label$50;
		{
			goto label$41;
			label$50:;
		}
	}
	label$42:;
	goto label$40;
	label$41:;
	label$39:;
}

__attribute__(( constructor )) static void fb_ctor__helptalks( void )
{
	label$0:;
	fb_Randomize( -0x1.p+0, 0 );
	int64 ICOUNTREPLY$0;
	ICOUNTREPLY$0 = 1ll;
	FBSTRING ANS$0;
	__builtin_memset( &ANS$0, 0, 24ll );
	label$51:;
	{
		FBSTRING TMP$9$1;
		FBSTRING TMP$10$1;
		FBSTRING TMP$11$1;
		FBSTRING TMP$12$1;
		FBSTRING TMP$13$1;
		FBSTRING TMP$14$1;
		FBSTRING TMP$15$1;
		FBSTRING TMP$16$1;
		FBSTRING* vr$1 = fb_StrAllocTempDescZEx( (uint8*)"you: ", 5ll );
		fb_ConsoleInput( (FBSTRING*)vr$1, 0, -1 );
		fb_InputString( (void*)&ANS$0, -1ll, 0 );
		SAPPEND( (struct $7FBARRAYI8FBSTRINGE*)&SSENTENCE$, &ANS$0 );
		GENERATE( (struct $7FBARRAYI8FBSTRINGE*)&SSENTENCE$, ICOUNTREPLY$0, (struct $7FBARRAYI8FBSTRINGE*)&SARRREPLYS$ );
		ICOUNTREPLY$0 = ICOUNTREPLY$0 + 1ll;
		SORTING( (struct $7FBARRAYI8FBSTRINGE*)&SARRREPLYS$ );
		__builtin_memset( &TMP$9$1, 0, 24ll );
		FBSTRING* vr$12 = fb_StrConcat( &TMP$9$1, (void*)((uint8*)*(int64*)&SARRREPLYS$ + 24ll), -1ll, (void*)" ", 2ll );
		__builtin_memset( &TMP$10$1, 0, 24ll );
		FBSTRING* vr$15 = fb_StrConcat( &TMP$10$1, (void*)vr$12, -1ll, (void*)((uint8*)*(int64*)&SARRREPLYS$ + 48ll), -1ll );
		__builtin_memset( &TMP$11$1, 0, 24ll );
		FBSTRING* vr$18 = fb_StrConcat( &TMP$11$1, (void*)vr$15, -1ll, (void*)" ", 2ll );
		__builtin_memset( &TMP$12$1, 0, 24ll );
		FBSTRING* vr$21 = fb_StrConcat( &TMP$12$1, (void*)vr$18, -1ll, (void*)((uint8*)*(int64*)&SARRREPLYS$ + 72ll), -1ll );
		__builtin_memset( &TMP$13$1, 0, 24ll );
		FBSTRING* vr$24 = fb_StrConcat( &TMP$13$1, (void*)vr$21, -1ll, (void*)" ", 2ll );
		__builtin_memset( &TMP$14$1, 0, 24ll );
		FBSTRING* vr$27 = fb_StrConcat( &TMP$14$1, (void*)vr$24, -1ll, (void*)((uint8*)*(int64*)&SARRREPLYS$ + 96ll), -1ll );
		__builtin_memset( &TMP$15$1, 0, 24ll );
		FBSTRING* vr$30 = fb_StrConcat( &TMP$15$1, (void*)vr$27, -1ll, (void*)" ", 2ll );
		__builtin_memset( &TMP$16$1, 0, 24ll );
		FBSTRING* vr$33 = fb_StrConcat( &TMP$16$1, (void*)vr$30, -1ll, (void*)((uint8*)*(int64*)&SARRREPLYS$ + 120ll), -1ll );
		fb_PrintString( 0, (FBSTRING*)vr$33, 1 );
	}
	label$53:;
	FBSTRING* vr$35 = fb_StrLcase2( (FBSTRING*)&ANS$0, 0 );
	int32 vr$36 = fb_StrCompare( (void*)vr$35, -1ll, (void*)"quit", 5ll );
	if( (int64)vr$36 != 0ll ) goto label$51;
	label$52:;
	fb_Sleep( -1 );
	fb_StrDelete( (FBSTRING*)&ANS$0 );
	label$1:;
}

static const char __attribute__((used, section(".fbctinf"))) __fbctinf[] = "-l\0fb";
