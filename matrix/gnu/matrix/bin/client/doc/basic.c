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
void fb_PrintLongint( int32, int64, int32 );
static void fb_ctor__basic( void ) __attribute__(( constructor ));

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

static const char __attribute__((used, section(".fbctinf"))) __fbctinf[] = "-l\0fb";
