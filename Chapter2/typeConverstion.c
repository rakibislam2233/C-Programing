#include <stdio.h>

int main()
{
    int num1 = 10;
    int num2 = 20;
    //implecit type
    double real_number =  num1;
    printf("%d %lf \n", num1, real_number);
    //explecit type
    printf("%lf ", (double)num2);
    return 0;
}