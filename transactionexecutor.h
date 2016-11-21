// TransactionExecutor class declaration

#include "borrow.h"
#include "return.h"
#include "history.h"
#include "inventory.h"
#include <iostream>
#include <fstream>
using namespace std;

class TransactionExecutor
{
public:
	TransactionExecutor();
	~TransactionExecutor();
	void readCommandSequence();
	void process(Borrow *e);
	void process(Return *e);
	void process(History *e);
	void process(Inventory *e);
	bool searchInventory(char type);
	bool searchComedies(Comedy &movie);
	bool searchDramas(Drama &movie);
	bool searchClassics(Classic &movie);

private:
	Transaction *transactions;	// array of transactions
	LocationInventory &inventory;	// reference to store inventory
};