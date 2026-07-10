#include <stdio.h>

int main()
{
    int studentMarks[5] = {80, 75, 90, 85, 95};
    int i;

    printf(" Kyma AI Innovations \n");

    printf("Marks in Reverse Order\n");

    for(i = 4; i >= 0; i--)
    {
        printf("%d\n", studentMarks[i]);
    }

    return 0;
}