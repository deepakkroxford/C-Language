#include <stdio.h>

int main()
{
    int num = 36 ;
    for(int i=2;i<=num;i++)
    {
        while(num%i==0)
        {
            num = num/i;
            printf("%d ",i);
        }
    }
}