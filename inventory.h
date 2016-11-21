// Inventory class declaration

#include "transaction.h"

class Inventory : public Transaction
{
public:
	// Default constructor
	Inventory();
	// Member functions
	bool process();	// inventory display method
};