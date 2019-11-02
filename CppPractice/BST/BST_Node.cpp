//
// Created by Evan Miller on 10/31/19.
//

class BST_Node {
public:
    BST_Node* left;
    BST_Node* right;
    int value;

    BST_Node(int value){
        left = nullptr;
        right = nullptr;
        this->value = value;

    }
};