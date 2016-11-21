// Movie class declaration

#include <string>
#include "item.h"
using namespace std;

class Movie : public Item
{
public:
	// Default constructor
	Movie();
	// Member functions
	string getDirector() const;	// returns movie director
	string getTitle() const;	// returns movie title
	int getReleaseYear() const;	// returns release year
	void setDirector(string);	// assigns director value
	void setTitle(string);		// assigns title value
	void setReleaseYear(int);	// assigns release year value

private:
	string director;
	string title;
	int releaseYear;
};