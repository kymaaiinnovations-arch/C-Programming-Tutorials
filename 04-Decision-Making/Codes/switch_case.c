#include <stdio.h>

int main()
{
    int choice;

    printf("===== Kyma AI Course Menu =====\n");
    printf("1. C Programming\n");
    printf("2. Python\n");
    printf("3. AI Fundamentals\n");

    printf("\nEnter Your Choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("You Selected C Programming.\n");
            break;

        case 2:
            printf("You Selected Python.\n");
            break;

        case 3:
            printf("You Selected AI Fundamentals.\n");
            break;

        default:
            printf("Invalid Choice.\n");
    }

    return 0;
}