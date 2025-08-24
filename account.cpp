#include <iostream>
using namespace std;

class Account
{
public:
    string accountNumber;
    string ownerName;
    double balance;

    void deposit(double amount)
    {
        balance += amount;
        cout << "Deposited: " << amount << endl;
    }

    void withdraw(double amount)
    {
        const double min = 100000.0;
        if (amount > balance)
        {
            cout << "Insufficient balance!" << endl;
        }
        else if ((balance - amount) < min)
        {
            cout << "Withdrawal denied! Account must retain at least " << min << " VND." << endl;
        }
        else
        {
            balance -= amount;
            cout << "Withdrew: " << amount << endl;
        }
    }

    void displayBalance()
    {
        cout << endl
             << "------------------------" << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Owner Name: " << ownerName << endl;
        cout << "Current balance: " << balance << endl;
    }
};

int main()
{
    Account acc1;
    acc1.accountNumber = "123456789";
    acc1.ownerName = "Vo Hoang Tung";
    acc1.balance = 150000.0;

    acc1.displayBalance();
    acc1.deposit(50000.23);

    acc1.displayBalance();
    acc1.withdraw(20000);

    acc1.displayBalance();
    acc1.withdraw(150000); // Thử rút quá số dư hoặc vi phạm số dư tối thiểu

    acc1.displayBalance();
    return 0;
}