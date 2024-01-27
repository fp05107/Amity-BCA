#include <stdio.h>
#include <string.h>

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

int main()
{
    Book b1;
    Book b2;
    b1.noOfPages = 100;
    b1.price = 500;
    // Use strcpy to copy the string into the name array
    // strcpy(b1.name, "C Programming");
    // printf("%d\n", b1.noOfPages);
    // realNumber x = 10.9;
    // printf("%f\n", x);
    defineAllCricketers();
    return 0;
}
