class BinarySearchTree {
private:
    Node* root;  // Root of the tree

    // Recursive helper for insertion
    Node* insert(Node* node, int value) {
        if (node == nullptr) {
            return new Node(value); // Create a new node if null
        }
        if (value < node->value) {
            node->left = insert(node->left, value); // Insert into the left subtree
        }
        else {
            node->right = insert(node->right, value); // Insert into the right subtree
        }
        return node;
    }

public:
    // Constructor
    BinarySearchTree() : root(nullptr) {}

    // Insert a value into the tree
    void insert(int value) {
        root = insert(root, value);
    }
};
