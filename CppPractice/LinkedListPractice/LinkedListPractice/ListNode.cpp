//
//  ListNode.cpp
//  LinkedListPractice
//
//  Created by Evan Miller on 9/21/19.
//  Copyright © 2019 Evan Miller. All rights reserved.
//

#include "ListNode.hpp"
class ListNode {
public:
    int value;
    ListNode* next;
    
    ListNode(){
        value = NULL;
        next = NULL;
    }
    ListNode(int v){
        value = v;
        next = NULL;
    }
    
};
