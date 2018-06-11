#include <iostream>
#include "BinarySearchTree.h"


int main() {
    std::cout << "\nBinarySearchTree\n";

    BinarySearchTree tree;
    tree.add("5");
    tree.add("1");
    tree.add("6");
    tree.add("3");
    tree.add("4");
    tree.add("5");
    tree.add("2");
    tree.add("6");
    tree.add("7");
    tree.add("8");
    tree.add("9");

    std::cout << "\n" << tree << "\n";

//  std::cin.get();
    return 0;
}
