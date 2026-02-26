//Write a C program that accepts two integers
//from the user and performs
//arithmetic, relational, and logical operations on them.
//Display the results

#include<stdio.h>
int main()
{
	int a,b;
	
	printf("Enter First Operator =");
	scanf("%d",&a);
	
	printf("Enter second Operator =");
	scanf("%d",&b);
	
    printf("\n--- Arithmetic Operator ---\n");
    printf("Addition = %d\n",a+b);
    printf("Subtraction = %d\n",a-b);
    printf("Multiplication = %d\n",a*b);
    printf("Division = %d\n",a/b);
    printf("Modulus = %d\n",a%b);

    // Relational Operations
    printf("\n--- Relational Operator ---\n");
    printf("a==b = %d\n",a==b);
    printf("a!=b = %d\n",a!=b);
    printf("a>b = %d\n",a>b);
    printf("a<b = %d\n",a<b);
    printf("a>=b = %d\n",a>=b);
    printf("a<=b = %d\n",a<=b);

    // Logical Operations
    printf("\n--- Logical Operatior ---\n");
    printf("(a>0 && b>0) = %d\n",(a>0 && b>0));
    printf("(a>0 || b>0) = %d\n",(a>0 || b>0));
    printf("!(a>b) = %d\n",!(a>b));

}

