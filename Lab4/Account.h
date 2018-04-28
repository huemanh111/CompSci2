#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>

class Account {
public:
   
    Account(std::string accountName, int initialBalance, int acctID = 9999);
    void deposit(int depositAmount);
    void withdraw(int withdrawalAmount);
    int getID() const;
    void setID(int acctID);

//******credit card
    void setCreditLimit (int limit);
    int  getCreditLimit () ;
    void refund (int amt) ;
    void purchase (int amt);
    void payBill ();
    
 //***** interest rate
    float getInterestRate () const;
    void setInterestRate (float rate);

    void addAnnualInterest (int flag);
    void queryAccount();
    
// end *********

    int getBal() const;

    void setName(std::string accountName);
    std::string getName() const;

private:
   std::string name; // account name data member 
   float balance{0}; // data member with default initial value
//   int accNum{0};
   int ID; 
   int creditBalance{0}; //credit balance
   int creditLimit{0};   //credit limit 
   float IR{0.0};   //annual IR 
};

#endif
