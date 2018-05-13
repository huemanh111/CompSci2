#ifndef CHECKINGACCOUNT_H
#define CHECKINGACCOUNT_H

#include<string>
#include "Account.h" //inheriting from super class Account

class CheckingAccount : public Account {
        public: //t for transaction
                CheckingAccount(std::string accName, float iniBal, int accNum, double t);
                virtual ~CheckingAccount() = default;
                double setFee (double t); //t = transaction
                void deposit(int depAmt); //depAmt = deposit amount
                void withdraw(int withAmt); //withAmt = withdrawal amount
                virtual void addAnnualInterest() override;

        private:
                double fee{1.0};
};

#endif
