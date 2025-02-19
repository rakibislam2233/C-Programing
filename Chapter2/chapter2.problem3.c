// 3.Write a C program to check if a number is even or odd.

#include <stdio.h>

int main()
{
    int number;

    // input number for user
    printf("Enter a number : ");
    scanf("%d", &number);

    // calculation this number even or odd
    if (number % 2 == 0)
    {
        printf("This number is Even");
    }
    else
    {
        printf("This number is Odd");
    };

    return 0;
}