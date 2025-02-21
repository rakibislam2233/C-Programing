#include <stdio.h>

int main()
{
    // here is i am delare PI for not change so i am use const;
    const double PI = 3.1416;
    double radius;
    printf("Enter radius : ");
    scanf("%lf", &radius);
    double perimeter = 2 * PI * radius;
    printf("Perimeter : %lf\n", perimeter);
    double area = PI * radius * radius;
    printf("Area : %lf\n", area);
    return 0;
}