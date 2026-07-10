#include <stdio.h>

int main()
{
    int marks;

    printf("===== Kyma AI Innovations =====\n");

    printf("Enter Student Marks: ");
    scanf("%d", &marks);

    if (marks >= 40)
    {
        printf("Result : Pass\n");
    }
    else
    {
        printf("Result : Fail\n");
    }

    return 0;
}