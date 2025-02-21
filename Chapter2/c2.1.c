
// how to get user puted data

#include <stdio.h>

int main()
{
    char first_name[50];
    char last_name[80];
    char full_name[130];

    // User first name get
    printf("Enter your first name: ");
    scanf("%s", first_name); // This will take the first word only

    // User last name get
    printf("Enter your last name: ");
    scanf("%s", last_name); // This will take the last word only

    // Combine first and last name into full name
    snprintf(full_name, sizeof(full_name), "%s %s", first_name, last_name);

    // Print full name
    printf("Full name: %s\n", full_name);

    return 0;
}
