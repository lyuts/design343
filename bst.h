// BST class declaration (binary search tree template)

template <class T>
class BST {
public:
	BST();
	~BST();
	bool insert(T item);	// adds item to tree
	bool find(T item);		// finds item in tree
	bool remove(T item);	// removes item from tree
	void display() const;	// displays contents of tree

private:
	struct BSTNode {		// node structure
		T data;				// item data
		BSTNode *left;		// left child pointer
		BSTNode *right;		// right child pointer
	};
	BSTNode *root;			// pointer to root of tree
};