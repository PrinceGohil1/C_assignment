//Write a C program to demonstrate pointer usage. 
//Use a pointer to modify the
//value of a variable and print the result.

#include <stdio.h>
int main() 
{
    int num=10;     // Normal variable
    int *ptr;       // Pointer variable

    // Assign address of num to pointer
    ptr=&num;

    // Print original value
    printf("Value of num = %d\n",num);

    // Modify value using pointer
    *ptr=25;

    // Print modified value
    printf("Modified value of num using pointer = %d\n",num);

    // Print address and pointer value
    printf("Address of num = %p\n",&num);
    printf("Pointer ptr stores address = %p\n",ptr);
}

