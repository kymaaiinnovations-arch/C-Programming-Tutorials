#include <stdio.h>

int main()
{
    char name[50];

    printf("Kyma AI Innovations\n");
    printf("Enter Student Name: ");
    scanf("%49s", name);

    printf("Welcome %s!\n", name);

    return 0;
}