#include<stdio.h>

int fibnacci(int num)
{
    if(num <2){
        return num;
    }
    return fibnacci(num-1)+fibnacci(num-2);
}
int main ()
{
    int num =10;
    int ans = fibnacci(10);
    printf("The %dth Fibonacci number is %d\n",num,ans);
}