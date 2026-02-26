//Write a C program to create a file, write a 
//string into it, close the file, then
//open the file again to read and display its contents.

#include <stdio.h>
int main() 
{
    FILE *fp;
    char str[100];

    // Create and open file for writing
    fp = fopen("student.txt", "w");

    if (fp == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }

    // Input string from user
    printf("Enter a string to write into the file: ");
    gets(str);

    // Write string to file
    fputs(str, fp);

    // Close the file
    fclose(fp);

    // Open file again for reading
    fp = fopen("student.txt", "r");

    if (fp == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }

    // Read and display file contents
    printf("\nContents of the file:\n");
    while (fgets(str, sizeof(str), fp) != NULL) {
        printf("%s", str);
    }
    fclose(fp);
}

