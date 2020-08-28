#include <iostream>
#include <vector>
#include "BinaryTree.cpp"

void binaryTreeTest();

int main( void )
{
    binaryTreeTest();
}

void binaryTreeTest()
{
    std::cout << "Creating Binary Tree\n";
    BinaryTree bTree = BinaryTree();

    std::cout << "Pushing Values to Binary Tree\n";

    bTree.push(1);
    bTree.push(2);
    bTree.push(3);
    bTree.push(4);
    bTree.push(5);
    bTree.push(6);


    std::cout << "\nPrinting Breadth First\n";
    bTree.printBreadthFirst();

    std::cout << "\nPrinting Depth First\n";
    bTree.printDepthFirst();

    std::cout << "\nThe Size Of The Tree is: " << bTree.getSize() << "\n";

    std::cout << "\nRemoving One Element\n";
    bTree.remove(3);

    std::cout << "\nThe Size Of The Tree is: " << bTree.getSize() << "\n";

    std::cout << "\nPrinting Breadth First\n";
    bTree.printBreadthFirst();

}
