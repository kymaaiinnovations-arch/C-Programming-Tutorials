#include <stdio.h>

int main()
{
    int marks[3][3] = {
        {80, 90, 85},
        {75, 85, 90},
        {95, 100, 95}
    };

    printf(" Kyma AI Innovations \n");

    printf("%d %d %d\n", marks[0][0], marks[0][1], marks[0][2]);
    printf("%d %d %d\n", marks[1][0], marks[1][1], marks[1][2]);
    printf("%d %d %d\n", marks[2][0], marks[2][1], marks[2][2]);

    return 0;
}