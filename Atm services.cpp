#include <iostream>
using namespace std;
// Function to check the total balance
double checkBalance(double balance)
{
    cout << "Your total balance is:";
    return balance;
}
// Function to cwithdraw money
double withDrawMoney(double withdraw, double balance)
{

    balance = balance - withdraw;
    cout << "Your total balance after withdraw is:";
    return balance;
}
// function to deposit money
double depositMoney(double balance, double deposit)
{
    balance = balance + deposit;
    cout << "Your balance after depositing money is:";
    return balance;
}

// main function
int main()
{
    // variables
    double withdraw, deposit;
    int choice;
    double balance = 50000;

    cout << "Welcome to Habib Bank Limited:\n";
    cout << "Enter 1 to check balance.\n";
    cout << "Enter 2 to deposit money.\n";
    cout << "Enter 3 to withdraw money.\n";
    cin >> choice;

    // Validiating input
    while (choice > 3 || choice < 1)
    {
        cout << "Invalid input!!\n";
        cout << "Enter valid Input:\n";
        cin >> choice;
    }
    // using switch-case
    switch (choice)
    {
    case 1:
        // calling check balance function
        cout << checkBalance(balance);
        break;
    case 2:
        cout << "Enter amount of balance you want to deposit(REMEMBER-your deposit should must be less or equal to you total balance):\n";
        cin >> deposit;
        // calling deposit money function
        cout << depositMoney(balance, deposit);
        break;
    case 3:
        cout << "Enter amount of balance you want to withdraw:\n";
        cin >> withdraw;
        if (withdraw <= balance)
        {
            // calling withdraw function
            cout << withDrawMoney(withdraw, balance);
        }
        else
        {
            // validiating input
            while (withdraw > balance)
            {
                cout << "Invalid input!!\n";
                cout << "Enter Valid Input\n";
                cin >> withdraw;
            }
            cout << withDrawMoney(withdraw, balance);
        }
        break;
    }
    return 0;
}