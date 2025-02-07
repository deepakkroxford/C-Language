//
//  basic.c
//  basic
//
//  Created by deepakkumar singh on 07/02/25.
//


# include "stdio.h";
int  main(){
    
    /*
     Q1 what is c ?
     sol:- C is a general-purpose programming language created by Dennis Ritchie in 1972 at Bell Labs. It is fast, efficient, and widely used for system programming, operating systems, and embedded systems. Many modern languages, like C++ and Java, are based on C.
     
     Q2 Which is faster C , C++ , Java?
     sol:- ✅ C is the fastest, followed by C++, and then Java due to its JVM overhead. However, Java is easier to use and more portable across different systems. 🚀
     
     Q3 what is importance of c and the application of c
     sol:-
     Importance of C:-
     
     Fast and Efficient – Runs quickly and uses fewer resources.
     Portable – Works on different computers with little change.
     Foundation for Other Languages – C++ and Java are based on C.
     Low-Level Access – Helps in system and hardware programming.
     
     Applications of C:-
     Operating Systems – Windows, Linux, macOS.
     Embedded Systems – Used in robots, cars, and IoT devices.
     Game Development – Many game engines use C.
     Databases – MySQL and other databases are built using C.
     Compilers – Many programming languages have C-based compilers.
     
     Q4 What is the basic structrue of c program ?
     sol: -
     #include <stdio.h>  // 1. Preprocessor Directives

          // 2. Global Declarations (if any)

           int main() {        // 3. Main Function
         // 4. Variable Declarations
         int a = 10;

         // 5. Executable Statements
         printf("Value of a: %d\n", a);

         return 0;       // 6. Return Statement
     }
     
     Components of a C Program:

     Preprocessor Directives (#include <stdio.h>) – Includes necessary libraries.
     Global Declarations – Variables/constants declared before main().
     Main Function (int main()) – The program's entry point.
     Variable Declarations – Defines variables used in the program.
     Executable Statements – Actual operations (calculations, printing, etc.).
     Return Statement – Ends program execution and returns a value.
     
     Q5 programming style and best practices in c
     sol:-
     ✔ Use Proper Indentation & Spacing for readability.
     ✔ Use Meaningful Variable Names (e.g., studentAge instead of a).
     ✔ Comment Your Code to explain logic.
     ✔ Avoid Hardcoding Values, use constants (#define PI 3.1416).
     ✔ Handle User Input Properly (scanf("%d", &age);).
     ✔ Write Modular Code using functions.
     ✔ Check for Errors in input and file handling.
     ✔ Use Braces {} Even for Single Statements in loops and conditions.
     ✔ Free Allocated Memory (free(ptr);) to avoid memory leaks.
     ✔ Follow Consistent Naming Conventions (camelCase, snake_case).
     
     
     Q6 Compiling and Executing a C Program
     Write the Program:
     Create a C program and save it with a .c extension.
     Compile the Program: The C program needs to be compiled into machine-readable code using a compiler (e.g., GCC). The compiler checks for errors and generates an executable file.
     Execute the Program:
     Once compiled, the program is ready to run. You execute the compiled program to see the output.
     Error Handling: If there are any syntax errors or issues, the compiler will display error messages, which need to be   fixed before successful execution.
     
     Q7 What is character set in c ?
     sol:- The character set in C refers to all the characters that can be used in a C program, including:
     Letters (A-Z, a-z)
     Digits (0-9)
     Special symbols (like +, -, *, ;)
     Whitespace (spaces, tabs, and newlines)
     
     
     */
    int a=10;
    int b = 20;
    printf("%d",a+b);
    return 0;
    
    
}
