#include <stdio.h>
#include <math.h>
#include <limits.h>
// macros
#define PI 3.14159265358979323846
// macro function
#define area(r) (PI * r * r)

int main()
{
    // float x = sqrt(7);
    // float y = cbrt(7);
    // int I = __INT_MAX__;
    // printf("Hello %d\n", y);
    // int -> 4bytes -> 4 * 8 = 32bits -> 2^32
    // long -> 8bytes -> 8 * 8 = 64bits -> 2^64
    long y = LONG_MAX;
    printf("Hello %f\n", PI);
}