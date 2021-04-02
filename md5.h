#ifndef _MD5_H_
#define _MD5_H_

#include <sys/types.h>
#include "config.h"

#define MD5_HASHBYTES 16

#if SIZEOF_LONG == 4
typedef unsigned long uint32;
#else
#if SIZEOF_INT == 4
typedef unsigned int uint32;
#else
#error Congratulations!  You get to rewrite this code so that it does not require a 32-bit integer type!  (Or maybe you just need to reconfigure.)
#endif
#endif


typedef struct MD5Context {
	uint32 buf[4];
	uint32 bits[2];
	unsigned char in[64];
} MD5_CTX;

void MD5Init(MD5_CTX *context);
void MD5Update(MD5_CTX *context, unsigned char const *buf, unsigned len);
void MD5Final(unsigned char digest[MD5_HASHBYTES], MD5_CTX *context);
void MD5Transform(uint32 buf[4], uint32 const in[16]);
char* MD5End(MD5_CTX*);
char* MD5File(const char*);
char* MD5Data(const unsigned char*, unsigned int);

#endif /* !_MD5_H_ */
