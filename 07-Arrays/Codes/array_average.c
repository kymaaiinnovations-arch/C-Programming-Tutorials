#include <stdio.h>

int main()
{
    int studentMarks[5] = {80, 75, 90, 85, 95};
    int i, sum = 0;
    float average;

    for(i = 0; i < 5; i++)
    {
        sum += studentMarks[i];
    }

    average = (float)sum / 5;

    printf(" Kyma AI Innovations \n");
    printf("Average Marks = %.2f\n", average);

    return 0;
}