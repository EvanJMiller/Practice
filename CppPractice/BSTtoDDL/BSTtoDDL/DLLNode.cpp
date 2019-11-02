//
//  DLLNode.cpp
//  BSTtoDDL
//
//  Created by Evan Miller on 9/20/19.
//  Copyright © 2019 Evan Miller. All rights reserved.
//

#include "DLLNode.hpp"
class DLLNode{
public:
    DLLNode* prev;
    DLLNode* next;
    int value;
    
    DLLNode(){}
    DLLNode(int i){
        value = i;
        prev = NULL;
        next = NULL;
    }
};
