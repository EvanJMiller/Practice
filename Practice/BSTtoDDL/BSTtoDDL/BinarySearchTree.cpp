//
//  BinarySearchTree.cpp
//  BSTtoDDL
//
//  Created by Evan Miller on 9/20/19.
//  Copyright © 2019 Evan Miller. All rights reserved.
//

#include "BinarySearchTree.hpp"
#include "BinaryNode.cpp"
#include <iostream>
#include <vector>
#include "DoubleLinkedList.cpp"

using namespace std;
class BST{
    
public:
    BinaryNode* root;
    
    BST(int v){
        root = new BinaryNode(v);
    }
    
    void createTreeFromVector(vector<int> v){
        for(int i = 0; i < v.size(); i++){
            add(v[i], root);
        }
        
    }
    DLL* convertToDLL(){
        DLL* dll = new DLL();
        addToDLL(root, dll);
        return dll;
    }
    void addToDLL(BinaryNode* root, DLL* dll){
        if(root->left != NULL){
            addToDLL(root->left, dll);
        }
        dll->add(root->value);
        if(root->right != NULL){
            addToDLL(root->right, dll);
            
        }
            
        
    }
    void printTree(BinaryNode* root){
        if(root->left != NULL){
            printTree(root->left);
        }
        cout << root->value <<  "\t";
        if(root->right != NULL){
            printTree(root->right);
        }
        
    }
    void add(int value, BinaryNode* root){
        if(root->left != NULL && value <= root->value){
            add(value, root->left);
        }
        if(root->right != NULL && value >= root->value){
            add(value, root->right);
        }
        if(root->left == NULL && value <= root->value){
            BinaryNode* newNode = new BinaryNode(value);
            root->left = newNode;
        }
        if(root->right == NULL && value >= root->value){
            BinaryNode* newNode = new BinaryNode(value);
            root->right = newNode;
        }
    }
    
    
};
