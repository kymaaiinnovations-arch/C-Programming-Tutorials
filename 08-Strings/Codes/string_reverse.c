#include <stdio.h>
#include <string.h>

int main()
{
    char instituteName[] = "Kyma AI";
    int i;

    printf("      Kyma AI Innovations\n");
    
    printf("Original String : %s\n", instituteName);

    printf("Reversed String : ");

    for(i = strlen(instituteName) - 1; i >= 0; i--)
    {
        printf("%c", instituteName[i]);
    }

    printf("\n");

    return 0;
}