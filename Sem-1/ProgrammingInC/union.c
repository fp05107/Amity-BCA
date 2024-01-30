#include <stdio.h>
#include <string.h> // Include the string.h header file for strcpy

typedef union Cricketer
{
    char name[20];
    int age;
} Cricketer; 

int main()
{
     Cricketer c;
    strcpy(c.name, "Sachin Tendulkar");
    c.age = 45;
    printf("Age: %d\n", c.age);
    printf("Name: %s\n", c.name);
    return 0;
}
