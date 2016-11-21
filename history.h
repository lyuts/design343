// History class declaration

#include "transaction.h"

class History : public Transaction
{
public:
	// Default constructor
	History();
	// Member functions
	bool process();	// account history display method
};