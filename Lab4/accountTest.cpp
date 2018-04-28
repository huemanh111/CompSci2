#include <iostream>
#include "CheckingAccount.h"
#include "SavingsAccount.h"

using namespace std;

 
int main() {
        CheckingAccount acc1 ("John Doe", 5000, 1000, 1.0);
        SavingAccount acc2 ("Mary Jane", 5000, 1000);
        cout << "Checking Account Test" << endl;
        acc1.queryAccount();
        acc1.setCreditLimit(1000);
        acc1.queryAccount();
        cout << "Invoking purchase." << endl;
        acc1.purchase(500);
        cout << "Invoking Withdrawal with fee" << endl;
        acc1.withdraw(200);
        cout << "Invoking depost with fee" << endl;
        acc1.deposit(300);
        cout << "Adding annual interest" << endl;
        acc1.setInterestRate(0.1);
        acc1.addAnnualInterest();
        acc1.queryAccount();
 
        cout << "Saving Account Test" << endl;
        acc2.queryAccount();
        acc2.setCreditLimit(1000);
        acc2.queryAccount();
        cout << "Invoking purchase." << endl;
        acc2.purchase(500);
        cout << "Invoking Withdrawal" << endl;
        acc2.withdraw(200);
        cout << "Invoking depost" << endl;
        acc2.deposit(300);
        cout << "Adding annual interest" << endl;
        acc2.setInterestRate(0.1);
        acc2.addAnnualInterest();
        acc2.queryAccount();
}
