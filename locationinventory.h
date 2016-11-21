// LocationInventory class declaration

#include "bst.h"
#include "comedy.h"
#include "drama.h"
#include "classic.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class LocationInventory
{
public:
	// Constructor, destructor
	LocationInventory();
	~LocationInventory();
	// Member functions
	bool inputMovieData();	// reads data from "*movies.txt"
	bool contains(Item) const;
	BST<Comedy>& getComedyInventory() const;	// returns ref to comedy BST inventory
	BST<Drama>& getDramaInventory() const;		// returns ref to drama BST inventory
	BST<Classic>& getClassicInventory() const;	// returns ref to classic BST inventory

private:
	BST<Comedy> comedies;	// binary search tree of comedy movies in stock
	BST<Drama> dramas;		// binary search tree of drama movies in stock
	BST<Classic> classics;	// binary search tree of classic movies in stock
};