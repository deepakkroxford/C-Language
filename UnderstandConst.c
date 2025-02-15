#include<stdio.h>

int main()
{
    const int x= 10;
    printf("%d\n", x);
    const float y = 10.342f;
    printf("%f\n", y);
   const char c = 'a';
    //c = 'b'; it will give error beacuse we can not reassingn the values of the char c beacuse it 
    // const.
    printf("%c\n", c);

    /*
    Declartion and assingment of the varibles 
    */

   float a ;
   int b;
   double d;

   // assingment of the varibales 
   a = 10.5;
   b = 20;
   d = 30.7;

   printf("%f\n", a);
   printf("%d\n", b);
   printf("%lf\n", d);

   return 0;


}