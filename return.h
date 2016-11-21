// Return class declaration

#include "transaction.h"

class Return : public Transaction
{
public:
	// Constructor
	Return();
	// Member functions
	bool process();	// return transaction method
		// check if item is in inventory
		// increment item stock
		// log transaction

private:
	Item product;
};