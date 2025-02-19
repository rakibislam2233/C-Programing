#include <stdio.h>
int main()
{
    char first_name[50];
    char last_name[50];
    char full_name[100];
    
    printf("Enter Your First Name");
    scanf("%s", first_name);
    printf("Enter Your Last Name");
    scanf("%s", last_name);

    printf("First Name : %s\n", first_name);

    return 0;
}