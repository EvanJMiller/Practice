//
//  main.cpp
//  BSTtoDDL
//
//  Created by Evan Miller on 9/20/19.
//  Copyright © 2019 Evan Miller. All rights reserved.
//

#include <iostream>
#include "BinarySearchTree.cpp"
#include "DoubleLinkedList.hpp"
int main(int argc, const char * argv[]) {
    // insert code here...
    vector<int> list = {1, 2, 3, 4,5};
    
    BST* bst = new BST(0);
    bst->createTreeFromVector(list);
    bst->printTree(bst->root);
    DLL* doubleLinkedList = bst->convertToDLL();
    cout << "\n";
    doubleLinkedList->printDLL();
    
    return 0;
}
