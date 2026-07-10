#include <stdio.h>

int main()
{
    int batch = 1;

    printf("Batch : %d\n", batch);

    batch++;
    printf("After Increment : %d\n", batch);

    batch--;
    printf("After Decrement : %d\n", batch);

    return 0;
}