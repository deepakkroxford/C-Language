#include<stdio.h>

int main(){
    int a = 10;
    int b = 20 ;
    a = a^b;
    b = a^b;
    a = a^b;
    printf("a = %d and b = %d\n",a,b);

    // other way is 

    int x = 20;
    int y = 10;
    x= x+y;
    y = x-y;
    x=x-y;
    printf("x = %d and y = %d\n",x,y);
}