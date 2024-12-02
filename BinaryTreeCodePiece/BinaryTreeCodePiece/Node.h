struct Node {
    int value;               // Data stored in the node
    Node* left;          // Pointer to the left child
    Node* right;         // Pointer to the right child

    // Constructor
    Node(int val) : value(val), left(nullptr), right(nullptr) {}
};
