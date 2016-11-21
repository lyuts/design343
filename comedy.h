// Comedy class declaration

#include "movie.h"

class Comedy : public Movie
{
public:
	Comedy();
	bool operator == (Comedy& rhs) const;
	bool operator > (Comedy& rhs) const;
	void display() const;
};