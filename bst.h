// BST class declaration (binary search tree template)

template <class T>
class BST
{
public:
	// Default constructor, destructor
	BST();
	~BST();
	// Member functions
	bool insert(T);	
	bool find(T);
	bool remove(T);
	void display() const;

private:
	struct Node
	{
		T data;
		Node *left;
		Node *right;
	};
	Node *root;
};