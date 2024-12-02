// Binary Tree Code Piece
// - Aiden Sakat
// CS - 240

#include <iostream>
#include "BinaryTree.h"

int main()
{
    BinaryTree tree;
    // inserting nodes into the tree
    // root
    tree.insert(50);
    // left subtree
    tree.insert(20);
    tree.insert(30);
    tree.insert(10);
    // right subtree
    tree.insert(80);
    tree.insert(70);
    tree.insert(90);
    //           50
    //         /    \
    //       20       80
    //      /  \     /  \
    //    10   30  70    90

    int userInput = 0;
    std::cout << "Which traversal would you like to view?\n1:In-order Traversal\n2:Pre-order Traversal\n3:Post-order Traversal\n4:Level-order Traversal\n5:Search for value\n: ";
    while (true) {
        std::cin >> userInput;

        if (userInput == 1) {
            std::cout << "In-order Traversal: ";
            tree.traverseInOrder();
        }
        else if (userInput == 2) {
            std::cout << "Pre-order Traversal: ";
            tree.preTraversal();
        }
        else if (userInput == 3) {
            std::cout << "Post-order Traversal: ";
            tree.postTraversal();
        }
        else if (userInput == 4) {
            std::cout << "Level-order Traversal: ";
            tree.levelTraversal();
        }
        else if (userInput == 5) {
            int valueToSearch;
            std::cout << "Enter value to search: ";
            std::cin >> valueToSearch;
            if (tree.search(valueToSearch)) {
                std::cout << valueToSearch << " is found in the tree.\n";
            }
            else {
                std::cout << valueToSearch << " is not found in the tree.\n";
            }
        }
        else {
            break;
        }
    }


    return 0;
}
