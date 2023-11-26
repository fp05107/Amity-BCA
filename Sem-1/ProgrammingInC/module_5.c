#include <stdio.h>

int myFunc1()
{
    struct
    {
        int a[2];
    } arr[] = {{1}, {2}};
    printf("%d %d %d %d", arr[0].a[0], arr[0].a[1], arr[1].a[0], arr[1].a[1]);
    return 0;
}

void swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int pointerEx()
{
    char *ptr;
    char mystring[] = "abcdefg";
    ptr = mystring;
    ptr += 5;
    printf("%s\n", ptr);
    return 0;
}

void fun(int x)
{
    x = 30;
}

// int main()
// {
//     int y = 20;
//     fun(y);
//     // printf("%d", y);

//     int a[] = {1, 2, 3, 4, 5}, *p;
//     p = a;
//     ++*p;
//     printf("%d ", *p);
//     p += 2;
//     printf("%d ", *p);
//     return 0;
// }

struct student
{
    char *name;
};

void main()
{

    struct student s, m;
    s.name = "st";
    m = s;
    printf("%s%s", s.name, m.name);
}