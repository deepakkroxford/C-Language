#include <stdio.h>

int isPrime(int num)
{
    if(num<=1)
    {
        return 0;
    }
    for(int i=2;i*i<=num;i++)
    {
        if(num%i==0)
        {
            return 0;
        }
        
    }
    return 1;

}
int main()
{
    int num = 21;

    if(isPrime(num))
    {
        printf("%d the number is prime number",num);
    }
    else{
        printf("not a prime number %d",num);
    }

}