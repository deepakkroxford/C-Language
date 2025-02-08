//
//  main.c
//  Pointers
//
//  Created by deepakkumar singh on 08/02/25.
//

#include <stdio.h>

/*
 when we work with the pointer we pass the memory address , so there is no need to make a copy of the element.
 Pointers play a crucial role in function arguments in C. They allow functions to:

 Modify actual arguments passed from the caller (call by reference).
 Pass large data structures efficiently, avoiding unnecessary memory duplication.
 Return multiple values from a function.
 
 🔹 Why use pointers?
 Directly modifies the original variables (x and y).
 No extra memory is used for copying values.
 */
int add(int *a , int *b){
    return *a+*b;
}
int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    
    int a= 10;
    int b =22;
    int x=add(&a,&b);
    printf("%d ",x);
    return 0;
}
