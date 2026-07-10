#include <stdio.h>
#include <string.h>

int main()
{
    char source[] = "Kyma AI";
    char destination[30];

    strcpy(destination, source);

    printf("Kyma AI Innovations\n");
    
    printf("Source String : %s\n", source);
    printf("Copied String : %s\n", destination);

    return 0;
}