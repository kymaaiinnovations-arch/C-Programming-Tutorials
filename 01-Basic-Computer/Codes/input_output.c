#include <stdio.h>

int main()
{
    char name[50];

    printf("=================================\n");
    printf(" Kyma AI Student Registration\n");
    printf("=================================\n");

    printf("Enter Student Name : ");
    scanf("%49s", name);

    printf("\nWelcome %s!\n", name);
    printf("Thank you for joining Kyma AI Innovations.\n");

    return 0;
}