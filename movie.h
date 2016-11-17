//
// Created by Olga Rocheeva on 11/17/16.
//

#ifndef MOVIE_RENTAL_MOVIE_H
#define MOVIE_RENTAL_MOVIE_H


#include <iostream>

using namespace std;

// Base class
class Movie {
public:
    // pure virtual function providing interface framework.
    virtual int sort()= 0;

    int getStock() {
       return stock;
    }

    std::string getDirector() {
        return director;
    }

protected:
    int stock;
    std::string director;
    std::string title;
};

// Derived classes
class Comedy: public Movie {

};

class Triangle: public Shape {

public:
    int getArea() {
        return (width * height)/2;
    }
};

int main(void) {
    Rectangle Rect;
    Triangle  Tri;

    Rect.setWidth(5);
    Rect.setHeight(7);
    // Print the area of the object.
    cout << "Total Rectangle area: " << Rect.getArea() << endl;

    Tri.setWidth(5);
    Tri.setHeight(7);

    // Print the area of the object.
    cout << "Total Triangle area: " << Tri.getArea() << endl;

    return 0;
}

#endif //MOVIE_RENTAL_MOVIE_H
