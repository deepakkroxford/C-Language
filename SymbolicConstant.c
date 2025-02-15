# include<stdio.h>

/*
Globally accessible
No type cecking of the symbolic constants
No memory allocation for the symbolic constants
can not be changed 
*/
#define PI 3.14159  // Defining a symbolic constant
#define MAX_AGE 100

int main()
{
    printf("Value of PI: %f\n", PI);
    printf("Maximum age allowed: %d\n", MAX_AGE);
    return 0;
}