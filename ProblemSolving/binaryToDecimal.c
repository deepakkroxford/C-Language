#include <stdio.h>
#include<math.h>

int convertingBinaryToDecimal(int num)
{
    int sum = 0;
    int i =0;
    while(num!=0)
    {
        int rem = num%10;
        sum = sum + rem*pow(2,i);
        num /= 10;
        i++;

    }
    return sum;
}
int main()
{
    int num = 101;

    int decimal = convertingBinaryToDecimal(num);
    printf("Decimal equivalent of binary number %d is %d", num, decimal);
}