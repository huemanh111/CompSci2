#ifndef SAVINGACCOUNT_H
#define SAVINGACCOUNT_H

#include <string>
#include "Account.h" //inheriting from the super class

class SavingAccount : public Account {
        public:
                SavingAccount(std::string accName, float iniBal, int accNum);
                virtual ~SavingAccount() = default;
                virtual void addAnnualInterest() override;
 };
#endif
