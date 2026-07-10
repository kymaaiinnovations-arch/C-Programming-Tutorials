#include <stdio.h>

int main()
{
    int attendance[5] = {1, 1, 0, 1, 1};
    int i;

    printf(" Kyma AI Attendance \n");

    for(i = 0; i < 5; i++)
    {
        printf("Student %d Attendance : %d\n", i + 1, attendance[i]);
    }

    return 0;
}