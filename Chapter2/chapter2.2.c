// input first name and last name . print full name;
// scanf ব্যবহার করলে স্পেস থাকতে পারে না, তাই fgets() ব্যবহার করা উত্তম। fgets() স্পেসসহ পুরো লাইন ইনপুট নিতে পারে।

// when i am explore tow string concat here i am learn new think
//  1. fgets . fgets use hoi amra jokhn kono user ar kase theke string value input nibo
// 2.strcspn . fgets diye input nile ses a \n thake tai ata k remove korar jonno strcspn use hoi
// example first_name[strcspn(first_name,"\n")] = 0
//3. strcpy(destination,source) kono akta value ar name onno kothao nite strcpy use kora hoi
//4. strcat(first_name,last_name) 2 ta totodik sting k concat kore jora lagai

#include <stdio.h>
#include <string.h>

int main()
{
    char first_name[50];
    char last_name[100];
    char full_name[150];

    //input first name
    printf("Enter Your First Name : ");
    fgets(first_name, sizeof(first_name), stdin);
    first_name[strcspn(first_name, "\n")] = 0;

    //input last name
    printf("Enter Your Last Name : ");
    fgets(last_name, sizeof(last_name), stdin);
    last_name[strcspn(last_name, "\n")] = 0;

    //copy first name and last name value for fullName
    strcpy(full_name, first_name);
    strcat(full_name, last_name);

    // Combine first name and last name and print full name
    printf("Full Name: %s\n", full_name);

    return 0;
}