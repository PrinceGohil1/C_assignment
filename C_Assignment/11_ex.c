//Write a C program that defines a structure 
//to store a student's details (name,roll number, and marks). 
//Use an array of  structures to store details of 3 students and print them.

#include <stdio.h>

// Define structure
struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() 
{
    struct Student s[3];  // Array of structures for 3 students
    int i;

    // Input details of 3 students
    printf("Enter details of 3 students:\n");
    for(i = 0; i < 3; i++) 
	{
        printf("\nStudent %d\n", i + 1);

        printf("Enter Name: ");
        scanf(" %[^\n]", s[i].name);  // To read string with spaces

        printf("Enter Roll Number: ");
        scanf("%d", &s[i].roll);

        printf("Enter Marks: ");
        scanf("%f", &s[i].marks);
    }

    // Display student details
    printf("\n--- Student Details ---\n");
    for(i = 0; i < 3; i++) 
	{
        printf("\nStudent %d\n", i + 1);
        printf("Name: %s\n", s[i].name);
        printf("Roll Number: %d\n", s[i].roll);
        printf("Marks: %.2f\n", s[i].marks);
    }


}

