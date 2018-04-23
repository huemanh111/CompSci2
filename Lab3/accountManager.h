#include <string>
#include <cmath>
#include <vector>
#include "account.h"

using namespace std;

class AccountManager
{
//	vector<Account*> accounts;
	public:
		vector<Account*> accounts;
		void createAccount(std::string accountName, int initialBalance, int acctNumber);
		Account* findAccount(int acctNumber);
		Account* getAccount (int acctNumber);

	private:
		std::string name;
		float balance{0};
		int num{0};

};
