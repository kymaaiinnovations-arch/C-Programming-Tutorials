#include <stdio.h>

int main()
{
    int marks;

    printf("===== Kyma AI Grade System =====\n");

    printf("Enter Marks: ");
    scanf("%d", &marks);

    if (marks >= 90)
        printf("Grade A\n");
    else if (marks >= 75)
        printf("Grade B\n");
    else if (marks >= 60)
        printf("Grade C\n");
    else if (marks >= 40)
        printf("Grade D\n");
    else
        printf("Grade F\n");

    return 0;
}