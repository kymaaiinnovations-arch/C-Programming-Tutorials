#include <stdio.h>

int main()
{
    int attendance = 90;
    int marks = 75;

    printf("===== Kyma AI Innovations =====\n");

    printf("AND : %d\n", attendance >= 75 && marks >= 40);

    printf("OR  : %d\n", attendance >= 95 || marks >= 40);

    printf("NOT : %d\n", !(marks >= 40));

    return 0;
}