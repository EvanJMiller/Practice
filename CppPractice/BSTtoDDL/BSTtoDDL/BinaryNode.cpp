//
//  BinaryNode.cpp
//  BSTtoDDL
//
//  Created by Evan Miller on 9/20/19.
//  Copyright © 2019 Evan Miller. All rights reserved.
//

#include "BinaryNode.hpp"
class BinaryNode{
public:
    BinaryNode* left;
    BinaryNode* right;
    int value;
    
    BinaryNode(){}
    BinaryNode(int i){
        value = i;
        left = NULL;
        right = NULL;
    }
};
