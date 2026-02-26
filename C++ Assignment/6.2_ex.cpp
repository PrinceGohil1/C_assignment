#include <iostream>
using namespace std;
class BankAccount 
{
private:
    double balance;  
public:
    BankAccount(double initialBalance) 
	{
        balance=initialBalance;
    }

    void deposit(double amount) 
	{
        if(amount>0) 
		{
            balance+=amount;
            cout<<"Deposited ="<<amount<<endl;
        }
		else 
		{
            cout<<"Invalid deposit amount!"<<endl;
        }
    }

    void withdraw(double amount) 
	{
        if(amount>balance) 
		{
            cout<<"Insufficient balance!"<<endl;
        } 
		else if(amount <= 0) 
		{
            cout<<"Invalid withdrawal amount!"<<endl;
        } 
		else 
		{
            balance-=amount;
            cout<<"Withdrawn = "<<amount<<endl;
        }
    }

    void displayBalance() 
	{
        cout<<"Current Balance = "<<balance<<endl;
    }
};

int main() 
{
    double initialAmount,depositAmount,withdrawAmount;

    cout<<"Enter initial balance = ";
    cin>>initialAmount;

    BankAccount account(initialAmount);

    account.displayBalance();

    cout<<"\nEnter amount to deposit = ";
    cin>>depositAmount;
    account.deposit(depositAmount);
    account.displayBalance();

    cout<<"\nEnter amount to withdraw = ";
    cin>>withdrawAmount;
    account.withdraw(withdrawAmount);
    account.displayBalance();
}

