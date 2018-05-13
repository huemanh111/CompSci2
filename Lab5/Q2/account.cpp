#include <iostream>
#include <math.h>
#include "Account.h"

using namespace std;

Account::Account(string accountName, float initialBalance, int acctID) 
      :name(accountName), balance(0.0), IR(0.0), amt(0.0), ID(0), creditBalance(0.0), creditLimit(0.0) {
      if (initialBalance > 0) {
         balance = initialBalance;
      }
      if(acctID > 0) {
          ID = acctID;
      }
}

void Account::deposit(float depositAmount) {
      if (depositAmount > 0) {
         balance = balance + depositAmount;
      }
}


void Account::withdraw(float withdrawalAmount) {
      if (withdrawalAmount > 0) {
         balance = balance - withdrawalAmount;
      }
}

int Account::getID() const { 
	return ID; 
}

void Account::setID(int acctID) { 
	ID = acctID;
}

void Account::setCreditLimit(float limit) { 
	if(limit > 0) {
		creditLimit = limit;
	}
}

float  Account::getCreditLimit() { 
	return creditLimit; 
}

void Account::refund(float amt) { 
	creditBalance -= amt; 
}

void Account::purchase(float amt) {

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


float Account::getInterestRate() const { 
	return IR;
}

void Account::setInterestRate(float rate) { 
	IR = rate;
}

//was commented out beforeee
/*
void Account::addAnnualInterest(int flag) {

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
}*/
//was commented outtttttt

void Account::queryAccount() {

        cout << "**** Account for  " << name << " ***** ID = " << ID << " ******" << endl;
        cout << "Account Balance: " << balance << endl;
        cout << "credit card info: " << std::endl;
        cout << "Credit Limit: " << creditLimit << endl;
        cout << "Credit Balance: " << creditBalance<< endl;
        cout << "Available Credit: " << creditLimit - creditBalance << endl;
        cout << "***************" << endl << endl;
}

float Account::getBal() const { 
	return balance;
}

void Account::setName(std::string accountName) { 
	name = accountName;
}

string Account::getName() const { 
	return name;
}

