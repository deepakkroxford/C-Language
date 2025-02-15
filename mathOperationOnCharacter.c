#include<stdio.h>
int main()
{
    char x = 'A';
    int number  = (int) x; // here we convert the character value in to a number 
    printf("%c",x++); // it will increse the ascii value by one 
    printf("\n %d", number);
    printf("\n %c",x); // it will print the B because it vlaue is incresed by one previously

    char x2 = 'a';
    printf("%d",(int)x2); 
    return 0;

}