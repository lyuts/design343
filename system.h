#include "accountmanager.h"
#include "transactionexecutor.h"
#include <string>
using namespace std;

class System {
public:
    System();
	~System();
	bool inputMovieData(istream& file);	// reads data from "*movies.txt"
	bool contains(Item) const;
	BSTNode* getInventory();
	AccountManager& getAccounts();		// returns ref to account manager
private:
	AccountManager accounts;			// account manager
	TransactionExecutor executor;	// transaction manager
    BSTNode* inventory; // pointer to the first root of the inventory list. List of roots of trees for each inventory
                        // item (ie Comedy BST, Classic BST, etc.)
};