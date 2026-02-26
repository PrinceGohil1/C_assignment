#include <iostream>
using namespace std;

int main() 
{
    int marks;

    cout<<"Enter student's marks = ";
    cin>>marks;

    if(marks>=90 && marks<=100) 
	{
        cout<<"Grade A"<<endl;
    }
    else if(marks>=75 && marks<90) 
	{
        cout<<"Grade B"<<endl;
    }
    else if(marks>=50 && marks<75) 
	{
        cout<<"Grade C"<<endl;
    }
    else if(marks>=35 && marks<50) 
	{
        cout<<"Grade D"<<endl;
    }
    else if(marks>=0 && marks<35) 
	{
        cout<<"Fail" <<endl;
    }
    else 
	{
        cout << "Invalid marks entered!" << endl;
    }
}

