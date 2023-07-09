#include <stdio.h>

void Prime(int);

int main()
{
int num=19;

Prime(num);

return 0;
}

void Prime(int num)
{
int i=0, flag=0;

if(num==1 && num==0)
{
    flag=0;
    return;
}
else
{
    for(i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            ++flag;
        }

    }
}
if (flag==2)
{
    printf("Its a Prime number");
}
else
{
    printf("Its Not a Prime number");
}
}