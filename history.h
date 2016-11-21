// History class declaration
#include "transaction.h"

class History : public Transaction {
public:
	History();
	bool process();	// account history display method
};