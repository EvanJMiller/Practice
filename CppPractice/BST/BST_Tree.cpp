//
// Created by Evan Miller on 10/31/19.
//
#include <iostream>
#include "BST_Node.cpp"

using namespace std;

class BST_Tree{
public:
    BST_Node* root;

    BST_Tree(){
        root = nullptr;
    }

    void add(BST_Node* node, int value) {
        if(node == nullptr){
            root = new BST_Node(value);
        }
        else if(node->right == nullptr && value >= node->value){
            node->right = new BST_Node(value);
        }
        else if(node->left == nullptr && value <= node->value){
            node->left = new BST_Node(value);
        }
        else if(node->right != nullptr && value >= node->value){
            add(node->right, value);
        }
        else if(node->left != nullptr && value <= node->value){
            add(node->left, value);
        }
    }

    void printTreeInOrder(BST_Node* node){
        if(node == nullptr){
            return;
        }
        printTreeInOrder(node->left);
        cout << node->value << " ";
        printTreeInOrder(node->right);

    }

    void printTreePostOrder(BST_Node* node){
        if(node == nullptr){
            return;
        }
        printTreePostOrder(node->left);
        printTreePostOrder(node->right);
        cout << node->value << " ";

    }

};
