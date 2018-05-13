#include <iostream> //needed for file i/o part
#include <fstream>
#include "Account.h"
#include "account.cpp"
#include "CheckingAccount.h"
#include "checkingAccount.cpp"
#include "SavingsAccount.h"
#include "savingsAccount.cpp"

using namespace std;


int main() {
/*
	ifstream inFile;
	inFile.open("account_ledger.txt");

	if(inFile.fail()) { //needed to check and make sure file opens
		cerr << "Error Opening File" << endl;
		exit(1);
	}	
*/

        CheckingAccount cAcc1 ("John Doe", 5000, 1000, 1.0);
        SavingAccount sAcc2 ("Mary Jane", 5000, 1000);

        Account * acc1 = &cAcc1; //pointers used
        Account * acc2 = &sAcc2;

        cout << "CHECKING ACCOUNT TEST" << endl;
        acc1->setInterestRate(0.1);
	acc1->queryAccount();
        acc1->setCreditLimit(1000);
        acc1->queryAccount();
        cout << "Invoking purchase." << endl;
        cAcc1.setFee(2.0);
        acc1->purchase(500);
        cout << "Invoking Withdrawal with fee" << endl;
        cAcc1.setFee(2.0);
        acc1->withdraw(200);
        cout << "Invoking Depost with fee" << endl;
        acc1->deposit(300);
        cout << "Adding annual interest" << endl;
        acc1->addAnnualInterest();
        acc1->queryAccount();

        cout << "SAVINGS ACCOUNT TEST" << endl;
        acc2->setInterestRate(0.1);
        acc2->queryAccount();
        acc2->setCreditLimit(1000);
        acc2->queryAccount();
        cout << "Invoking purchase." << endl;
        acc2->purchase(500);
        cout << "Invoking Withdrawal" << endl;
        acc2->withdraw(200);
        cout << "Invoking Deposit" << endl;
        acc2->deposit(300);
        cout << "Adding annual interest" << endl;
        acc2->addAnnualInterest();
        acc2->queryAccount();
/*
	Account* accounts[6];
	int numAcc = 0; //num of accounts
	
	string choice; //choice user inputs
	string  accType;
	int aNum1, aNum2;
	float amt;

	while(fin >> choice) { //user inputs choice
*/		
}
