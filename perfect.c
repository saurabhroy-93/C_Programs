#include <stdio.h>

void perfect(int);

int main()
{
    perfect(18);
    return 0;
}

void perfect(int num)
{
int i,res=0,temp=0;
    for(i=1;i<num;i++)
    {
      temp=num%i;
        if(temp==0)
            {
                res=res+i;
            }  
        
    }
    if (res==num)
    {
        printf("[%d] is the perfect Number",num);
    }
    else
    {
        printf("[%d] is not perfect Number",num);
    }
    
}