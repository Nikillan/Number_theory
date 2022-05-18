#include<stdio.h>
#include<stdlib.h>

int sum_of_digits(int safe);

int main()
{
    int num;
    int sod;
    int safe;

    scanf("%d", &num);

    sod = sum_of_digits(num);
    printf("%d", sod);
    return EXIT_SUCCESS;
}

int sum_of_digits(int num)
{

    int sod = 0;
    int place = 1;
    while(place < num)
    {
        sod += (num %(10 * place))/place;
        place *= 10;
    }
    return sod;
}
