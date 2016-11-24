#ifndef DRAMA_H
#define DRAMA_H

// Drama class declaration
#include "movie.h"

class Drama : public Movie {
public:
	Drama(string director, string title, int releaseYear)
        : Movie(0, director, title, releaseYear)
    {}

	void display() const;
};

#endif // DRAMA_H
