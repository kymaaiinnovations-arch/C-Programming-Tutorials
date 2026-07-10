#include <stdio.h>

int main()
{
    int year;

    printf("===== Kyma AI Calendar =====\n");

    printf("Enter Year: ");
    scanf("%d", &year);

    if (year % 4 == 0)
    {
        printf("%d is a Leap Year.\n", year);
    }
    else
    {
        printf("%d is Not a Leap Year.\n", year);
    }

    return 0;
}