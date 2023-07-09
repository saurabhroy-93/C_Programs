#include <stdio.h>

void pos_neg(int);

int main()
{
    int num=0;
    pos_neg(num);
    return 0;
}

void pos_neg(int num)
{
    if(num<0)
    {
        printf("Its a Negative number");
    }
    else
    {
         printf("Its a Postive number");
    }
}