#include <stdio.h>

void sum_digits(int);

int main()
{
    sum_digits(1234);
    return 0;
}

void sum_digits(int num)
{
    int res=0;
    while (!(num==0))
    {
        res=res+num%10;
        num=num/10;
    }
    printf("The Sum of digits is [%d]",res);
    
}