// BinaryTree.h

#include <iostream>
#include <queue>
#include <vector>

struct TreeNode {
    int value;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val) : value(val), left(nullptr), right(nullptr) {}
};

class BinaryTree {

private:
    TreeNode* root;
    TreeNode* insert(TreeNode* node, int value) {
        if (node == nullptr) {
            return new TreeNode(value);
        }
        if (value < node->value) {
            node->left = insert(node->left, value);
        }
        else {
            node->right = insert(node->right, value);
        }
        return node;
    }

    // Search for a value in the binary search tree
    bool search(TreeNode* node, int value) {
        if (node == nullptr) {
            return false; // Value not found
        }
        if (node->value == value) {
            return true; // Value found
        }
        if (value < node->value) {
            return search(node->left, value); // Search left subtree
        }
        return search(node->right, value); // Search right subtree
    }

    // traverses from left to right
    void inOrderTraversal(TreeNode* node) {
        if (node == nullptr) return;

        inOrderTraversal(node->left);
        std::cout << node->value << " ";
        inOrderTraversal(node->right);
    }

    // traverses each node as it moves
    void preOrderTraversal(TreeNode* node) {
        if (node == nullptr) return;

        std::cout << node->value << " ";
        preOrderTraversal(node->left);
        preOrderTraversal(node->right);
    }

    // traverses subtree left, then subtree right, Saving the root for last
    void postOrderTraversal(TreeNode* node) {
        if (node == nullptr) return;

        postOrderTraversal(node->left);
        postOrderTraversal(node->right);
        std::cout << node->value << " ";
    }

    // traverses the tree from top to bottom
    void levelOrderTraversal(TreeNode* node) {
        if (root == nullptr)
            return;

        // Create an empty queue for level order traversal
        std::queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {
            // Print front of queue and remove it from queue
            TreeNode* node = q.front();
            std::cout << node->value << " ";
            q.pop();

            // Add left child to queue
            if (node->left != nullptr) {
                q.push(node->left);
            }

            // Add right child to queue
            if (node->right != nullptr) {
                q.push(node->right);
            }
        }   
    }

public:
    BinaryTree() : root(nullptr) {}

    void insert(int value) {
        root = insert(root, value);
    }

    bool search(int value) {
        return search(root, value);
    }

    // In Order Traverse Func
    void traverseInOrder() {
        inOrderTraversal(root);
        std::cout << std::endl;
    }

    // Pre Order Traverse Func
    void preTraversal() {
        preOrderTraversal(root);
        std::cout << std::endl;
    }

    // Post Order Traverse Func
    void postTraversal() {
        postOrderTraversal(root);
        std::cout << std::endl;
    }

    // Level Order Traverse Func
    void levelTraversal() {
        levelOrderTraversal(root);
        std::cout << std::endl;
    }
};
