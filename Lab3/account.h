#include<string>
#include<cmath>


class Account {
        public:
                Account(std::string accountName, float initialBalance, int accountNumber)
                        : name{accountName}, balance(0.0f), creBalance(0.0f), accNum(0),
			  creLim(0.0f), intRate(0.0f) {
                                if(initialBalance > 0) {
                                        balance = initialBalance;
                                }
                                if(accountNumber > 0) {
					accNum = accountNumber;
				}
                        }
             	void deposit(float);
                void withdraw(float);
                void purchase(float);
                void payBill();
                void refund(float);
                void addAnnualInterest(int);
                void queryAccount();
                float getBalance() const;
                int getAccNumber() const;
                float getCreditLimit() const;
                float getInterestRate() const;
                void setName(std::string);
                void setAccNumber(int);
                void setCreditLimit(float);
                void setInterestRate(float);
                std::string getName() const;
       	private:
                std::string name;
                float balance;
                float creBalance; //crdit balance
                int accNum;
                float creLim; //credit limit
                float intRate ; //interest rate
};

