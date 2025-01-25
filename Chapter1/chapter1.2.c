#include <stdio.h>

int main(){
    //data type
    int number = 5;
    float number2 = 5.56;
    double pi = 3.1416;
    char grade = 'a';
    char myname[] = "My Name Is Rakib";

    //output formate
    printf("Output Inter Value : %d\n", number); //only can inter value output use this (%d\n)
    printf("Output Double Value %lf\n", pi);
    printf("Output Float Value only 2 example (1.3) : %.1f\n", number2) ;
    printf("Output Float Value: %f\n" , number2);
    printf("Output all char %s\n", myname);
    printf("Output char : %c\n", grade);
    return 0;
}