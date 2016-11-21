// Movie class declaration
#include <string>
#include "item.h"
using namespace std;

class Movie : public Item {
public:
	Movie(string director, string title, int releaseYear);
	string getDirector() const;	// returns movie director
	string getTitle() const;	// returns movie title
	int getReleaseYear() const;	// returns release year
	void setDirector(string director);	// assigns director value
	void setTitle(string title);		// assigns title value
	void setReleaseYear(int year);	// assigns release year value
    bool operator == (Movie& rhs) const = 0;
    bool operator != (Movie& rhs) const = 0;
    bool operator > (Movie& rhs) const = 0;
    bool operator < (Movie& rhs) const = 0;
private:
	string director;
	string title;
	int releaseYear;
};