#include <iostream>
#include <cmath>
#include "CheckingAccount.h"

using namespace std;

//t = transaction
CheckingAccount::CheckingAccount(std::string accName, float iniBal, int accNum, double t)
        : Account(accName, iniBal, accNum) {
        setFee(t);
}
double CheckingAccount::setFee(double t) {
        fee = t;
}
void CheckingAccount::deposit(int depAmt) { //deposit amount
        float bal = getBal(); //bal = balance
        if(depAmt>0) {
                bal = (bal + depAmt) - fee;
        }

}
void CheckingAccount::withdraw(int withAmt) { //withdrawl amount **********Use base class set method to change balance. Changing a local copy will not work
        float bal = getBal();
        if(withAmt < bal) {
                bal = (bal - withAmt) - fee;
}
}
void CheckingAccount::addAnnualInterest() {
        float i; //interest
        float bal = getBal(); //balance
        float ir = getInterestRate(); //interest rate
        i = pow(1 + ir/12, 12.0);
        bal = bal * i;
}
