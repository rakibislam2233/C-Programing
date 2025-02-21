
// 2.Write a C program that takes two integers as input and prints their sum.

#include <stdio.h>
int main()
{
    int number1;
    int number2;
    int total;
    // input number one
    printf("Enter the number 1 : ");
    scanf("%d", &number1);

    // input number2
    printf("Enter the number 2 : ");
    scanf("%d", &number2);

    // total sum
    total = number1 + number2;

    // print total ;
    printf("Total Sum : %d\n", total);
    return 0;
}

