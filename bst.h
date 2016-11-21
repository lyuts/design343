// BST class declaration (binary search tree template)

template <class T>
class BST {
public:
	BST();
	~BST();
	bool insert(T);	
	bool find(T);
	bool remove(T);
	void display() const;
private:
	struct BSTNode {
		T data;
		BSTNode *left;
		BSTNode *right;
	};
	BSTNode *root;
};