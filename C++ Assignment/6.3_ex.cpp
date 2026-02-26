#include <iostream>
using namespace std;
class Person 
{
protected:
	int age;
    string name;

public:
    void getPersonData() 
	{
        cout<<"Enter name = ";
        cin>>name;
        
        cout<<"Enter age = ";
        cin>>age;
    }
    void displayPersonData() 
	{
        cout<<"\t"<<name<<"\t"<<age<<"\t"<<endl;
    }
};

class Student : public Person 
{
private:
    int rollNo;
    float marks;

public:
    void getStudentData() 
	{
        getPersonData(); 
        
        cout<<"Enter Roll Number = ";
        cin>>rollNo;
        
        cout<<"Enter Marks = ";
        cin>>marks;
    }
    void displayStudentData() 
	{
        displayPersonData(); 
        
        cout<<"\t"<<rollNo<<"\t"<< marks<<"\t"<< endl;
    }
};

class Teacher : public Person 
{
private:
    string subject;
    double salary;

public:
    void getTeacherData() 
	{
        getPersonData(); 
        
        cout<<"Enter Subject =";
        cin>>subject;
        
        cout<<"Enter Salary = ";
        cin>>salary;
    }
    void displayTeacherData() 
	{
        displayPersonData(); 
        
        cout<<"\t"<<subject<<"\t"<<salary<<endl;
    }
};

int main() 
{
    Student s;
    Teacher t;

    cout<<"Enter Student Details"<<endl;
    s.getStudentData();

    cout<<"\nStudent Information"<<endl;
    s.displayStudentData();

    cout<<"\nEnter Teacher Details"<<endl;
    t.getTeacherData();

    cout<<"\nTeacher Information"<<endl;
    t.displayTeacherData();
}

