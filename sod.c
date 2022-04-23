#include<stdio.h>
#include<stdlib.h>

int sum_of_digits(int safe);

int main()
{
    int num;
    int sod;
    int safe;

    num = 12345;
    safe = num;

    sod = sum_of_digits(safe);
    printf("%d", sod);
    return EXIT_SUCCESS;
}

int sum_of_digits(int safe)
{

    int sod = 0;
    while(safe)
    {
        sod = sod + safe % 10;
        safe /= 10;
    }
    return sod;
}
