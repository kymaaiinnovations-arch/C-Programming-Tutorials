#include <stdio.h>
#include <string.h>

int main()
{
    char studentName[30];
    char courseName[30] = "C Programming";

    printf("Kyma AI Innovations\n");

    printf("Enter Student Name: ");
    scanf("%s", studentName);

    printf("\n===== Registration Details =====\n");
    printf("Student Name : %s\n", studentName);
    printf("Course Name  : %s\n", courseName);
    printf("Status       : Registered\n");

    return 0;
}