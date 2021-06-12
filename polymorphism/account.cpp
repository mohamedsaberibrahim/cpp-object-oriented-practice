#include <iostream>
using namespace std;

class Account
{
protected:
    float balance;

public:
    Account(float bal)
    {
        balance = bal;
    }
    virtual void Withdraw(float amount) = 0;
    virtual void Deposit(float amount) = 0;
    virtual void printBalance() = 0;
};

class Savings : public Account
{
private:
    float interest_rate = 0.8;

public:
    Savings(float balance) : Account(balance) {}
    void Withdraw(float amount)
    {
        this->balance -= (amount * interest_rate);
    }

    void Deposit(float amount)
    {
        this->balance += (amount * interest_rate);
    }

    void printBalance()
    {
        cout << this->balance << endl;
    }
};

class Current : public Account
{

public:
    Current(float balance) : Account(balance) {}
    void Withdraw(float amount)
    {
        this->balance -= amount;
    }

    void Deposit(float amount)
    {
        this->balance += amount;
    }

    void printBalance()
    {
        cout << this->balance << endl;
    }
};

int main()
{
    Savings s1(50000);
    Account *acc = &s1;
    acc->Deposit(1000);
    acc->printBalance();

    acc->Withdraw(3000);
    acc->printBalance();

    Current c1(50000);
    acc = &c1;
    acc->Deposit(1000);
    acc->printBalance();

    acc->Withdraw(3000);
    acc->printBalance();
    return 0;
}
