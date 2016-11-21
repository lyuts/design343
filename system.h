#include "accountmanager.h"
#include "bst.h"
#include "transactionexecutor.h"
#include <string>
using namespace std;

class System {
public:
    System();
	~System();
	bool inputMovieData(istream& file);	// reads data from "*movies.txt"
	bool contains(Item) const;
	BST<Item>& getInventory();
	AccountManager& getAccounts();	// returns ref to account manager
private:
	AccountManager accounts;		// account manager
	TransactionExecutor executor;	// transaction manager
    BST<Item> inventory;			// array of item subclass BSTs
};	