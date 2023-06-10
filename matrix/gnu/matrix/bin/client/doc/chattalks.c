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
#define fb_D2L( value ) ((int64)__builtin_nearbyint( value ))
int32 fb_ArrayRedimPresvEx( struct $7FBARRAYIvE*, uint64, int32, int32, uint64, ... );
void fb_ArrayStrErase( struct $7FBARRAYIvE* );
int64 fb_ArrayLBound( struct $7FBARRAYIKvE*, int64 );
int64 fb_ArrayUBound( struct $7FBARRAYIKvE*, int64 );
int32 fb_ConsoleInput( FBSTRING*, int32, int32 );
int32 fb_InputString( void*, int64, int32 );
void fb_Randomize( double, int32 );
double fb_Rnd( float );
void fb_PrintString( int32, FBSTRING*, int32 );
FBSTRING* fb_StrAssign( void*, int64, void*, int64, int32 );
void fb_StrDelete( FBSTRING* );
FBSTRING* fb_StrConcat( FBSTRING*, void*, int64, void*, int64 );
int32 fb_StrCompare( void*, int64, void*, int64 );
FBSTRING* fb_StrAllocTempDescZEx( uint8*, int64 );
FBSTRING* fb_StrMid( FBSTRING*, int64, int64 );
int64 fb_StrLen( void*, int64 );
FBSTRING* fb_StrLcase2( FBSTRING*, int32 );
void fb_Sleep( int32 );
static void fb_ctor__chattalks( void ) __attribute__(( constructor ));
void SAPPEND( struct $7FBARRAYI8FBSTRINGE*, FBSTRING* );
void GENERATE( struct $7FBARRAYI8FBSTRINGE*, int64, struct $7FBARRAYI8FBSTRINGE* );
static struct $8FBARRAY1I8FBSTRINGE SSENTENCE$ = { (FBSTRING*)0ull, (FBSTRING*)0ull, 0ll, 24ll, 1ll, 17ll, {  } };
static struct $8FBARRAY1I8FBSTRINGE SARRREPLYS$ = { (FBSTRING*)0ull, (FBSTRING*)0ull, 0ll, 24ll, 1ll, 17ll, {  } };

void SAPPEND( struct $7FBARRAYI8FBSTRINGE* ARR$1, FBSTRING* ITEM$1 )
{
	int64 TMP$2$1;
	label$2:;
	int64 IUBOUND$1;
	int64 vr$0 = fb_ArrayUBound( (struct $7FBARRAYIKvE*)ARR$1, 1ll );
	int64 vr$1 = fb_ArrayLBound( (struct $7FBARRAYIKvE*)ARR$1, 1ll );
	if( vr$0 >= vr$1 ) goto label$4;
	int64 vr$2 = fb_ArrayLBound( (struct $7FBARRAYIKvE*)ARR$1, 1ll );
	TMP$2$1 = vr$2;
	goto label$5;
	label$4:;
	int64 vr$3 = fb_ArrayUBound( (struct $7FBARRAYIKvE*)ARR$1, 1ll );
	TMP$2$1 = vr$3;
	label$5:;
	IUBOUND$1 = TMP$2$1;
	int64 vr$5 = fb_ArrayLBound( (struct $7FBARRAYIKvE*)ARR$1, 1ll );
	fb_ArrayRedimPresvEx( (struct $7FBARRAYIvE*)ARR$1, 24ull, -1, -1, 1ull, vr$5, IUBOUND$1 + 1ll );
	int64 vr$6 = fb_ArrayUBound( (struct $7FBARRAYIKvE*)ARR$1, 1ll );
	fb_StrAssign( (void*)((vr$6 * 24ll) + *(int64*)ARR$1), -1ll, (void*)ITEM$1, -1ll, 0 );
	label$3:;
}

void GENERATE( struct $7FBARRAYI8FBSTRINGE* ARR$1, int64 ICOUNT$1, struct $7FBARRAYI8FBSTRINGE* SOUTPUT$1 )
{
	label$6:;
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
		goto label$8;
		label$11:;
		{
			FBSTRING* vr$12 = fb_StrMid( (FBSTRING*)((ICOUNT$1 * 24ll) + *(int64*)ARR$1), I$2, 1ll );
			fb_StrAssign( (void*)&CURRENTCARACTER$1, -1ll, (void*)vr$12, -1ll, 0 );
			{
				int32 vr$15 = fb_StrCompare( (void*)&CURRENTCARACTER$1, -1ll, (void*)" ", 2ll );
				if( (int64)vr$15 != 0ll ) goto label$13;
				label$14:;
				{
					if( WORDSIZE$1 == 0ll ) goto label$16;
					{
						FBSTRING TMP$5$6;
						__builtin_memset( &TMP$5$6, 0, 24ll );
						FBSTRING* vr$23 = fb_StrMid( (FBSTRING*)((ICOUNT$1 * 24ll) + *(int64*)ARR$1), I$2 - WORDSIZE$1, WORDSIZE$1 );
						fb_StrAssign( (void*)&TMP$5$6, -1ll, (void*)vr$23, -1ll, 0 );
						SAPPEND( SOUTPUT$1, &TMP$5$6 );
						fb_StrDelete( (FBSTRING*)&TMP$5$6 );
					}
					label$16:;
					label$15:;
					WORDSIZE$1 = 0ll;
				}
				goto label$12;
				label$13:;
				{
					WORDSIZE$1 = WORDSIZE$1 + 1ll;
				}
				label$17:;
				label$12:;
			}
			int64 vr$32 = fb_StrLen( (void*)((ICOUNT$1 * 24ll) + *(int64*)ARR$1), -1ll );
			if( I$2 != vr$32 ) goto label$19;
			{
				FBSTRING TMP$6$4;
				WORDSIZE$1 = WORDSIZE$1 + -1ll;
				__builtin_memset( &TMP$6$4, 0, 24ll );
				FBSTRING* vr$41 = fb_StrMid( (FBSTRING*)((ICOUNT$1 * 24ll) + *(int64*)ARR$1), I$2 - WORDSIZE$1, WORDSIZE$1 + 1ll );
				fb_StrAssign( (void*)&TMP$6$4, -1ll, (void*)vr$41, -1ll, 0 );
				SAPPEND( SOUTPUT$1, &TMP$6$4 );
				fb_StrDelete( (FBSTRING*)&TMP$6$4 );
			}
			label$19:;
			label$18:;
		}
		label$9:;
		I$2 = I$2 + 1ll;
		label$8:;
		if( I$2 <= TMP$3$2 ) goto label$11;
		label$10:;
	}
	fb_StrDelete( (FBSTRING*)&CURRENTCARACTER$1 );
	fb_ArrayStrErase( (struct $7FBARRAYIvE*)&SREPLYS$1 );
	label$7:;
}

__attribute__(( constructor )) static void fb_ctor__chattalks( void )
{
	label$0:;
	fb_Randomize( -0x1.p+0, 0 );
	int64 ICOUNTREPLY$0;
	ICOUNTREPLY$0 = 1ll;
	FBSTRING ANS$0;
	__builtin_memset( &ANS$0, 0, 24ll );
	label$20:;
	{
		FBSTRING TMP$9$1;
		FBSTRING TMP$10$1;
		FBSTRING TMP$11$1;
		FBSTRING TMP$12$1;
		FBSTRING TMP$13$1;
		FBSTRING TMP$14$1;
		FBSTRING TMP$15$1;
		FBSTRING TMP$16$1;
		FBSTRING TMP$17$1;
		FBSTRING* vr$1 = fb_StrAllocTempDescZEx( (uint8*)"you: ", 5ll );
		fb_ConsoleInput( (FBSTRING*)vr$1, 0, -1 );
		fb_InputString( (void*)&ANS$0, -1ll, 0 );
		SAPPEND( (struct $7FBARRAYI8FBSTRINGE*)&SSENTENCE$, &ANS$0 );
		GENERATE( (struct $7FBARRAYI8FBSTRINGE*)&SSENTENCE$, ICOUNTREPLY$0, (struct $7FBARRAYI8FBSTRINGE*)&SARRREPLYS$ );
		ICOUNTREPLY$0 = ICOUNTREPLY$0 + 1ll;
		double vr$5 = fb_Rnd( 0x1.p+0f );
		int64 vr$6 = fb_ArrayUBound( (struct $7FBARRAYIKvE*)&SARRREPLYS$, 1ll );
		double vr$15 = fb_Rnd( 0x1.p+0f );
		int64 vr$16 = fb_ArrayUBound( (struct $7FBARRAYIKvE*)&SARRREPLYS$, 1ll );
		double vr$25 = fb_Rnd( 0x1.p+0f );
		int64 vr$26 = fb_ArrayUBound( (struct $7FBARRAYIKvE*)&SARRREPLYS$, 1ll );
		double vr$35 = fb_Rnd( 0x1.p+0f );
		int64 vr$36 = fb_ArrayUBound( (struct $7FBARRAYIKvE*)&SARRREPLYS$, 1ll );
		double vr$45 = fb_Rnd( 0x1.p+0f );
		int64 vr$46 = fb_ArrayUBound( (struct $7FBARRAYIKvE*)&SARRREPLYS$, 1ll );
		__builtin_memset( &TMP$9$1, 0, 24ll );
		FBSTRING* vr$57 = fb_StrConcat( &TMP$9$1, (void*)"ChatBot Aviv: ", 15ll, (void*)((fb_D2L( __builtin_floor( ((vr$45 * (double)vr$46) + 0x1.p+0) ) ) * 24ll) + *(int64*)&SARRREPLYS$), -1ll );
		__builtin_memset( &TMP$10$1, 0, 24ll );
		FBSTRING* vr$60 = fb_StrConcat( &TMP$10$1, (void*)vr$57, -1ll, (void*)" ", 2ll );
		__builtin_memset( &TMP$11$1, 0, 24ll );
		FBSTRING* vr$63 = fb_StrConcat( &TMP$11$1, (void*)vr$60, -1ll, (void*)((fb_D2L( __builtin_floor( ((vr$35 * (double)vr$36) + 0x1.p+0) ) ) * 24ll) + *(int64*)&SARRREPLYS$), -1ll );
		__builtin_memset( &TMP$12$1, 0, 24ll );
		FBSTRING* vr$66 = fb_StrConcat( &TMP$12$1, (void*)vr$63, -1ll, (void*)" ", 2ll );
		__builtin_memset( &TMP$13$1, 0, 24ll );
		FBSTRING* vr$69 = fb_StrConcat( &TMP$13$1, (void*)vr$66, -1ll, (void*)((fb_D2L( __builtin_floor( ((vr$25 * (double)vr$26) + 0x1.p+0) ) ) * 24ll) + *(int64*)&SARRREPLYS$), -1ll );
		__builtin_memset( &TMP$14$1, 0, 24ll );
		FBSTRING* vr$72 = fb_StrConcat( &TMP$14$1, (void*)vr$69, -1ll, (void*)" ", 2ll );
		__builtin_memset( &TMP$15$1, 0, 24ll );
		FBSTRING* vr$75 = fb_StrConcat( &TMP$15$1, (void*)vr$72, -1ll, (void*)((fb_D2L( __builtin_floor( ((vr$15 * (double)vr$16) + 0x1.p+0) ) ) * 24ll) + *(int64*)&SARRREPLYS$), -1ll );
		__builtin_memset( &TMP$16$1, 0, 24ll );
		FBSTRING* vr$78 = fb_StrConcat( &TMP$16$1, (void*)vr$75, -1ll, (void*)" ", 2ll );
		__builtin_memset( &TMP$17$1, 0, 24ll );
		FBSTRING* vr$81 = fb_StrConcat( &TMP$17$1, (void*)vr$78, -1ll, (void*)((fb_D2L( __builtin_floor( ((vr$5 * (double)vr$6) + 0x1.p+0) ) ) * 24ll) + *(int64*)&SARRREPLYS$), -1ll );
		fb_PrintString( 0, (FBSTRING*)vr$81, 1 );
	}
	label$22:;
	FBSTRING* vr$83 = fb_StrLcase2( (FBSTRING*)&ANS$0, 0 );
	int32 vr$84 = fb_StrCompare( (void*)vr$83, -1ll, (void*)"quit", 5ll );
	if( (int64)vr$84 != 0ll ) goto label$20;
	label$21:;
	fb_Sleep( -1 );
	fb_StrDelete( (FBSTRING*)&ANS$0 );
	label$1:;
}

static const char __attribute__((used, section(".fbctinf"))) __fbctinf[] = "-l\0fb";
