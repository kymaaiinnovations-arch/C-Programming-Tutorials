#include <stdio.h>

int main()
{
    int batchA, batchB;

    printf("===== Kyma AI Innovations =====\n");

    printf("Enter Students in Batch A: ");
    scanf("%d", &batchA);

    printf("Enter Students in Batch B: ");
    scanf("%d", &batchB);

    if (batchA > batchB)
    {
        printf("Batch A has more students.\n");
    }
    else
    {
        printf("Batch B has more students.\n");
    }

    return 0;
}