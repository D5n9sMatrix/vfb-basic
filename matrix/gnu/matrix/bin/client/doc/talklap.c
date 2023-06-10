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
struct $11REPLYSTRUCT {
	FBSTRING SWORD;
	int32 IUSES;
};
#define __FB_STATIC_ASSERT( expr ) extern int __$fb_structsizecheck[(expr) ? 1 : -1]
__FB_STATIC_ASSERT( sizeof( struct $11REPLYSTRUCT ) == 32 );
struct $16__FB_ARRAYDIMTB$ {
	int64 ELEMENTS;
	int64 LBOUND;
	int64 UBOUND;
};
__FB_STATIC_ASSERT( sizeof( struct $16__FB_ARRAYDIMTB$ ) == 24 );
struct $8FBARRAY1I11REPLYSTRUCTE {
	struct $11REPLYSTRUCT* DATA;
	struct $11REPLYSTRUCT* PTR;
	int64 SIZE;
	int64 ELEMENT_LEN;
	int64 DIMENSIONS;
	int64 FLAGS;
	struct $16__FB_ARRAYDIMTB$ DIMTB[1];
};
__FB_STATIC_ASSERT( sizeof( struct $8FBARRAY1I11REPLYSTRUCTE ) == 72 );
struct $8FBARRAY1IiE {
	int32* DATA;
	int32* PTR;
	int64 SIZE;
	int64 ELEMENT_LEN;
	int64 DIMENSIONS;
	int64 FLAGS;
	struct $16__FB_ARRAYDIMTB$ DIMTB[1];
};
__FB_STATIC_ASSERT( sizeof( struct $8FBARRAY1IiE ) == 72 );
struct $9REPLYLIST {
	struct $8FBARRAY1I11REPLYSTRUCTE TREPLYS;
	struct $8FBARRAY1IiE IUSAGEINDEX;
	struct $8FBARRAY1IiE IALPHAINDEX;
	int64 ISTORAGE;
	int64 ICOUNT;
};
__FB_STATIC_ASSERT( sizeof( struct $9REPLYLIST ) == 232 );
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
int32 fb_ArrayRedimPresvEx( struct $7FBARRAYIvE*, uint64, int32, int32, uint64, ... );
int32 fb_ArrayRedimPresvObj( struct $7FBARRAYIvE*, uint64, void*, void*, uint64, ... );
int32 fb_ArrayRedimTo( struct $7FBARRAYIvE*, struct $7FBARRAYIvE*, int32, void*, void* );
int32 fb_ArrayErase( struct $7FBARRAYIvE* );
int32 fb_ArrayEraseObj( struct $7FBARRAYIvE*, void*, void* );
int64 fb_ArrayLBound( struct $7FBARRAYIKvE*, int64 );
int64 fb_ArrayUBound( struct $7FBARRAYIKvE*, int64 );
int32 fb_GetX( void );
void fb_Cls( int32 );
int32 fb_LineInput( FBSTRING*, void*, int64, int32, int32, int32 );
void fb_Randomize( double, int32 );
void fb_PrintVoid( int32, int32 );
void fb_PrintString( int32, FBSTRING*, int32 );
FBSTRING* fb_StrInit( void*, int64, void*, int64, int32 );
FBSTRING* fb_StrAssign( void*, int64, void*, int64, int32 );
void fb_StrDelete( FBSTRING* );
FBSTRING* fb_StrConcat( FBSTRING*, void*, int64, void*, int64 );
int32 fb_StrCompare( void*, int64, void*, int64 );
FBSTRING* fb_StrAllocTempDescZEx( uint8*, int64 );
FBSTRING* fb_IntToStr( int32 );
FBSTRING* fb_LongintToStr( int64 );
FBSTRING* fb_StrMid( FBSTRING*, int64, int64 );
int64 fb_StrLen( void*, int64 );
FBSTRING* fb_StrLcase2( FBSTRING*, int32 );
void fb_Sleep( int32 );
static void fb_ctor__talklap( void ) __attribute__(( constructor ));
void* memmove( void*, void*, uint64 );
int32 strcmp( uint8*, uint8* );
static void _ZN11REPLYSTRUCTC1Ev( struct $11REPLYSTRUCT* );
static void _ZN11REPLYSTRUCTaSERKS_( struct $11REPLYSTRUCT*, struct $11REPLYSTRUCT* );
static void _ZN11REPLYSTRUCTD1Ev( struct $11REPLYSTRUCT* );
static void _ZN9REPLYLISTC1Ev( struct $9REPLYLIST* );
static void _ZN9REPLYLISTaSERKS_( struct $9REPLYLIST*, struct $9REPLYLIST* );
static void _ZN9REPLYLISTD1Ev( struct $9REPLYLIST* );
void SORTLISTALPHA( struct $9REPLYLIST* );
void SORTLISTUSAGE( struct $9REPLYLIST* );
int64 BINARYQUERYLIST( struct $9REPLYLIST*, FBSTRING* );
void ADDWORD( struct $9REPLYLIST*, FBSTRING* );
void SAPPEND( struct $7FBARRAYI8FBSTRINGE*, FBSTRING* );
void PARSESENTENCE( struct $9REPLYLIST*, FBSTRING* );
static void _GLOBAL__I( void ) __attribute__(( constructor ));
static void _GLOBAL__D( void ) __attribute__(( destructor ));
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
static struct $8FBARRAY1I8FBSTRINGE SSENTENCE$ = { (FBSTRING*)0ull, (FBSTRING*)0ull, 0ll, 24ll, 1ll, 17ll, {  } };
static struct $9REPLYLIST TREPLYS$;

void SORTLISTALPHA( struct $9REPLYLIST* TLIST$1 )
{
	label$24:;
	int64 IITERATIONS$1;
	IITERATIONS$1 = 0ll;
	{
		struct $9REPLYLIST* TMP$15$2;
		TMP$15$2 = TLIST$1;
		label$26:;
		{
			int64 BSORTED$3;
			BSORTED$3 = 0ll;
			IITERATIONS$1 = IITERATIONS$1 + 1ll;
			{
				int32 N$4;
				N$4 = 0;
				int32 TMP$16$4;
				TMP$16$4 = (int32)(*(int64*)((uint8*)TMP$15$2 + 224ll) + -2ll);
				goto label$29;
				label$32:;
				{
					int32 vr$22 = fb_StrCompare( (void*)((uint8*)*(struct $11REPLYSTRUCT**)TMP$15$2 + ((int64)*(int32*)((uint8*)*(int32**)((uint8*)TMP$15$2 + 144ll) + ((int64)N$4 << (2ll & 63ll))) << (5ll & 63ll))), -1ll, (void*)((uint8*)*(struct $11REPLYSTRUCT**)TMP$15$2 + ((int64)*(int32*)((uint8*)((uint8*)*(int32**)((uint8*)TMP$15$2 + 144ll) + ((int64)N$4 << (2ll & 63ll))) + 4ll) << (5ll & 63ll))), -1ll );
					if( (int64)vr$22 <= 0ll ) goto label$34;
					{
						{
							int32 TMP$17$7;
							TMP$17$7 = *(int32*)((uint8*)*(int32**)((uint8*)TMP$15$2 + 144ll) + ((int64)N$4 << (2ll & 63ll)));
							*(int32*)((uint8*)*(int32**)((uint8*)TMP$15$2 + 144ll) + ((int64)N$4 << (2ll & 63ll))) = *(int32*)((uint8*)((uint8*)*(int32**)((uint8*)TMP$15$2 + 144ll) + ((int64)N$4 << (2ll & 63ll))) + 4ll);
							*(int32*)((uint8*)((uint8*)*(int32**)((uint8*)TMP$15$2 + 144ll) + ((int64)N$4 << (2ll & 63ll))) + 4ll) = TMP$17$7;
						}
						BSORTED$3 = 1ll;
						label$34:;
					}
				}
				label$30:;
				N$4 = (int32)((int64)N$4 + 1ll);
				label$29:;
				if( (int64)N$4 <= (int64)TMP$16$4 ) goto label$32;
				label$31:;
			}
			if( BSORTED$3 != 0ll ) goto label$36;
			{
				goto label$27;
				label$36:;
			}
		}
		label$28:;
		goto label$26;
		label$27:;
	}
	label$25:;
}

void SORTLISTUSAGE( struct $9REPLYLIST* TLIST$1 )
{
	label$37:;
	int64 IITERATIONS$1;
	IITERATIONS$1 = 0ll;
	{
		FBSTRING TMP$24$2;
		FBSTRING TMP$25$2;
		FBSTRING TMP$26$2;
		FBSTRING TMP$27$2;
		struct $9REPLYLIST* TMP$18$2;
		TMP$18$2 = TLIST$1;
		label$39:;
		{
			int64 BSORTED$3;
			BSORTED$3 = 0ll;
			IITERATIONS$1 = IITERATIONS$1 + 1ll;
			{
				int32 N$4;
				N$4 = 0;
				int32 TMP$19$4;
				TMP$19$4 = (int32)(*(int64*)((uint8*)TMP$18$2 + 224ll) + -2ll);
				goto label$42;
				label$45:;
				{
					if( (int64)*(int32*)((uint8*)((uint8*)*(struct $11REPLYSTRUCT**)TMP$18$2 + ((int64)*(int32*)((uint8*)*(int32**)((uint8*)TMP$18$2 + 72ll) + ((int64)N$4 << (2ll & 63ll))) << (5ll & 63ll))) + 24ll) >= (int64)*(int32*)((uint8*)((uint8*)*(struct $11REPLYSTRUCT**)TMP$18$2 + ((int64)*(int32*)((uint8*)((uint8*)*(int32**)((uint8*)TMP$18$2 + 72ll) + ((int64)N$4 << (2ll & 63ll))) + 4ll) << (5ll & 63ll))) + 24ll) ) goto label$47;
					{
						{
							int32 TMP$20$7;
							TMP$20$7 = *(int32*)((uint8*)*(int32**)((uint8*)TMP$18$2 + 72ll) + ((int64)N$4 << (2ll & 63ll)));
							*(int32*)((uint8*)*(int32**)((uint8*)TMP$18$2 + 72ll) + ((int64)N$4 << (2ll & 63ll))) = *(int32*)((uint8*)((uint8*)*(int32**)((uint8*)TMP$18$2 + 72ll) + ((int64)N$4 << (2ll & 63ll))) + 4ll);
							*(int32*)((uint8*)((uint8*)*(int32**)((uint8*)TMP$18$2 + 72ll) + ((int64)N$4 << (2ll & 63ll))) + 4ll) = TMP$20$7;
						}
						BSORTED$3 = 1ll;
						label$47:;
					}
				}
				label$43:;
				N$4 = (int32)((int64)N$4 + 1ll);
				label$42:;
				if( (int64)N$4 <= (int64)TMP$19$4 ) goto label$45;
				label$44:;
			}
			if( BSORTED$3 != 0ll ) goto label$49;
			{
				goto label$40;
				label$49:;
			}
		}
		label$41:;
		goto label$39;
		label$40:;
		FBSTRING* vr$44 = fb_LongintToStr( *(int64*)((uint8*)TMP$18$2 + 224ll) );
		FBSTRING* vr$45 = fb_LongintToStr( IITERATIONS$1 );
		__builtin_memset( &TMP$24$2, 0, 24ll );
		FBSTRING* vr$48 = fb_StrConcat( &TMP$24$2, (void*)"Sorted (by usage) in ", 22ll, (void*)vr$45, -1ll );
		__builtin_memset( &TMP$25$2, 0, 24ll );
		FBSTRING* vr$51 = fb_StrConcat( &TMP$25$2, (void*)vr$48, -1ll, (void*)" iterations.", 13ll );
		__builtin_memset( &TMP$26$2, 0, 24ll );
		FBSTRING* vr$54 = fb_StrConcat( &TMP$26$2, (void*)vr$51, -1ll, (void*)" words=", 8ll );
		__builtin_memset( &TMP$27$2, 0, 24ll );
		FBSTRING* vr$57 = fb_StrConcat( &TMP$27$2, (void*)vr$54, -1ll, (void*)vr$44, -1ll );
		fb_PrintString( 0, (FBSTRING*)vr$57, 1 );
	}
	label$38:;
}

int32 QSORTLISTALPHA( int64* PI1$1, int64* PI2$1 )
{
	int32 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 4ll );
	label$50:;
	{
		int32 vr$9 = strcmp( (uint8*)*(uint8**)((uint8*)*(struct $11REPLYSTRUCT**)&TREPLYS$ + (*PI1$1 << (5ll & 63ll))), (uint8*)*(uint8**)((uint8*)*(struct $11REPLYSTRUCT**)&TREPLYS$ + (*PI2$1 << (5ll & 63ll))) );
		fb$result$1 = vr$9;
		goto label$51;
	}
	label$51:;
	return fb$result$1;
}

int32 QSORTLISTUSAGE( int64* PI1$1, int64* PI2$1 )
{
	int32 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 4ll );
	label$52:;
	{
		fb$result$1 = (int32)((int64)*(int32*)((uint8*)((uint8*)*(struct $11REPLYSTRUCT**)&TREPLYS$ + (*PI2$1 << (5ll & 63ll))) + 24ll) - (int64)*(int32*)((uint8*)((uint8*)*(struct $11REPLYSTRUCT**)&TREPLYS$ + (*PI1$1 << (5ll & 63ll))) + 24ll));
		goto label$53;
	}
	label$53:;
	return fb$result$1;
}

int64 LINEARQUERYLIST( struct $9REPLYLIST* TLIST$1, FBSTRING* SQUERY$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$54:;
	{
		struct $9REPLYLIST* TMP$28$2;
		TMP$28$2 = TLIST$1;
		{
			int64 N$3;
			N$3 = 0ll;
			int64 TMP$29$3;
			TMP$29$3 = *(int64*)((uint8*)TMP$28$2 + 224ll) + -1ll;
			goto label$56;
			label$59:;
			{
				int32 vr$7 = strcmp( (uint8*)*(uint8**)SQUERY$1, (uint8*)*(uint8**)((uint8*)*(struct $11REPLYSTRUCT**)TMP$28$2 + (N$3 << (5ll & 63ll))) );
				if( (int64)vr$7 != 0ll ) goto label$61;
				{
					fb$result$1 = N$3;
					goto label$55;
				}
				label$61:;
				label$60:;
			}
			label$57:;
			N$3 = N$3 + 1ll;
			label$56:;
			if( N$3 <= TMP$29$3 ) goto label$59;
			label$58:;
		}
		fb$result$1 = -1ll;
		goto label$55;
	}
	label$55:;
	return fb$result$1;
}

int64 BINARYQUERYLIST( struct $9REPLYLIST* TLIST$1, FBSTRING* SQUERY$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$62:;
	{
		struct $9REPLYLIST* TMP$30$2;
		TMP$30$2 = TLIST$1;
		int64 IFIRST$2;
		IFIRST$2 = 0ll;
		int64 ILAST$2;
		ILAST$2 = *(int64*)((uint8*)TMP$30$2 + 224ll) + -1ll;
		int64 IATTEMPTS$2;
		__builtin_memset( &IATTEMPTS$2, 0, 8ll );
		label$64:;
		if( ILAST$2 < IFIRST$2 ) goto label$65;
		{
			IATTEMPTS$2 = IATTEMPTS$2 + 1ll;
			int64 IMID$3;
			IMID$3 = ((IFIRST$2 + ILAST$2) + 1ll) / 2ll;
			int32 IRESULT$3;
			int32 vr$16 = strcmp( (uint8*)*(uint8**)SQUERY$1, (uint8*)*(uint8**)((uint8*)*(struct $11REPLYSTRUCT**)TMP$30$2 + ((int64)*(int32*)((uint8*)*(int32**)((uint8*)TMP$30$2 + 144ll) + (IMID$3 << (2ll & 63ll))) << (5ll & 63ll))) );
			IRESULT$3 = vr$16;
			if( (int64)IRESULT$3 != 0ll ) goto label$67;
			{
				fb$result$1 = (int64)*(int32*)((uint8*)*(int32**)((uint8*)TMP$30$2 + 144ll) + (IMID$3 << (2ll & 63ll)));
				goto label$63;
			}
			label$67:;
			label$66:;
			if( (int64)IRESULT$3 <= 0ll ) goto label$69;
			{
				IFIRST$2 = IMID$3 + 1ll;
				goto label$64;
				label$69:;
			}
			ILAST$2 = IMID$3 + -1ll;
		}
		goto label$64;
		label$65:;
		fb$result$1 = ~(((IFIRST$2 + ILAST$2) + 1ll) / 2ll);
		goto label$63;
	}
	label$63:;
	return fb$result$1;
}

void ADDWORD( struct $9REPLYLIST* TLIST$1, FBSTRING* SWORD$1 )
{
	label$70:;
	FBSTRING SNEWWORD$1;
	FBSTRING* vr$0 = fb_StrLcase2( (FBSTRING*)SWORD$1, 0 );
	fb_StrInit( (void*)&SNEWWORD$1, -1ll, (void*)vr$0, -1ll, 0 );
	{
		struct $9REPLYLIST* TMP$31$2;
		TMP$31$2 = TLIST$1;
		int64 IINDEX$2;
		int64 vr$3 = BINARYQUERYLIST( TLIST$1, &SNEWWORD$1 );
		IINDEX$2 = vr$3;
		if( IINDEX$2 >= 0ll ) goto label$73;
		{
			if( *(int64*)((uint8*)TMP$31$2 + 224ll) < *(int64*)((uint8*)TMP$31$2 + 216ll) ) goto label$75;
			{
				*(int64*)((uint8*)TMP$31$2 + 216ll) = (*(int64*)((uint8*)TMP$31$2 + 216ll) + (*(int64*)((uint8*)TMP$31$2 + 216ll) / 2ll)) + 15ll;
				fb_ArrayRedimPresvObj( (struct $7FBARRAYIvE*)TMP$31$2, 32ull, (void*)&_ZN11REPLYSTRUCTC1Ev, (void*)&_ZN11REPLYSTRUCTD1Ev, 1ull, 0ll, *(int64*)((uint8*)TMP$31$2 + 216ll) );
				fb_ArrayRedimPresvEx( (struct $7FBARRAYIvE*)((uint8*)TMP$31$2 + 72ll), 4ull, -1, 0, 1ull, 0ll, *(int64*)((uint8*)TMP$31$2 + 216ll) );
				fb_ArrayRedimPresvEx( (struct $7FBARRAYIvE*)((uint8*)TMP$31$2 + 144ll), 4ull, -1, 0, 1ull, 0ll, *(int64*)((uint8*)TMP$31$2 + 216ll) );
			}
			label$75:;
			label$74:;
			fb_StrAssign( (void*)((uint8*)*(struct $11REPLYSTRUCT**)TMP$31$2 + (*(int64*)((uint8*)TMP$31$2 + 224ll) << (5ll & 63ll))), -1ll, (void*)&SNEWWORD$1, -1ll, 0 );
			*(int32*)((uint8*)((uint8*)*(struct $11REPLYSTRUCT**)TMP$31$2 + (*(int64*)((uint8*)TMP$31$2 + 224ll) << (5ll & 63ll))) + 24ll) = 1;
			*(int32*)((uint8*)*(int32**)((uint8*)TMP$31$2 + 72ll) + (*(int64*)((uint8*)TMP$31$2 + 224ll) << (2ll & 63ll))) = (int32)*(int64*)((uint8*)TMP$31$2 + 224ll);
			IINDEX$2 = ~IINDEX$2;
			memmove( (void*)((uint8*)((uint8*)*(int32**)((uint8*)TMP$31$2 + 144ll) + (IINDEX$2 << (2ll & 63ll))) + 4ll), (void*)((uint8*)*(int32**)((uint8*)TMP$31$2 + 144ll) + (IINDEX$2 << (2ll & 63ll))), (uint64)((*(int64*)((uint8*)TMP$31$2 + 224ll) - IINDEX$2) << (2ll & 63ll)) );
			*(int32*)((uint8*)*(int32**)((uint8*)TMP$31$2 + 144ll) + (IINDEX$2 << (2ll & 63ll))) = (int32)*(int64*)((uint8*)TMP$31$2 + 224ll);
			*(int64*)((uint8*)TMP$31$2 + 224ll) = *(int64*)((uint8*)TMP$31$2 + 224ll) + 1ll;
		}
		goto label$72;
		label$73:;
		{
			*(int32*)((uint8*)((uint8*)*(struct $11REPLYSTRUCT**)TMP$31$2 + (IINDEX$2 << (5ll & 63ll))) + 24ll) = (int32)((int64)*(int32*)((uint8*)((uint8*)*(struct $11REPLYSTRUCT**)TMP$31$2 + (IINDEX$2 << (5ll & 63ll))) + 24ll) + 1ll);
		}
		label$72:;
	}
	fb_StrDelete( (FBSTRING*)&SNEWWORD$1 );
	label$71:;
}

void SAPPEND( struct $7FBARRAYI8FBSTRINGE* ARR$1, FBSTRING* ITEM$1 )
{
	int64 TMP$33$1;
	label$76:;
	int64 IUBOUND$1;
	int64 vr$0 = fb_ArrayUBound( (struct $7FBARRAYIKvE*)ARR$1, 1ll );
	int64 vr$1 = fb_ArrayLBound( (struct $7FBARRAYIKvE*)ARR$1, 1ll );
	if( vr$0 >= vr$1 ) goto label$78;
	int64 vr$2 = fb_ArrayLBound( (struct $7FBARRAYIKvE*)ARR$1, 1ll );
	TMP$33$1 = vr$2;
	goto label$79;
	label$78:;
	int64 vr$3 = fb_ArrayUBound( (struct $7FBARRAYIKvE*)ARR$1, 1ll );
	TMP$33$1 = vr$3;
	label$79:;
	IUBOUND$1 = TMP$33$1;
	int64 vr$5 = fb_ArrayLBound( (struct $7FBARRAYIKvE*)ARR$1, 1ll );
	fb_ArrayRedimPresvEx( (struct $7FBARRAYIvE*)ARR$1, 24ull, -1, -1, 1ull, vr$5, IUBOUND$1 + 1ll );
	int64 vr$6 = fb_ArrayUBound( (struct $7FBARRAYIKvE*)ARR$1, 1ll );
	fb_StrAssign( (void*)((vr$6 * 24ll) + *(int64*)ARR$1), -1ll, (void*)ITEM$1, -1ll, 0 );
	label$77:;
}

void PARSESENTENCE( struct $9REPLYLIST* TLIST$1, FBSTRING* SSENTENCE$1 )
{
	label$80:;
	uint8 CURRENTCARACTER$1;
	__builtin_memset( &CURRENTCARACTER$1, 0, 1ll );
	int64 WORDSIZE$1;
	__builtin_memset( &WORDSIZE$1, 0, 8ll );
	{
		int64 I$2;
		I$2 = 0ll;
		int64 TMP$34$2;
		int64 vr$2 = fb_StrLen( (void*)SSENTENCE$1, -1ll );
		TMP$34$2 = vr$2;
		goto label$82;
		label$85:;
		{
			CURRENTCARACTER$1 = *(uint8*)((uint8*)*(uint8**)SSENTENCE$1 + I$2);
			{
				uint64 TMP$35$4;
				TMP$35$4 = (uint64)CURRENTCARACTER$1;
				goto label$87;
				label$88:;
				{
					WORDSIZE$1 = WORDSIZE$1 + 1ll;
				}
				goto label$86;
				label$89:;
				{
					if( WORDSIZE$1 == 0ll ) goto label$91;
					{
						WORDSIZE$1 = WORDSIZE$1 + 1ll;
						label$91:;
					}
				}
				goto label$86;
				label$92:;
				{
					if( WORDSIZE$1 <= 1ll ) goto label$94;
					{
						FBSTRING SWORD$6;
						FBSTRING* vr$10 = fb_StrMid( (FBSTRING*)SSENTENCE$1, (I$2 - WORDSIZE$1) + 1ll, WORDSIZE$1 );
						fb_StrInit( (void*)&SWORD$6, -1ll, (void*)vr$10, -1ll, 0 );
						ADDWORD( TLIST$1, &SWORD$6 );
						fb_StrDelete( (FBSTRING*)&SWORD$6 );
					}
					label$94:;
					label$93:;
					WORDSIZE$1 = 0ll;
				}
				goto label$86;
				label$87:;
				static const void* tmp$45[84ll] = {
					&&label$89,
					&&label$92,
					&&label$92,
					&&label$92,
					&&label$92,
					&&label$92,
					&&label$89,
					&&label$92,
					&&label$92,
					&&label$89,
					&&label$89,
					&&label$89,
					&&label$89,
					&&label$89,
					&&label$89,
					&&label$89,
					&&label$89,
					&&label$89,
					&&label$89,
					&&label$92,
					&&label$92,
					&&label$92,
					&&label$92,
					&&label$92,
					&&label$92,
					&&label$92,
					&&label$88,
					&&label$88,
					&&label$88,
					&&label$88,
					&&label$88,
					&&label$88,
					&&label$88,
					&&label$88,
					&&label$88,
					&&label$88,
					&&label$88,
					&&label$88,
					&&label$88,
					&&label$88,
					&&label$88,
					&&label$88,
					&&label$88,
					&&label$88,
					&&label$88,
					&&label$88,
					&&label$88,
					&&label$88,
					&&label$88,
					&&label$88,
					&&label$88,
					&&label$88,
					&&label$92,
					&&label$92,
					&&label$92,
					&&label$92,
					&&label$89,
					&&label$92,
					&&label$88,
					&&label$88,
					&&label$88,
					&&label$88,
					&&label$88,
					&&label$88,
					&&label$88,
					&&label$88,
					&&label$88,
					&&label$88,
					&&label$88,
					&&label$88,
					&&label$88,
					&&label$88,
					&&label$88,
					&&label$88,
					&&label$88,
					&&label$88,
					&&label$88,
					&&label$88,
					&&label$88,
					&&label$88,
					&&label$88,
					&&label$88,
					&&label$88,
					&&label$88,
				};
				if( (TMP$35$4 - 39ull) > 83ull ) goto label$92;
				goto *tmp$45[TMP$35$4 - 39ull];
				label$86:;
			}
		}
		label$83:;
		I$2 = I$2 + 1ll;
		label$82:;
		if( I$2 <= TMP$34$2 ) goto label$85;
		label$84:;
	}
	label$81:;
}

__attribute__(( constructor )) static void fb_ctor__talklap( void )
{
	label$0:;
	fb_Randomize( -0x1.p+0, 0 );
	int64 ICOUNTREPLY$0;
	ICOUNTREPLY$0 = 1ll;
	FBSTRING ANS$0;
	__builtin_memset( &ANS$0, 0, 24ll );
	label$95:;
	{
		FBSTRING* vr$2 = fb_StrAllocTempDescZEx( (uint8*)"you: ", 5ll );
		fb_LineInput( (FBSTRING*)vr$2, (void*)&ANS$0, -1ll, 0, 0, -1 );
		fb_Cls( -65536 );
		int64 vr$4 = fb_StrLen( (void*)&ANS$0, -1ll );
		if( vr$4 != 0ll ) goto label$99;
		{
			FBSTRING* vr$5 = fb_StrAllocTempDescZEx( (uint8*)"why the silence?", 16ll );
			fb_PrintString( 0, (FBSTRING*)vr$5, 1 );
			goto label$97;
			label$99:;
		}
		SAPPEND( (struct $7FBARRAYI8FBSTRINGE*)&SSENTENCE$, &ANS$0 );
		PARSESENTENCE( &TREPLYS$, &ANS$0 );
		ICOUNTREPLY$0 = ICOUNTREPLY$0 + 1ll;
		SORTLISTALPHA( &TREPLYS$ );
		SORTLISTUSAGE( &TREPLYS$ );
		{
			int64 IWORDS$2;
			IWORDS$2 = *(int64*)((uint8*)&TREPLYS$ + 224ll) + -1ll;
			{
				int64 N$3;
				N$3 = 0ll;
				int64 TMP$48$3;
				TMP$48$3 = IWORDS$2;
				goto label$100;
				label$103:;
				{
					fb_PrintString( 0, (FBSTRING*)((uint8*)*(struct $11REPLYSTRUCT**)&TREPLYS$ + (N$3 << (5ll & 63ll))), 0 );
					FBSTRING* vr$14 = fb_StrAllocTempDescZEx( (uint8*)" ", 1ll );
					fb_PrintString( 0, (FBSTRING*)vr$14, 0 );
					int32 vr$15 = fb_GetX(  );
					if( (int64)vr$15 <= 70ll ) goto label$105;
					{
						goto label$102;
						label$105:;
					}
				}
				label$101:;
				N$3 = N$3 + 1ll;
				label$100:;
				if( N$3 <= TMP$48$3 ) goto label$103;
				label$102:;
			}
			fb_PrintVoid( 0, 1 );
			{
				int64 N$3;
				N$3 = 0ll;
				int64 TMP$50$3;
				TMP$50$3 = IWORDS$2;
				goto label$106;
				label$109:;
				{
					fb_PrintString( 0, (FBSTRING*)((uint8*)*(struct $11REPLYSTRUCT**)&TREPLYS$ + ((int64)*(int32*)((uint8*)*(int32**)((uint8*)&TREPLYS$ + 144ll) + (N$3 << (2ll & 63ll))) << (5ll & 63ll))), 0 );
					FBSTRING* vr$26 = fb_StrAllocTempDescZEx( (uint8*)" ", 1ll );
					fb_PrintString( 0, (FBSTRING*)vr$26, 0 );
					int32 vr$27 = fb_GetX(  );
					if( (int64)vr$27 <= 70ll ) goto label$111;
					{
						goto label$108;
						label$111:;
					}
				}
				label$107:;
				N$3 = N$3 + 1ll;
				label$106:;
				if( N$3 <= TMP$50$3 ) goto label$109;
				label$108:;
			}
			fb_PrintVoid( 0, 1 );
			{
				int64 N$3;
				N$3 = 0ll;
				int64 TMP$51$3;
				TMP$51$3 = IWORDS$2;
				goto label$112;
				label$115:;
				{
					FBSTRING TMP$54$4;
					FBSTRING TMP$55$4;
					fb_PrintString( 0, (FBSTRING*)((uint8*)*(struct $11REPLYSTRUCT**)&TREPLYS$ + ((int64)*(int32*)((uint8*)*(int32**)((uint8*)&TREPLYS$ + 72ll) + (N$3 << (2ll & 63ll))) << (5ll & 63ll))), 0 );
					FBSTRING* vr$45 = fb_IntToStr( *(int32*)((uint8*)((uint8*)*(struct $11REPLYSTRUCT**)&TREPLYS$ + ((int64)*(int32*)((uint8*)*(int32**)((uint8*)&TREPLYS$ + 72ll) + (N$3 << (2ll & 63ll))) << (5ll & 63ll))) + 24ll) );
					__builtin_memset( &TMP$54$4, 0, 24ll );
					FBSTRING* vr$48 = fb_StrConcat( &TMP$54$4, (void*)"(", 2ll, (void*)vr$45, -1ll );
					__builtin_memset( &TMP$55$4, 0, 24ll );
					FBSTRING* vr$51 = fb_StrConcat( &TMP$55$4, (void*)vr$48, -1ll, (void*)")", 2ll );
					fb_PrintString( 0, (FBSTRING*)vr$51, 0 );
					int32 vr$52 = fb_GetX(  );
					if( (int64)vr$52 <= 70ll ) goto label$117;
					{
						goto label$114;
						label$117:;
					}
				}
				label$113:;
				N$3 = N$3 + 1ll;
				label$112:;
				if( N$3 <= TMP$51$3 ) goto label$115;
				label$114:;
			}
			fb_PrintVoid( 0, 1 );
		}
	}
	label$97:;
	FBSTRING* vr$56 = fb_StrLcase2( (FBSTRING*)&ANS$0, 0 );
	int32 vr$57 = fb_StrCompare( (void*)vr$56, -1ll, (void*)"quit", 5ll );
	if( (int64)vr$57 != 0ll ) goto label$95;
	label$96:;
	fb_Sleep( -1 );
	fb_StrDelete( (FBSTRING*)&ANS$0 );
	label$1:;
}

static void _ZN11REPLYSTRUCTC1Ev( struct $11REPLYSTRUCT* THIS$1 )
{
	__builtin_memset( (FBSTRING*)THIS$1, 0, 24ll );
	__builtin_memset( (int32*)((uint8*)THIS$1 + 24ll), 0, 4ll );
	label$2:;
	label$3:;
}

static void _ZN11REPLYSTRUCTaSERKS_( struct $11REPLYSTRUCT* THIS$1, struct $11REPLYSTRUCT* __FB_RHS__$1 )
{
	label$4:;
	fb_StrAssign( (void*)THIS$1, -1ll, (void*)__FB_RHS__$1, -1ll, 0 );
	*(int32*)((uint8*)THIS$1 + 24ll) = *(int32*)((uint8*)__FB_RHS__$1 + 24ll);
	label$5:;
}

static void _ZN11REPLYSTRUCTD1Ev( struct $11REPLYSTRUCT* THIS$1 )
{
	label$8:;
	label$9:;
	fb_StrDelete( (FBSTRING*)THIS$1 );
}

static void _ZN9REPLYLISTC1Ev( struct $9REPLYLIST* THIS$1 )
{
	*(struct $11REPLYSTRUCT**)THIS$1 = (struct $11REPLYSTRUCT*)0ull;
	*(struct $11REPLYSTRUCT**)((uint8*)THIS$1 + 8ll) = (struct $11REPLYSTRUCT*)0ull;
	*(int64*)((uint8*)THIS$1 + 16ll) = 0ll;
	*(int64*)((uint8*)THIS$1 + 24ll) = 32ll;
	*(int64*)((uint8*)THIS$1 + 32ll) = 1ll;
	*(int64*)((uint8*)THIS$1 + 40ll) = 17ll;
	__builtin_memset( (void*)((uint8*)THIS$1 + 48ll), 0, 24ll );
	*(int32**)((uint8*)THIS$1 + 72ll) = (int32*)0ull;
	*(int32**)((uint8*)THIS$1 + 80ll) = (int32*)0ull;
	*(int64*)((uint8*)THIS$1 + 88ll) = 0ll;
	*(int64*)((uint8*)THIS$1 + 96ll) = 4ll;
	*(int64*)((uint8*)THIS$1 + 104ll) = 1ll;
	*(int64*)((uint8*)THIS$1 + 112ll) = 17ll;
	__builtin_memset( (void*)((uint8*)THIS$1 + 120ll), 0, 24ll );
	*(int32**)((uint8*)THIS$1 + 144ll) = (int32*)0ull;
	*(int32**)((uint8*)THIS$1 + 152ll) = (int32*)0ull;
	*(int64*)((uint8*)THIS$1 + 160ll) = 0ll;
	*(int64*)((uint8*)THIS$1 + 168ll) = 4ll;
	*(int64*)((uint8*)THIS$1 + 176ll) = 1ll;
	*(int64*)((uint8*)THIS$1 + 184ll) = 17ll;
	__builtin_memset( (void*)((uint8*)THIS$1 + 192ll), 0, 24ll );
	__builtin_memset( (int64*)((uint8*)THIS$1 + 216ll), 0, 8ll );
	__builtin_memset( (int64*)((uint8*)THIS$1 + 224ll), 0, 8ll );
	label$10:;
	label$11:;
}

static void _ZN9REPLYLISTaSERKS_( struct $9REPLYLIST* THIS$1, struct $9REPLYLIST* __FB_RHS__$1 )
{
	struct $11REPLYSTRUCT* TMP$5$1;
	struct $11REPLYSTRUCT* TMP$6$1;
	struct $11REPLYSTRUCT* TMP$7$1;
	int32* TMP$8$1;
	int32* TMP$9$1;
	int32* TMP$10$1;
	int32* TMP$11$1;
	int32* TMP$12$1;
	int32* TMP$13$1;
	label$12:;
	fb_ArrayRedimTo( (struct $7FBARRAYIvE*)THIS$1, (struct $7FBARRAYIvE*)__FB_RHS__$1, 0, (void*)&_ZN11REPLYSTRUCTC1Ev, (void*)&_ZN11REPLYSTRUCTD1Ev );
	TMP$5$1 = *(struct $11REPLYSTRUCT**)((uint8*)THIS$1 + 8ll);
	TMP$6$1 = *(struct $11REPLYSTRUCT**)((uint8*)__FB_RHS__$1 + 8ll);
	TMP$7$1 = (struct $11REPLYSTRUCT*)((uint8*)TMP$6$1 + *(uint64*)((uint8*)__FB_RHS__$1 + 16ll));
	label$14:;
	if( TMP$6$1 >= TMP$7$1 ) goto label$15;
	_ZN11REPLYSTRUCTaSERKS_( TMP$5$1, (struct $11REPLYSTRUCT*)TMP$6$1 );
	TMP$5$1 = (struct $11REPLYSTRUCT*)((uint8*)TMP$5$1 + 32ll);
	TMP$6$1 = (struct $11REPLYSTRUCT*)((uint8*)TMP$6$1 + 32ll);
	goto label$14;
	label$15:;
	fb_ArrayRedimTo( (struct $7FBARRAYIvE*)((uint8*)THIS$1 + 72ll), (struct $7FBARRAYIvE*)((uint8*)__FB_RHS__$1 + 72ll), 0, (void*)0ull, (void*)0ull );
	TMP$8$1 = *(int32**)((uint8*)((uint8*)THIS$1 + 72ll) + 8ll);
	TMP$9$1 = *(int32**)((uint8*)((uint8*)__FB_RHS__$1 + 72ll) + 8ll);
	TMP$10$1 = (int32*)((uint8*)TMP$9$1 + *(uint64*)((uint8*)((uint8*)__FB_RHS__$1 + 72ll) + 16ll));
	label$16:;
	if( TMP$9$1 >= TMP$10$1 ) goto label$17;
	*TMP$8$1 = *TMP$9$1;
	TMP$8$1 = (int32*)((uint8*)TMP$8$1 + 4ll);
	TMP$9$1 = (int32*)((uint8*)TMP$9$1 + 4ll);
	goto label$16;
	label$17:;
	fb_ArrayRedimTo( (struct $7FBARRAYIvE*)((uint8*)THIS$1 + 144ll), (struct $7FBARRAYIvE*)((uint8*)__FB_RHS__$1 + 144ll), 0, (void*)0ull, (void*)0ull );
	TMP$11$1 = *(int32**)((uint8*)((uint8*)THIS$1 + 144ll) + 8ll);
	TMP$12$1 = *(int32**)((uint8*)((uint8*)__FB_RHS__$1 + 144ll) + 8ll);
	TMP$13$1 = (int32*)((uint8*)TMP$12$1 + *(uint64*)((uint8*)((uint8*)__FB_RHS__$1 + 144ll) + 16ll));
	label$18:;
	if( TMP$12$1 >= TMP$13$1 ) goto label$19;
	*TMP$11$1 = *TMP$12$1;
	TMP$11$1 = (int32*)((uint8*)TMP$11$1 + 4ll);
	TMP$12$1 = (int32*)((uint8*)TMP$12$1 + 4ll);
	goto label$18;
	label$19:;
	*(int64*)((uint8*)THIS$1 + 216ll) = *(int64*)((uint8*)__FB_RHS__$1 + 216ll);
	*(int64*)((uint8*)THIS$1 + 224ll) = *(int64*)((uint8*)__FB_RHS__$1 + 224ll);
	label$13:;
}

static void _ZN9REPLYLISTD1Ev( struct $9REPLYLIST* THIS$1 )
{
	label$22:;
	label$23:;
	fb_ArrayErase( (struct $7FBARRAYIvE*)((uint8*)THIS$1 + 144ll) );
	fb_ArrayErase( (struct $7FBARRAYIvE*)((uint8*)THIS$1 + 72ll) );
	fb_ArrayEraseObj( (struct $7FBARRAYIvE*)THIS$1, (void*)&_ZN11REPLYSTRUCTC1Ev, (void*)&_ZN11REPLYSTRUCTD1Ev );
}

__attribute__(( constructor )) static void _GLOBAL__I( void )
{
	label$119:;
	_ZN9REPLYLISTC1Ev( &TREPLYS$ );
	label$120:;
}

__attribute__(( destructor )) static void _GLOBAL__D( void )
{
	label$122:;
	_ZN9REPLYLISTD1Ev( &TREPLYS$ );
	label$123:;
}

static const char __attribute__((used, section(".fbctinf"))) __fbctinf[] = "-l\0fb";
