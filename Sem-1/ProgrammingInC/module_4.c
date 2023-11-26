#include <stdio.h>

// int calculateSumOfArr();

void calculateSumOfArr()
{
    int arr[6] = {1, 2, 3, 4, 5, 6}; // Adjust the size to match the number of elements
    int sum = 0;
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) // Correct the loop condition
    {
        sum += arr[i];
    }
    printf("%d", sum);
    // return sum;
}

struct test
{
    int k;
    char c;
};

void elementPresent()
{
    int arr[5] = {5};
    int length = sizeof(arr) / sizeof(arr[0]);
    printf("Array elements: ");
    for (int i = 0; i < length; i++)
    {
        printf("%d ", arr[i]);
    }
}

void show()
{
    printf("PISTA ");
    show(); // Recursive call
}

int main()
{
    int arr[3] = {1, 2, 3};
    // ++arr;
    arr + 1;
    // arr++;
    // arr*2;
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        /* code */
        printf("%d", arr[i]);
    }

    return 0;
}