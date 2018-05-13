#include <iostream>
#include <cmath>
#include "SavingsAccount.h"

using namespace std;



SavingAccount::SavingAccount(std::string accName, float iniBal, int accNum)
        : Account(accName, iniBal, accNum) {
}
void SavingAccount::addAnnualInterest() { //Use base class set method to change balance. Changing a local copy will not work.
        float i;
        float bal = getBal();
        float ir = getInterestRate();
        i = pow (1 + ir/365, 365.0);
        bal = bal * i;
}
