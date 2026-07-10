#include <stdio.h>

int main()
{
    int batchA = 50;
    int batchB = 30;
    int temp;

    printf("Before Swapping\n");
    printf("Batch A : %d\n", batchA);
    printf("Batch B : %d\n", batchB);

    temp = batchA;
    batchA = batchB;
    batchB = temp;

    printf("\nAfter Swapping\n");
    printf("Batch A : %d\n", batchA);
    printf("Batch B : %d\n", batchB);

    return 0;
}