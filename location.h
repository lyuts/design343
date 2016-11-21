// Location class declaration

#include "locationinventory.h"
#include "accountmanager.h"
#include "transactionexecutor.h"
#include <string>
using namespace std;

class Location
{
public:
	// Constructors, destructor
	Location();			
	Location(string city);
	~Location();
	// Member functions
	string getCity() const;		// returns location city
	void setCity(string city);	// sets location city
	LocationInventory& getInventory();	// returns ref to inventory manager
	AccountManager& getAccounts();		// returns ref to account manager

private:
	string city;						// city of location
	LocationInventory inventory;		// inventory manager
	AccountManager accounts;			// account manager
	TransactionExecutor transactions;	// transaction manager
};