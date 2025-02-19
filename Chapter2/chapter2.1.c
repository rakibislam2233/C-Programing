// input number1 and number 2 . and print total result 

//scanf এর মাধ্যমে int, float, এবং double ইনপুট নেয়া সহজ।


#include <stdio.h>

int main()
{
    int num1;
    int num2;
    int total;

    printf("Enter Number 1 : ");
    scanf("%d", &num1);
    printf("Enter Number 2 : ");
    scanf("%d", &num2);

    // Sum the numbers and store in total
    total = num1 + num2;

    printf("Total Result : %d\n", total);
    return 0;
}