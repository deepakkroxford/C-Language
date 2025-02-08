//
//  Strings.c
//  Pointers
//
//  Created by deepakkumar singh on 08/02/25.
//
#include <stdio.h>
#include <string.h>

int main(void) {  // Corrected main function
  
  // When we want to use string methods in C, we need to include the library <string.h>
  // Then we can use all string inbuilt functions. The common string inbuilt functions are
  // strlen, strcpy, strcat, strcmp
    /*
     Actually, the strcmp() function does not only check the first character of the strings—it compares the strings character by character until one of the following occurs:

     The strings are identical: In this case, strcmp() returns 0.
     A difference is found: The function stops comparing at the first differing character, and the difference between the ASCII values of those characters determines the return value.
    One string is shorter than the other: If one string is shorter and the strings are equal up to that point, strcmp() considers the shorter string to be "less than" the longer one.
     */
    char string[] = "Deepak singh";
    // Store length once

    for (int i = 0; i < strlen(string); i++) {
        printf("%c", string[i]);  // Print each character in the string
    }
    
    char copy[100];  // Increased size to 100 to handle concatenated string safely
    strcpy(copy, "how are you");  // Copying string into 'copy'
    printf("\n%s", copy);  // Print copied string
    
    strcat(copy, " I am fine brother what about you");  // Concatenate additional string
    printf("\n%s", copy);  // Print the concatenated string

    int result = strcmp(string,copy);
    printf(" \n %d",result);

    return 0;  // Return success
}

