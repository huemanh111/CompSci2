#include <iostream>
#include <cmath>
#include "SavingsAccount.h"

using namespace std;
 


SavingAccount::SavingAccount(std::string accName, float iniBal, int accNum)
        : Account(accName, iniBal, accNum) {
}
void SavingAccount::addAnnualInterest() {
        float i;
        float bal = getBal();
        float ir = getInterestRate();
        i = pow (1 + ir/365, 365.0);
        bal = bal * i;
}
