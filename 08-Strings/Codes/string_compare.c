#include <stdio.h>
#include <string.h>

int main()
{
    char course1[] = "C Programming";
    char course2[] = "C Programming";

    printf("Kyma AI Innovations\n");
    
    if(strcmp(course1, course2) == 0)
    {
        printf("Both courses are the same.\n");
    }
    else
    {
        printf("Courses are different.\n");
    }

    return 0;
}