#include <stdio.h>

// A pointer is defined as a derived data type that can store the address of other C
// variables or a memory location. We can access and manipulate the data stored in
// that memory location using pointers.

// Declaration

// Pointing

// Dereferencing

void geeks()
{
    int var = 10;

    // declare pointer variable
    int *ptr;

    // note that data type of ptr and var must be same
    ptr = &var;

    // assign the address of a variable to a pointer
    printf("Value at ptr = %p \n", ptr);
    printf("Value at var = %d \n", var);
    printf("Value at *ptr = %d \n", *ptr);
}

// Driver program
int main()
{
    // geeks();

    int x = 5, y = 7;
    int *p = &x, *q = &y;
    printf("Value of p = %p, q = %p\n", p, q);
    return 0;
}
