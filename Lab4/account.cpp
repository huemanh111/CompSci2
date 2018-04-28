#include <iostream>
#include <math.h>
#include "Account.h"

using namespace std;

Account::Account(string accountName, int initialBalance, int acctID)
    : name{accountName}, ID(acctID) {

      if (initialBalance > 0) {
         balance = initialBalance;
      }
}

void Account::deposit(int depositAmount) {
      if (depositAmount > 0) {
         balance = balance + depositAmount;
      }
}


void Account::withdraw(int withdrawalAmount) {
      if (withdrawalAmount > 0) {
         balance = balance - withdrawalAmount;
      }
}

int Account::getID() const { return ID; }

void Account::setID(int acctID) { ID = acctID;}


void Account::setCreditLimit (int limit) { if (limit>0) creditLimit = limit;}

int  Account::getCreditLimit () { return creditLimit; }

void Account::refund (int amt) { creditBalance -= amt; }

void Account::purchase (int amt) {

	if ((creditBalance + amt) > creditLimit)
		std::cout << "over limit " << std::endl;
	else
		creditBalance += amt;
}


void Account::payBill () {
	if (creditBalance > balance)
	{
		balance = 0;
		creditBalance -= balance;
		creditLimit += balance;
		cout << "no more money to pay, leftover credit balance: $" << creditBalance << endl;
	}
	else
	{
		balance -= creditBalance;
		creditBalance = 0;
		creditLimit += creditBalance;
	}
}


float Account::getInterestRate() const { return IR; }

void Account::setInterestRate (float rate) { IR = rate;}

void Account::addAnnualInterest (int flag) {

	float oldBalance = balance;

	if (flag == 0)
		balance = balance*pow (1+IR/365, 365);
	else if (flag == 1)
		balance = balance*pow (1+IR/12, 12);
	else {
		cout << "error, methods of compounding not supported" << endl;
		return;
	}

        cout << "Interest added: " << balance - oldBalance << endl;
}

void Account::queryAccount() {

        cout << "**** Account for  " << name << " ***** ID = " << ID << " ******" << endl;
        cout << "Account Balance: " << balance << endl;
        cout << "credit card info: " << std::endl;
        cout << "Credit Limit: " << creditLimit << endl;
        cout << "Credit Balance: " << creditBalance<< endl;
        cout << "Available Credit: " << creditLimit - creditBalance << endl;
        cout << "***************" << endl << endl;
}

int Account::getBal() const { return balance;}

void Account::setName(std::string accountName) { name = accountName;}

string Account::getName() const { return name;}

