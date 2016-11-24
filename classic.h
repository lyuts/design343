// Classic class declaration

#include "movie.h"

class Classic : public Movie {
public:
	Classic(string director, string title, int releaseYear, int releaseMonth, string majorActor)
        : Movie(0, director, title, releaseYear),
            releaseMonth(releaseMonth),
            majorActor(majorActor){}

	int getReleaseMonth() const;
	string getMajorActor() const;
	void setReleaseMonth(int month);
	void setMajorActor(string actor);
private:
	int releaseMonth;
	string majorActor;
};
