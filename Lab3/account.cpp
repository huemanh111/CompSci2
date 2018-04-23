#include <iostream>
#include <iomanip>
#include "account.h"

using namespace std;

 		 void Account::deposit(float depositAmount) {
                        if(depositAmount > 0) {
                                balance = balance + depositAmount;
                        }
                }
 	        void Account::withdraw(float withdrawAmount) {
                        if(withdrawAmount > 0 && withdrawAmount <= balance) {
                                balance = balance - withdrawAmount;
                        }
                        else if(withdrawAmount > balance) {
                                cout << "Withdrawal amount exceeded account balance\n";
                        }
                }
		void Account::purchase(float purchaseAmount) {
			if(purchaseAmount < creLim) {
				creBalance = creLim - purchaseAmount;
			}
			else if(purchaseAmount > creLim) {
				cout << "Purchase exceeds balance." << endl;
			}
		}
		void Account::payBill() {
			if(creBalance < balance) {
				balance = balance - creBalance;
				creBalance = 0;
			}
			else {
				balance = 0;
				creBalance = creBalance - balance;
				cout << "Alert! Your balance is now $" << balance << endl;
				cout << "Bill left to be paid is $" << creBalance << endl;
			}
		}
		void Account::refund(float refundAmount) {
			creBalance = creBalance + refundAmount;
		}
		void Account::addAnnualInterest(int i) { //i = indicator
			if(i == 0) {
				balance = balance * pow(1 + (intRate/365.0), 365.0);
			}
			else if(i == 1) {
				balance = balance *  pow(1 + (intRate/12.0), 12.0);
			}
			else {
				cout << "Value not supported\n";
			}
		}
		void Account::queryAccount() {
			cout << setprecision(2) << fixed;
			if(getInterestRate() > 0)
			{
				cout << "Interest Added: "<< (intRate * balance) << endl;
			}

			cout << "**** Account for  " << getName() << " ***** ID = "
			       	<< getAccNumber() << " *****\n";
			cout << "Account Balance: $" << balance << endl;
			cout << "Credit Card Info**** " << endl;
			cout << "Credit Limit: $" << creLim << endl;
			cout << "Credit Balance: $" << creBalance << endl;
			cout << "Available Credit: $" << creLim - creBalance << endl;
			cout << "*****************" << endl << endl;
		}

                float Account::getBalance() const {
                        return balance;
                }
		int Account::getAccNumber() const {
			return accNum;
		}
		float Account::getCreditLimit() const {
			return creLim;
		}
		float Account::getInterestRate() const {
			return intRate;
		}
                void Account::setName(string accountName) {
                        name = accountName;
                }
		void Account::setAccNumber(int n) {
			accNum = n;
		}
		void Account::setCreditLimit(float lim) {
			creLim = lim;
		}
		void Account::setInterestRate(float rate) {
			intRate = rate;
		}
                string Account::getName() const {
                        return name;
		}


