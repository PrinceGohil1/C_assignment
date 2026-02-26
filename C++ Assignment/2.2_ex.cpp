#include <iostream>
using namespace std;
int main() 
{
    int intNum=25;
    double doubleNum;
    doubleNum=intNum;

    cout<<"Implicit Type Conversion "<<endl;
    cout<<"Integer value = "<<intNum<<endl;
    cout<<"Converted to Double = "<<doubleNum<<endl;

    double decimalNum=10;
    int wholeNum;
    wholeNum = (int)decimalNum;

    cout<<"\nExplicit Type Conversion:"<<endl;
    cout<<"Original Double value = "<<decimalNum<<endl;
    cout<<"Converted to Integer = "<<wholeNum<<endl;

    int a=7,b=2;
    float result1,result2;

    result1=a/b;
    result2=(float)a/b;

    cout<<"\nDivision without casting (a / b) = "<<result1<<endl;
    cout<<"Division with explicit casting ((float)a / b) = "<<result2<<endl;
}

