#include<stdio.h>
#include<stdlib.h>

int reverse_number(int num);
int main()
{
    int num;
    int safe;
    int rev_num;

    num = 12345;
    safe = num;
    rev_num = reverse_number(num);
    printf("%d ", rev_num);

    return EXIT_SUCCESS;
}

int reverse_number(int num)
{
    int rev = 0;
    int power = 1;
    while(power <= num)
    {
        rev = rev * 10 + num % (10 * power) / power;
        power *= 10;
    }
    return rev;
}
