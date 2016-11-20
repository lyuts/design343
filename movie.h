//
// Created by Olga Rocheeva on 11/17/16.
//

#ifndef MOVIE_RENTAL_MOVIE_H
#define MOVIE_RENTAL_MOVIE_H


#include <iostream>
#include <sstream>

using namespace std;

// Base class
class Movie {
public:
    virtual void sort()= 0;

    int getStock() {
        return stock;
    }

    std::string getDirector() {
        return director;
    }

    std::string getTitle() {
        return title;
    }

    int getYear() {
        return year;
    }

protected:
    int stock;
    int year;
    std::string director;
    std::string title;
};

// Derived classes
class Comedy : public Movie {
    //Comedy movies (‘F’) sorted by Title, then Year it released
    void sort() {

    }
};

class Drama : public Movie {
    // dramas (‘D’) are sorted by Director, then Title
    void sort() {

    }
};

class Classic : public Movie {
    // classics (‘C’) are sorted by Release date, then Major actor
    void sort() {

    }

private:
    int month;
    std::string majorActor;

    int getMonth() {
        return month;
    }

    std::string getMajorActor() {
        return majorActor;
    };
};

int main(void) {

}

#endif //MOVIE_RENTAL_MOVIE_H
