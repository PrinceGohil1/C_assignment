#include <iostream>
using namespace std;
class Rectangle 
{
private:
    float length,width,area;

public:
    void getData() 
	{
        cout<<"Enter length = ";
        cin>>length;
        
        cout<<"Enter width = ";
        cin>>width;
    }

    void displayArea() 
	{
        area=length*width;
        cout<<"Area of Rectangle = "<<area<<endl;
    }
};

int main() 
{
    Rectangle r;  
    r.getData();  
    r.displayArea();

}

