#include <stdio.h>

int print1toN(int num)
{
    if(num==10)
    {
        return num;
    }
    printf("%d ",num);  // print the number
    return print1toN(num+1);
}
int main()
{
    int num = 1;
    print1toN(num);

}