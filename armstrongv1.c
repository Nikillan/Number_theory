#include<stdio.h>
#include"num.h"

int main()
{
    int num;
    int sod;
    int nod;
    int check;
    int digit;
    int safe;

    for(check = 1; check < 1000; check += 1)
    {
        safe = check;
        nod = number_of_digits(safe);
        sod = 0;
        while(safe)
        {
            digit = safe % 10;
            sod = sod + power(digit, nod);
            safe /= 10;
        }
        if(check == sod)
            printf("%d ", sod);

    }
}
