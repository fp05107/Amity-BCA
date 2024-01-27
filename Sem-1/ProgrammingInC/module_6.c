#include <stdio.h>
#include <string.h>

struct student
{
    char ch[12]; // Specify the size of the character array
    int no_ofpages;
};

int main()
{
    struct student s;       // Declare a variable of type struct student
    struct student *p = &s; // Declare a pointer to struct student and assign the address of s

    // Initialize the values
    strcpy(s.ch, "Godisgreat");
    s.no_ofpages = 100;

    printf("%d ", p->no_ofpages);
    printf("%s", p->ch);

    getchar();

    return 0;
}
