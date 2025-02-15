#include <stdio.h>

int checkingAramStrong(int num)
{
    int temp = num;
    int sum = 0;
    while(num!=0)
    {
        int rem = num%10;
        sum = sum+rem*rem*rem;
        num/=10;
    }
    return (sum ==temp);
}
int main()
{
    int num = 131;
    if(checkingAramStrong(num))
    {
        printf("%d it is the armstrong number",num);
    }
    else{
         printf("%d it is not an  armstrong number",num);
    }

}