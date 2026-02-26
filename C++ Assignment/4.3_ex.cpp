#include <iostream>
using namespace std;
int localVar = 50;
int globalVar = 100;
void showLocal() 
{
    cout<<"showLocal() function"<<endl;
    cout<<"Local Variable = "<<localVar<<endl;
    cout<<"Global Variable = "<<globalVar<<endl;
}

void modifyGlobal() 
{
    globalVar=globalVar + 20;
    cout<<"\nmodifyGlobal() function"<<endl;
    cout<<"Modified Global Variable = "<<globalVar<<endl;
}

int main() 
{
    cout<<"main() function"<<endl;
    cout<<"Global Variable = "<<globalVar<<endl;

    showLocal();
    modifyGlobal();

    cout<<"\nmain() function"<<endl;
    cout<<"Global Variable modification = "<<globalVar<<endl;
}

