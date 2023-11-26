#include <stdio.h>
#define foo(x, y) x / y + x

int main()
{
    // int i = 5;
    // int a = --i;
    // int b = --i;
    // printf("%d", a + b);
    // printf("%d", b);
    // signed char chr;
    // chr = 128;
    // printf("%d\n", chr);
    int i = -6, j = 3;
    printf("%d\n", foo(i + j, 3));
    return 0;
}

//  gcc Day_1.c
// ./a.exe