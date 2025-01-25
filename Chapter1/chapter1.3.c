#include <stdio.h>

int main() {
    int num = 10;
    float pi = 3.14159;
    double large_pi = 3.141592653589793;
    char grade = 'A';
    char name[] = "John";
    unsigned int u_num = 42;
    long int l_num = 123456789;
    void *ptr = &num;

    printf("Integer: %d\n", num);                   // %d for int
    printf("Unsigned Integer: %u\n", u_num);       // %u for unsigned int
    printf("Float: %.2f\n", pi);                   // %.2f for 2 decimal places
    printf("Double: %lf\n", large_pi);             // %lf for double
    printf("Character: %c\n", grade);              // %c for char
    printf("String: %s\n", name);                  // %s for string
    printf("Long Integer: %ld\n", l_num);          // %ld for long int
    printf("Pointer (Address): %p\n", ptr);        // %p for pointer

    return 0;
}
