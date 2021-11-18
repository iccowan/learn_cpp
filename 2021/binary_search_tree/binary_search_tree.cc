#include <iostream>
#include <list>
using namespace std;

/**
 * Node class for the binary search tree
 *
 * @class BSTNode
 * */
class BSTNode {
    public:
        /** integer value for the node */
        int val;

        /** left subtree pointer */
        BSTNode *left = NULL;

        /** right subtree pointer */
        BSTNode *right = NULL;

        BSTNode(int val) {
            this->val = val;
        }

        ~BSTNode() {
            // When destructing, delete the left and right pointers
            delete left;
            delete right;
        }

        /**
         * Inserts a given value to the tree
         *
         * @param val the value to insert
         */
        void insert(int val) {
            // If the value is less than the current, insert to left
            if (val < this->val)
                if (this->left == NULL)
                    this->left = new BSTNode(val);
                else
                    this->left->insert(val);
            // If the value is greater than or equal to the current,
            // insert to the right
            else
                if (this->right == NULL)
                    this->right = new BSTNode(val);
                else
                    this->right->insert(val);
        }

        /**
         * Create an ordered list of the node values
         *
         * @param &orderedList the list to add values to
         */
        void inOrder(std::list<int> &orderedList) {
            // We do a depth first search traversal
            if (this->left != NULL)
                this->left->inOrder(orderedList);

            orderedList.push_back(this->val);

            if (this->right != NULL)
                this->right->inOrder(orderedList);
        }
};

/**
 * Binary search tree class
 *
 * @class BST
 */
class BST {
    public:
        /** pointer to the root of the tree */
        BSTNode *root = NULL;

        ~BST() {
            // When destructing, delete the root
            delete root;
        }

        /**
         * Insert a value into the tree. If the root isn't
         * null, we delegate to the root to handle this
         *
         * @param val the value to insert
         */
        void insert(int val) {
            if (root == NULL)
                root = new BSTNode(val);
            else
                root->insert(val);
        }

        /**
         * Retrieve an in ordered list of the node values from the tree
         *
         * @return the ordered list of the node values
         */
        std::list<int> inOrder() {
            std::list<int> orderedList;
            root->inOrder(orderedList);

            return orderedList;
        }
};

int main() {
    // Create the tree
    BST tree = BST();

    // Insert some values to the tree
    tree.insert(100);
    tree.insert(93);
    tree.insert(42);
    tree.insert(68);
    tree.insert(43);
    tree.insert(21);
    tree.insert(0);
    tree.insert(101);

    // Get the ordered list from the tree
    std::list<int> orderedVals = tree.inOrder();

    // Print the values
    std::list<int>::iterator val;
    for (val = orderedVals.begin(); val != orderedVals.end(); ++val)
        std::cout << *val << endl;

    return 0;
}
