#include <stdio.h>

int main(){
    int num1 = 10;
    int num2= 50;

    int temp1 = num1;
    int temp2 = num2;
    while(temp1!=temp2){
        if(temp1==0)
        {
            printf("gcd is %d",temp1);
        }
       if(temp1>temp2){
            temp1 = temp1-temp2;
        }
        if(temp2>temp1){
            temp2 = temp2-temp1;
        }
    }

    printf("%d\n",temp1);
}