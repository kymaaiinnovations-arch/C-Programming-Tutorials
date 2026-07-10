#include <stdio.h>

int main()
{
    int studentMarks[5] = {80, 75, 90, 85, 95};
    int i, sum = 0;

    for(i = 0; i < 5; i++)
    {
        sum = sum + studentMarks[i];
    }

    printf(" Kyma AI Innovations \n");
    printf("Total Marks = %d\n", sum);

    return 0;
}