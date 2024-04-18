#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
    printf("signed char: %lu ; %d to %d\n", sizeof(char), CHAR_MIN, CHAR_MAX);
    printf("unsigned char: %lu ; %d to %u\n", sizeof(unsigned char), 0, UCHAR_MAX);
    printf("signed Short int: %lu ; %d to %d\n", sizeof(short int), SHRT_MIN, SHRT_MAX);
    printf("unsigned Short int: %lu ; %d to %u\n", sizeof(unsigned short int), 0, USHRT_MAX);
    printf("signed int: %lu ; %d to %d\n", sizeof(int), INT_MIN, INT_MAX);
    printf("unsigned int: %lu ; %d to %u\n", sizeof(unsigned int), 0, UINT_MAX);
    printf("signed Long int: %lu ; %ld to %ld\n", sizeof(long int), LONG_MIN, LONG_MAX);
    printf("unsigned Long int: %lu ; %d to %lu\n", sizeof(unsigned long int), 0, ULONG_MAX);
    printf("signed Long Long int: %lu ; %lld to %lld\n", sizeof(long long int), LLONG_MIN, LLONG_MAX);
    printf("unsigned Long Long int: %lu ; %d to %llu\n", sizeof(unsigned long long int), 0, ULLONG_MAX);
    printf("double: %lu ;  %e to %e\n", sizeof(double), DBL_MIN, DBL_MAX);
    
    return 0;
}

