#include <stdio.h>

int main()
{
    int studentMarks[5] = {80, 75, 90, 85, 95};
    int i;

    printf(" Kyma AI Innovations \n");

    for(i = 0; i < 5; i++)
    {
        printf("Student %d = %d\n", i + 1, studentMarks[i]);
    }

    return 0;
}