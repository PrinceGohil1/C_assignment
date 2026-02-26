//Write a C program that stores 5 integers in a 
//one-dimensional array and prints
//them. Extend this to handle a two-dimensional 
//array (3x3 matrix) and
//calculate the sum of all elements

#include<stdio.h> 
int main() 
{
    int i,j;
    int arr[5];          
    int matrix[3][3];   
    int sum=0;

    printf("Enter 5 integers for 1D array=\n");
    for(i=0;i<5;i++) 
	{
        scanf("%d",&arr[i]);
    }

    printf("\nElements of 1D array are:\n");
    for(i=0;i<5;i++) 
	{
        printf("%d",arr[i]);
    }

    printf("\n\nEnter elements for 3x3 matrix:\n");
    for(i=0;i<3;i++) 
	{
        for(j=0;j<3;j++) 
		{
            scanf("%d",&matrix[i][j]);
        }
    }

    printf("\n3x3 Matrix is:\n");
    for(i=0;i<3;i++) 
	{
        for(j=0;j<3;j++) 
		{
            printf("%d",matrix[i][j]);
            sum+=matrix[i][j];
        }
        printf("\n");
    }
    printf("\nSum of all elements in the matrix = %d\n",sum);
}

