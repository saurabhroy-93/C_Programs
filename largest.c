#include <stdio.h>

void largest(int,int,int);

int main()
{
    largest(2,13,9);
    return 0;
}

void largest(int x,int y,int z)
{
    if(x>y && x>z)
    {
    printf("X [%d] is the largest number",x);
    }
    else
    {
        if (y>x && y>z)
        {
            printf("Y [%d] is the largest number",y);
        }
        else
        {
            printf("Z [%d] is the largest number",z);
        }
        
    }
    
}