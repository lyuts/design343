// Account class definition

class Account
{
public:
	Account();
	Account(int id, string first, string last);
	int getID() const;
	string getFirstName() const;
	string getLastName() const;
	void setID();
	void setFirstName();
	void setLastName();
	void display() const;

private:
	string firstName, lastName;
	int accountID;
};