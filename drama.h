// Drama class declaration

#include "movie.h"

class Drama : public Movie
{
public:
	// Default constructor
	Drama();
	// Member functions
	bool operator == (Drama& rhs) const;	// overload for BST
	bool operator > (Drama& rhs) const;		// overload for BST
	void display() const;
};