#include <iostream>
#include <vector>

using namespace std;

class splay_tree
{
public:
    //Return number of nodes in the Splay Tree
    virtual int get_num_nodes() = 0;

    //Splay the node to the root of the tree. 
    //If node is present in tree, splay the node and return 1.
    //If the node is not present in the tree, return 0 and
    //splay the last seen node (before you fell off) to the root.
    virtual int find(int) = 0;

    //Insert a node into the splay tree.
    //If the node is already present, do not insert anything else 
    //and splay the node.
    //If the node isn't present, insert it like a normal BST 
    //and splay the inserted node.
    virtual void insert(int) = 0;

    //Delete an element from the splay tree.
    //If the node is present, delete it like how it is done in a BST. 
    //https://en.wikipedia.org/wiki/Binary_search_tree#Deletion
    //Case 1. If there are no children, it can be removed directly.
    //Case 2. If it has only one child, that child takes the nodes place.
    //i.e. if 4 has to be deleted and 4 has 5 as a parent and 6 as a child,
    //6's parent becomes 5(5's child becomes 6) and 4 is removed. 
    //The children of 6 are still it's children.  
    //Case 3. If there are 2 children, the inorder successor takes the nodes place. 
    //In all cases of successful deletion, 
    //the parent of the node to be deleted is splayed.
    //If the node to be deleted is the root, 
    //i.e. no parent, then no splay has to be done.
    //If the node to be deleted is not found,
    //the last seen node is splayed(to be consistent with find). 
    virtual void remove(int) = 0;

    //Return a vector of the post order traversal of tree elements
    virtual vector<int> post_order() = 0;

    //Return a vector of the pre order traversal of tree elements
    virtual vector<int> pre_order() = 0;
};

