#include <iostream>
using namespace std;
int main() 
{
    int secretNumber, guess;

    srand(time(0));
    secretNumber = rand() % 100 + 1;

    cout<<"The number between 1 and 100"<<endl;

    while(true) 
	{
        cout<<"Enter your guess= ";
        cin>>guess;

        if(guess>secretNumber) 
		{
            cout<<"Too high"<<endl;
        }
        else if(guess<secretNumber) 
		{
            cout<<"Too low"<<endl;
        }
        else 
		{
            cout<<"You guessed the correct number= "<<secretNumber<<endl;
            break; 
        }
    }
}

