#include<stdio.h>
#include<stdlib.h>
#include"num.h"

int main()
{
    int num;
    int sof1;
    int sof2;
    int check_factor;
    num = 1000000;

    for(check_factor = 1; check_factor <= num; check_factor++)
    {
        sof1 = sum_of_factors(check_factor);
        sof2 = sum_of_factors(sof1);
        if(check_factor == sof2 && check_factor < sof1)
        {
            printf("%d %d \n", check_factor, sof1);
        }

    }
}
