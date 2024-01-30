#include <stdio.h>
#include <string.h>
// #include <stdbool.h> too use bool(bool known = true)

typedef float realNumber;

typedef struct Book
{
    char name[50];
    int noOfPages;
    int price;
} Book;

typedef struct Cricketer
{
    char name[50];
    int age;
    int totalRuns;
} Cricketer;

int defineAllCricketers()
{
    Cricketer cricketersArray[10] = {
        {"Virat Kohli", 32, 12169},
        {"MS Dhoni", 40, 10773},
        {"Rohit Sharma", 34, 9205},
        {"Shikhar Dhawan", 36, 5977},
        {"Jasprit Bumrah", 28, 17},
        {"Ravindra Jadeja", 33, 1954},
        {"Ajinkya Rahane", 33, 4504},
        {"Cheteshwar Pujara", 34, 6267},
        {"Hardik Pandya", 28, 1667},
        {"KL Rahul", 29, 2001}};

    for (int i = 0; i < 10; ++i)
    {
        printf("Cricketer %d:\n", i + 1);
        printf("Name: %s\n", cricketersArray[i].name);
        printf("Age: %d\n", cricketersArray[i].age);
        printf("Total Runs: %d\n", cricketersArray[i].totalRuns);
        printf("\n");
    }
}

int pointingOneToAnother()
{
    Cricketer c1, c2;
    c1.age = 30;
    strcpy(c1.name, "Subham");
    c1.totalRuns = 5000;
    c2 = c1;
    if (c1.age == c2.age)
        printf("same");
    else
        printf("not same");
    printf("value %d", c2.age);
}

int passingOneToAnother(Book b)
{
    printf("%d", b.price);
}

int structurePointers(Book b)
{

    Book *p = &b;
    printf("Price %d\n", p->price);
    printf("Pointer p %d\n", p);
    printf("Book b price: %d\n", b.price);
    printf("Pointer p %d\n", &b.price);
    (*p).price = 1000;
    strcpy((*p).name, "the legend");
    printf("Book b price: %d\n", b.price);
}

int main()
{
    Book b1;
    b1.noOfPages = 100;
    b1.price = 500;
    Book b2 = {"Math", 1000, 500};
    // Use strcpy to copy the string into the name array
    // strcpy(b1.name, "C Programming");
    // printf("%d\n", b1.noOfPages);
    // realNumber x = 10.9;
    // printf("%f\n", x);
    // defineAllCricketers();
    // pointingOneToAnother();
    // passingOneToAnother(b1);
    // structurePointers(b1);
    printf("Book Name: %s\n", b2.name);
    printf("Number of Pages: %d\n", b2.noOfPages);
    printf("Price: %d\n", b2.price);
    return 0;
}