#include <stdio.h>

int main()
{
    int units;

    printf("===== Kyma AI Electricity Bill =====\n");

    printf("Enter Units: ");
    scanf("%d", &units);

    if (units <= 100)
    {
        printf("Bill = Rs. %d\n", units * 5);
    }
    else
    {
        printf("Bill = Rs. %d\n", units * 8);
    }

    return 0;
}