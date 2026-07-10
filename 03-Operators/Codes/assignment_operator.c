#include <stdio.h>

int main()
{
    int fee = 1000;

    printf("Initial Fee : %d\n", fee);

    fee += 500;
    printf("After += : %d\n", fee);

    fee -= 200;
    printf("After -= : %d\n", fee);

    fee *= 2;
    printf("After *= : %d\n", fee);

    fee /= 2;
    printf("After /= : %d\n", fee);

    return 0;
}