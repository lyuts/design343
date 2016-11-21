// Item class declaration

class Item
{
public:
	// Default constructor
	Item();							
	// Member functions
	virtual char getType() const;	// return item type, virtual
	int getStock() const;			// get number of items in stock
	void setType(char);				// sets item type
	bool checkout();				// decrement stock by 1 if possible
	void checkin();					// increment stock by 1
	virtual void display() const;	// displays item information

private:
	char type;		// item type
	int stock;		// number of items in inventory stock
};