// Classic class declaration

#include "movie.h"

class Classic : public Movie
{
public:
	Classic();
	int getReleaseMonth() const;
	string getMajorActor() const;
	void setReleaseMonth(int month);
	void setMajorActor(string actor);
	bool operator == (Classic& rhs) const;
	bool operator > (Classic& rhs) const;

private:
	int releaseMonth;
	string majorActor;
};