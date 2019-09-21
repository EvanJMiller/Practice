//
//  BinaryTree.cpp
//  UnivaluePath
//
//  Created by Evan Miller on 9/16/19.
//  Copyright © 2019 Evan Miller. All rights reserved.
//

#include "BinaryTree.hpp"
#include <iostream>
#include <vector>
#include "TreeNode.cpp"

using namespace std;

class BinaryTree {
    
    TreeNode* root = new TreeNode();
public:
    
    BinaryTree(){
        
    }
    
    BinaryTree(vector<int> v){

        for (std::vector<int>::iterator it = v.begin() ; it != v.end(); ++it){
            
            if(root -> value == NULL){
                root -> value = *it;
            }
            add(root, *it);
            
        }
    }
    
    void add(TreeNode* root, int value){
        if(root -> value <= value && root -> left != NULL){
            add(root -> left, value);
        }
        else if(root -> value <= value && root -> left == NULL){
            TreeNode* newNode = new TreeNode(value);
            root -> left = newNode;
        }
        else if(root -> value >= value && root -> right != NULL){
            add(root -> right, value);
        }
        else if(root -> value >= value && root -> right == NULL){
            TreeNode* newNode = new TreeNode(value);
            root -> right = newNode;
        }
    }
    TreeNode* remove(TreeNode* root, int value){
        //Match found
        if(root -> value == value){
            if(root -> left != NULL && root -> right != NULL){
                return root -> left;
            }
            else if(root -> left != NULL){
                return root -> left;
            }
            else if(root -> right != NULL){
                return root -> right;
            }
        }
        // Keep looking
        else if(root -> value < value && root -> left != NULL){
            root -> left = remove(root->left, value);
        }
        else if(root -> value > value && root -> right != NULL){
            root -> right = remove(root -> right, value);
        }
        return NULL; // do nothing on return
    }
    
};
