#include <iostream>
using namespace std;
int main() 
{
	int i,j;
    int A[2][2],B[2][2],C[2][2];

    cout << "Enter elements of first matrix = \n";
    for (i = 0; i < 2; i++) 
	{
        for (j=0;j<2;j++) 
		{
            cin>>A[i][j];
        }
    }
    
    cout << "Enter elements of second matrix = \n";
    for(i=0;i<2;i++) 
	{
        for(j=0;j<2;j++) 
		{
            cin>>B[i][j];
        }
    }

    for(i=0;i<2;i++) 
	{
        for(j=0;j<2;j++) 
		{
            C[i][j]=A[i][j]+B[i][j];
        }
    }

    cout<<"\nSum of the two matrix = \n";
    for(i=0;i<2;i++) 
	{
        for(j=0;j<2;j++) 
		{
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }
}

