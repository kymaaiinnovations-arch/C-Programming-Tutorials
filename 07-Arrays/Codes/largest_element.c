#include <stdio.h>

int main()
{
    int studentMarks[5] = {80, 75, 90, 85, 95};
    int i, largest;

    largest = studentMarks[0];

    for(i = 1; i < 5; i++)
    {
        if(studentMarks[i] > largest)
        {
            largest = studentMarks[i];
        }
    }

    printf("===== Kyma AI Innovations =====\n");
    printf("Highest Marks = %d\n", largest);

    return 0;
}