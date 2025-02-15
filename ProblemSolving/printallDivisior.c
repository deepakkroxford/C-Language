# include <stdio.h>

void PrintingAlldivisior(int num){
    for(int i=1;i*i<=num;i++)
    {
        if(num%i==0)
        {
            printf("%d ",i);
            if(num/i!=i)
            {
                printf("%d ",num/i);
            }
        }

    }
}
int main()
{
    int num =36;
    PrintingAlldivisior(num);

}
