#include <iostream>
using namespace std;
int main() 
{
    int a=10,b=5;

    cout<<"Arithmetic Operators"<<endl;
    cout<<"a+b = "<<a+b<<endl;
    cout<<"a-b = "<<a-b<<endl;
    cout<<"a*b = "<<a*b<<endl;
    cout<<"a/b = "<<a/b<<endl;
    cout<<"a%b = "<<a%b<<endl;

    cout<<"\nRelational Operators"<<endl;
    cout<<"a==b = "<<(a==b)<<endl;
    cout<<"a!=b = "<<(a!=b)<<endl;
    cout<<"a>b = "<<(a>b)<<endl;
    cout<<"a<b = "<<(a<b)<<endl;
    cout<<"a>=b = "<<(a>=b)<<endl;
    cout<<"a<=b = "<<(a<=b)<<endl;

    bool x=true,y=false;
    cout<<"\nLogical Operators"<<endl;
    cout<<"x && y = "<<(x&&y)<<endl;
    cout<<"x || y ="<<(x||y)<<endl;
    cout<<"!x = "<<(!x)<<endl;

    cout<<"\nBitwise Operators"<<endl;
    cout<<"a&b ="<<(a&b)<<endl;
    cout<<"a|b ="<<(a|b)<<endl;
    cout<<"a ^ b = "<<(a^b)<<endl;
    cout<<"~a = "<<(~a)<<endl;
    cout<<"a<<1 = "<<(a<<1)<< endl;
    cout<<"a>>1 = "<<(a>>1)<< endl;

}

