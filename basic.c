//
//  basic.c
//  basic
//
//  Created by deepakkumar singh on 07/02/25.
//

#include "stdio.h"

#include <string.h>

    /*
      Total questions :-
     1. Introduction to C Programming  -> done
     2. Importance and Applications of C -> done
     3. Understanding Sample C Programs -> done
     4. Basic Structure of a C Program - done
     5. Programming Styles and Best Practices in C - done
     6. Compiling and Executing a C Program - done
     7. Character Set, Tokens, and Keywords in C -done
     8. Constants, Variables, and Data Types in C -done
     9. Declaration and Assignment of Variables - done
     10. Defining and Using Symbolic Constants
     11. Operators in C and Their Categories - done
     12. Arithmetic, Relational, and Logical Operators - done
     13. Assignment, Increment, and Decrement Operators - done
     14. Conditional and Bitwise Operators in C - done
     15. Understanding Expression Evaluation and Precedence
     16. Managing Input and Output Operations in C
     17. Decision-Making in C: If-Else and Switch Cases - done
     18. Looping Constructs: While, Do-While, and For Loops - done
     19. Jump Statements: Break, Continue, and Goto - done
     20. Working with Arrays: One-Dimensional and Multi-Dimensional - done
     21. String Handling in C: Reading, Writing, and Manipulation
     22. Arithmetic Operations on Characters and Strings
     23. User-Defined Functions: Importance and Implementation
     24. Function Categories: Arguments, Return Types, and Scope
     25. Recursion in C: Concept and Applications
     26. Pointers and Their Role in Function Arguments
     27. Understanding ANSI C Functions
     28. Nested Functions and Function Calls in C
     29. Common Computational Problems and Solutions in C
     30. Mathematical Functions and Type Conversions in Expressions
     */
    /*
     Q1 what is c ?
     sol:- C is a general-purpose programming language created by Dennis Ritchie in 1972 at Bell Labs. 
     It is fast, efficient, and widely used for system programming, operating systems, and embedded systems.
      Many modern languages, like C++ and Java, are based on C.

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




     Q8 what is constant , variable , Data types ?
     sol:-
       Constant: A value that cannot be changed during program execution (e.g., const int x = 10;).
       Types of Constants:
       Integer constants: 5, -3
       Character constants: 'a', '1'
       Floating-point constants: 3.14, 0.99
       Variables
       Variable: A container that stores data, and its value can change during program execution.
       Example: int age = 25;
       Data Types:-
       Data types specify the type of data a variable can store. Common types include:
       int: Integer numbers (e.g., 5)
       f       loat: Decimal numbers (e.g., 3.14)
       char: Single characters (e.g., 'A')
       double: Decimal numbers with more precision (e.g., 3.14159)

     Q9 what is operator in c
     sol:-
        Arithmetic Operators: Perform mathematical operations.
        + (addition), - (subtraction), * (multiplication), / (division), % (modulo).
        Relational Operators: Compare values and return true or false.
        == (equal to), != (not equal to), > (greater than), < (less than), >= (greater than or equal to), <= (less than or equal to).
        Logical Operators: Combine conditions.
        && (AND), || (OR), ! (NOT).
        Assignment Operators: Assign values to variables.
        = (simple assignment), += (add and assign), -= (subtract and assign), etc.
        Increment/Decrement Operators: Increase or decrease values by 1.
        ++ (increment), -- (decrement).


     Q10 when to use which loop ?
     sol: When to Use Each Loop
     Use while loop:
     When the number of iterations is unknown.
     When you need to loop while a condition is true, and the loop might not execute at all if the condition is false initially.
     Use do-while loop:
     When you need the loop to execute at least once regardless of the condition.
     Commonly used for user input validation or actions that must happen at least once (e.g., menu displays).
     Use for loop:
     When you know the exact number of iterations in advance.
     Ideal for count-controlled loops, such as iterating over arrays or performing a fixed number of actions.
     
     Q11 Dynamic memory Allocation in C
     sol:- In dynamic memory allocation memory will allocate at run time during the execution of the program . in the dynamic memory allocation the size will not fixed like when we initilize the array so the size of the array is fixed but when we use the dynamic memory allocation so we not need define the size it will grow according to need.
     
     In C, dynamic memory allocation functions from the stdlib.h library allow us to allocate memory at runtime. The primary functions used are:malloc , calloc , realloc , free
     
     How malloc() Works:
     malloc(size) allocates a single continuous block of memory of the requested size.
     The memory is not initialized, so it contains garbage values.
     When you use malloc(size), it allocates a single continuous block of memory.
     It does not divide the memory into separate blocks—it’s just a big chunk of memory.
     It returns a pointer to the first byte of that memory block.
     When you use malloc(), the allocated memory already contains old leftover data from previous uses. These random, unpredictable values are called garbage values because they are not initialized by malloc().
     so if we inisilize the value of malloc 5 and we give the 2 value so remaing memory is still allocated with grabage value
     ✅ Unused memory is still allocated but might contain garbage values.
     ✅ If you need to resize memory, use realloc().
     
     Understanding calloc() in Simple Terms
     calloc() is similar to malloc(), but it has two key differences:

     It initializes all allocated memory to zero (no garbage values).
     It takes two arguments:
     The number of elements
     The size of each element
     
     
     Feature             malloc(15 * sizeof(int))       calloc(15, sizeof(int))
     Memory Allocation  Single block of 30 bytes        Single block of 30 bytes
     Initialization        Garbage values               All values set to 0
     Arguments        1 (total size in bytes)           2 (number of elements, size of each)
     Performance            Faster                      Slightly slower (due to zero initialization)
     
     
     Realloc :-Use realloc() when you need to resize an existing memory block (e.g., when the size of your array or list changes during execution).
     void* realloc(void* ptr, size_t new_size);
     Takes two arguments: the pointer to the previously allocated memory block and the new size.
     
     Q12: What is struct in C ?
     sol:- Struct is use to group the diffrent data types in the c and c++ language .
     
     Q13  Mathematical Functions and Type Conversions in Expressions
         In C, mathematical operations are performed using built-in mathematical functions (like sqrt(), pow(), etc.) from the math.h library. Additionally, type conversion (or type casting) is an important concept in C, where you can convert a value from one data type to another.

        Mathematical Functions

        Some common mathematical functions in C are defined in the math.h library. Here are a few examples:

        sqrt(x): Returns the square root of x.
        pow(x, y): Returns x raised to the power y.
        sin(x), cos(x): Return the sine and cosine of x (in radians).
        ceil(x), floor(x): Return the ceiling and floor of x.

        Q14 what is ANCI?
        sol:- NSI C stands for American National Standards Institute C, and its main functions are:

        Ensuring type safety in functions and variables.
        Improving code readability and maintainability.
        Making C programs portable across different compilers.
        🔹 Introduced in: 1989 (ANSI C or C89)
        🔹 Later adopted as: ISO C (C90)
        ANSI C introduced function prototypes, strict type checking, and standard libraries, making C programming more reliable and consistent across different platforms. 🚀

     
     */
    struct Person {
        char name[50];
        int age;
    };

    // Function to display information (similar to a class method)
    void display(struct Person p) {
        printf("Name: %s, Age: %d\n", p.name, p.age);
    }

    // Function to set name and age (like a constructor/setter)
    void setPerson(struct Person *p, const char *name, int age) {
        strcpy(p->name, name);
        p->age = age;
    }

    int main() {
        struct Person p1;

        // Set values using the setter function
        setPerson(&p1, "John", 30);

        // Display the values
        display(p1);

        return 0;
    }

