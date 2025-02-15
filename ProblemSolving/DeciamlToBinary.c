#include <stdio.h>
#include<math.h>

int decimalToBinary(int num)
{
    int binary = 0;
    int i = 0;
    while(num!=0)
    {
        int rem = num%2;
        binary = binary + rem*pow(10,i);
        num /= 2;
        i++;
    }
    return binary;
}
int main()
{
    int num = 5;
    int binary = decimalToBinary(num);
    printf("Binary equivalent of decimal number %d is %d", num, binary);
}