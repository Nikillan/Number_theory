#include<stdio.h>
#include<stdlib.h>

int sum_of_factors(int num);
int main()
{
    int num;
    int sof;

    scanf("%d", &num);
    sof = sum_of_factors(num);
    printf("%d", sof);
    return EXIT_SUCCESS;
}

int sum_of_factors(int num)
{
    int sof;
    int check_factor;
    int safe;
    sof = 0;

    safe = num / 2;
    for(check_factor =  1; check_factor <= safe; check_factor++)
    {
        if(num % check_factor == 0)
        {
            sof += check_factor;
        }
    }
    return sof;
}

