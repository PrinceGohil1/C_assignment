#include <iostream>
#include <string>
using namespace std;
int main() 
{
	int i;
    string str,rev=0;

    cout<<"Enter a string =";
    getline(cin,str);

    for(i=str.length()-1;i>=0;i--) 
	{
        rev+=str[i];
    }

    if(str==rev) 
	{
        cout<<"The string is a palindrome."<<endl;
    }
	 else 
	{
        cout<<"The string is not a palindrome."<<endl;
    }
}

