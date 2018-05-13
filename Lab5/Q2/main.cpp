#include <iostream> //needed for file i/o part
#include <fstream>
#include <sstream>
#include <string>
#include <map>
#include "Account.h"
#include "account.cpp"
#include "CheckingAccount.h"
#include "checkingAccount.cpp"
#include "SavingsAccount.h"
#include "savingsAccount.cpp"

using namespace std;


int main() {

	ifstream inFile;
	inFile.open("account_ledger.txt");

	if(inFile.fail()) { //needed to check and make sure file opens
		cerr << "Error Opening File" << endl;
		exit(1);
	}

	string choice, f1, f2, f3, line;
    int ID, withAmt, deposAmt, purchaseAmt, limAmt, balAmt, bill;
    float fee;
    typedef map<int, Account*> account_map;
    account_map mymap;

    while(getline(inFile, line)) {
        Account *acc;
        stringstream iss(line);
        iss >> choice >>  f1 >> f2 >> f3;
        if(choice == "Create") {
            ID = atoi(f2.c_str());
            Account *acc = new SavingAccount(f1, ID, atoi(f3.c_str()));
            mymap[ID] = acc;

            acc->queryAccount();
        }
        if(choice == "query")
            acc->queryAccount();
        if(choice == "deposit")
            acc->deposit(deposAmt);
        if(choice == "withdraw")
            acc->withdraw(withAmt);
        if(choice == "purchaseAmtchase")
            acc->purchase(purchaseAmt);
        if(choice == "payBill")
            acc->payBill();
        if(choice == "setCreditLimit")
            ID = atoi(f1.c_str());
            acc = mymap[ID];
            acc->setCreditLimit(limAmt);
        
            
    }
}
