#include <stdio.h>

void odd_even(int);

int main()
{
    int num=3;
    odd_even(num);
}

void odd_even(int num)
{
    if(num%2==0)
    {
        printf("Its Even Number");
    }
    else
    {
        printf("Its a Odd Number");
    }
}