#include <stdio.h>

int main()
{
    char studentName[30];

    printf("Kyma AI Innovations\n");
    
    printf("Enter Student Name: ");
    scanf("%s", studentName);

    printf("\n===== Student Details =====\n");
    printf("Student Name : %s\n", studentName);

    return 0;
}