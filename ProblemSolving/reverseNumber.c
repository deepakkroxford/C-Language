#include <stdio.h>

int reversingDigit(int num)
{
    int reverse = 0;
    while(num!=0)
    {
        int rem = num%10;
        reverse = reverse*10+rem;
        num /=10;
    }
    return reverse;
}
int main()
{
    /*
    revesing the digit and count how many number are present
    */
   int number = 1234419;
   int ans = reversingDigit(number);
   printf("%d \n",ans);

}