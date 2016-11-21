// AccountManager declaration

#include "account.h"
#include "hashtable.h"

class AccountManager
{
public:
	// Default constructor
	AccountManager();
	// Member functions
	void readAccountData();		// inputs "*customers.txt" and creates list of accounts
	bool addAccount(Account);
	bool contains(int id) const;// returns true if argument ID exists on list
	void display() const;		// displays contents of account list

private:
	HashTable<Account> accounts;// a hashtable of accounts
};