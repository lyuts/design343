// HashTable class definition
#include <iostream>
#include <fstream>
#include "account.h"
using namespace std;

template <class T>
class HashTable {
public:
	// Constructor, destructor
	HashTable();
	~HashTable();
	// Member functions
	bool add(T account);		// adds account to list
	bool remove(T account);	// removes account from list
	bool contains(int id);	// returns if ID exists in table
	void display() const;	// displays list of items
private:
	T* table;	// table stores T objects
	int size;	// number of accounts
};