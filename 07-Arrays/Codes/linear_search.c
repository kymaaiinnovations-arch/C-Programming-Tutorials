#include <stdio.h>

int main()
{
    int studentMarks[5] = {80, 75, 90, 85, 95};
    int search, i;

    printf("Kyma AI Innovations\n");

    printf("Enter Marks to Search: ");
    scanf("%d", &search);

    for(i = 0; i < 5; i++)
    {
        if(studentMarks[i] == search)
        {
            printf("Marks Found.\n");
        }
        else
        {
            printf("Marks Not Found.\n");
        }
    }

    return 0;
}