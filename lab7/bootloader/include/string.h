#ifndef STRING_H
#define STRING_H

int  strcmp     (const char * s1, const char * s2 );
char* strcat (char *dest, const char *src);
unsigned long long strlen(const char *str);
char* strcpy (char *dest, const char *src);
char* memcpy (void *dest, const void *src, unsigned long long len);
#endif