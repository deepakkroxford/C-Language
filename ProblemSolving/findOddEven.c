#include <stdio.h>

int main()
{
    int num = 11;
    num = num&1;
    if(num==0)
    {
        printf("Even number");
    }
    else{
        printf("Odd number");
    }
}