//
//  DoubleLinkedList.cpp
//  BSTtoDDL
//
//  Created by Evan Miller on 9/20/19.
//  Copyright © 2019 Evan Miller. All rights reserved.
//

#include "DoubleLinkedList.hpp"
#include "DLLNode.cpp"
#include <iostream>

using namespace std;
class DLL{
public:
    DLLNode* head;
    DLLNode* tail;
    
    DLL(){
        head = NULL;
        tail = NULL;
    }
    void add(int value){
        if(head == NULL && tail == NULL){
            head = new DLLNode(value);
            tail = head;
        }
        else{
            DLLNode* newNode = new DLLNode(value);
            tail->next = newNode;
            tail = newNode;
            newNode->next = head;
        }
    }
    void printDLL(){
        DLLNode* curr = head;
        while(curr!= tail){
            cout << curr->value << "\t";
            curr = curr->next;
        }
        cout << curr->value << "\n";
        
        
    }
    
};
