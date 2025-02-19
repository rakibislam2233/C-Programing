
// Write a C program that takes three numbers as input and finds the largest one.

#include <stdio.h>

int main()
{
    int first_number;
    int second_number;
    int third_number;
    printf("Enter the first number : ");
    scanf("%d", &first_number);
    printf("Enter the second number : ");
    scanf("%d", &second_number);
    printf("Enter the third number : ");
    scanf("%d", &third_number);
    if (first_number >= second_number && first_number >= third_number)
    {
        printf("The largest number is %d\n", first_number);
    }
    else if (second_number >= first_number && second_number >= third_number)
    {
        printf("The largest number is %d\n", second_number);
    }
    else
    {
        printf("The largest number is %d\n", third_number);
    }

    return 0;
}