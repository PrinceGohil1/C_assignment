//Write a C program that takes two strings 
//from the user and concatenates them
//using strcat(). Display the concatenated 
//string and its length using strlen().

#include <stdio.h>
#include <string.h>  

int main() 
{
    char str1[100],str2[100];

    // Input two strings from user
    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    // Concatenate strings
    strcat(str1, str2);

    // Display concatenated string
    printf("\nConcatenated String = %s\n", str1);

    // Display length of concatenated string
    printf("Length of concatenated string = %lu\n", strlen(str1));

}

