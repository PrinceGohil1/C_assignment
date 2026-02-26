#include<iostream>
using namespace std;
int main()
{
	int a=10;
	float b=5;
	double c=15;
	char grade='A';
	string name="Prince";
	
	float PI=3.14;

    int sum=a+5;
    float multiplication=b*2;
    double division=c/2;
    float circleArea=PI*b*b; 

    cout<<"Name = "<<name<<endl;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    cout<<"c = "<<c<<endl;
    cout<<"grade = "<<grade<< endl;
    cout<<"PI = "<<PI<<endl;

    cout<<"\nOperations"<<endl;
    cout<<"Sum = "<<sum<<endl;
    cout<<"Multiplication = "<<multiplication<<endl;
    cout<<"Division = "<<division<<endl;
    cout<<"Area of Circle(using PI) = "<<circleArea<<endl;
}
