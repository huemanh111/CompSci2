#include <string>
#include <cmath>
#include <iostream>
#include <iomanip>
#include "accountManager.h"
//#include "account.h"

using namespace std;


    void AccountManager::createAccount(string accountName, int initialBalance, int acctNumber)
        {
            Account *acc = findAccount(acctNumber);
            if (acc == NULL) {
                cout <<"duplicate ID, account not created" << endl;
            }
            else {
                acc = new Account(accountName,initialBalance,acctNumber);
                accounts.push_back(acc);
                cout << "Account " << acc->getAccNumber() << " created for " << acc->getName() << " successfully!" << endl;
            }
        }
    Account* AccountManager::findAccount(int acctNumber)
        {
            bool found = false;
            for(Account* acc: accounts) {
                if (accounts.size()==0) {
                    found = true;
                    //break;
                }
            }
            if (found == true)
                return NULL;
            else
                return 0;
        }
    Account* AccountManager::getAccount (int acctNumber)
    {
        Account *acc = findAccount(acctNumber);

        if ( acc!= NULL )
            return acc;
    }
