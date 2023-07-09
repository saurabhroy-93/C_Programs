#include <stdio.h>

void equal(int,int);

int main()
{
    equal(10,10);
    return 0;
}

void equal(int x,int y)
{
    if(x==y)
    printf("X [%d] and Y [%d] are equal ",x,y);
    else
    {
         printf("X [%d] and Y [%d] are Not equal ",x,y);
    }
}
