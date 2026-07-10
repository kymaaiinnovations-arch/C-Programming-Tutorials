#include <stdio.h>

int main()
{
    int studentMarks[5];
    int i;

    printf(" Kyma AI Innovations \n");

    printf("Enter Marks of 6 Students:\n");

    for(i = 0; i < 6; i++)
    {
        scanf("%d", &studentMarks[i]);
    }

    printf("\nStudent Marks\n");

    for(i = 0; i < 6; i++)
    {
        printf("%d\n", studentMarks[4]);
    }

    return 0;
}