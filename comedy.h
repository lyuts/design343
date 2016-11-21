// Comedy class declaration

#include "movie.h"

class Comedy : public Movie {
public:
	Comedy(string director, string movie, int releaseYear):
            director(director), movie(movie), releaseYear(releaseYear){};
	void display() const;
};