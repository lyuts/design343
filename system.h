#ifndef SYSTEM_H
#define SYSTEM_H

#include "accountmanager.h"
#include "hashtable.h"
#include "bst.h"
#include "transactionexecutor.h"
#include "item.h"
#include <string>
using namespace std;

class System {
public:
    System();
	~System();
	bool inputMovieData(istream& file);	// reads data from "*movies.txt"
	bool contains(Item&) const;			// returns if item exists in inventory
	BST<Item>& getInventory();			// returns ref to inventory hashtable
	AccountManager& getAccounts();		// returns ref to account manager

private:
	AccountManager accounts;		// account manager
	TransactionExecutor executor;	// transaction manager
    HashTable<char, BST<Item>> inventory;	// HashTbale of items BSTs (eg., Comedy, Drama, Classic)
};	

#endif
