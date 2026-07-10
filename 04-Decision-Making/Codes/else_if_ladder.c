#include <stdio.h>

int main()
{
    int marks;

    printf("===== Kyma AI Innovations =====\n");

    printf("Enter Marks: ");
    scanf("%d", &marks);

    if (marks >= 90)
    {
        printf("Excellent\n");
    }
    else if (marks >= 75)
    {
        printf("Very Good\n");
    }
    else if (marks >= 40)
    {
        printf("Pass\n");
    }
    else
    {
        printf("Fail\n");
    }

    return 0;
}