// AccountManager declaration
#include "account.h"
#include "hashtable.h"

class AccountManager {
public:
	AccountManager();
	void readAccountData(istream& file);		// inputs "*customers.txt" and creates list of accounts
	bool addAccount(Account account);
	bool contains(int id) const;// returns true if argument ID exists in list of accounts
	void display() const;		// displays all accounts
private:
	HashTable<Account> accounts;// a hashtable of accounts
};