#include <stdio.h>
#include <string.h>

int main()
{
    char instituteName[50] = "Kyma AI";
    char courseName[] = " Innovations";

    strcat(instituteName, courseName);

    printf("String Concatenation\n");

    printf("Result : %s\n", instituteName);

    return 0;
}