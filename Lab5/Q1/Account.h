#ifndef ACCOUNT_H
#define ACCOUNT_H

#include<string>
#include<cmath>

class Account {

public:
    Account(std::string accountName, float initialBalance, int acctID);

    virtual ~Account() = default;

    float getBal() const;
    void setName(std::string accountName);
    std::string getName() const;
    void setID(int acctID);
    int getID() const; //gets customer's ID
    void deposit(float depositAmount);
    void withdraw(float withdrawalAmount);

//******credit card
    void setCreditLimit(float amt);
    float  getCreditLimit() ;
    void refund(float amt) ;
    void purchase(float amt);
    void payBill();

//***** interest rate
    void setInterestRate(float rate);
    float getInterestRate() const;

    void addAnnualInterest (int flag);
    void queryAccount();
    virtual void addAnnualInterest() = 0;


private:
   std::string name; // account name data member
   float balance{0.0}; // data member with default initial value
   float IR{0.0};   //annual IR
   float amt; //amount
   float rate;
//   int numID{0};
   int ID; //equivalent to acctID
   float creditBalance{0.0}; //credit balance
   float creditLimit{0.0};   //credit limit

};

#endif
