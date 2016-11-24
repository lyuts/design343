#ifndef INVENTORY_H
#define INVENTORY_H

// Inventory class declaration
#include "transaction.h"

class Inventory : public Transaction {
public:
	Inventory();
	bool process();	// inventory display method
};

#endif // INVENTORY_H
