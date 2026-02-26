#include <iostream>
using namespace std;
int main() 
{
    int n,i,sum=0;

    cout<<"Enter the number of elements = ";
    cin>>n;

    int arr[n]; 

    cout<<"Enter "<<n<<" integers"<<endl;
    for(i=0;i<n;i++) 
	{
        cin >> arr[i];
        sum += arr[i];  
    }

    float average=(float)sum/n;

    cout<<"\nSum of elements = "<<sum<<endl;
    cout<<"Average of elements = "<<average<<endl;

}

