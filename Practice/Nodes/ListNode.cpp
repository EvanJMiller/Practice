//
//  ListNode.cpp
//  Practice
//
//  Created by Evan Miller on 9/15/19.
//  Copyright © 2019 Evan Miller. All rights reserved.
//

#include "ListNode.hpp"
#include "../Common/Node.cpp"

template <typename T>
class ListNode: public Node<T> {
    ListNode<T>* next;
public:
    ListNode(){
        this -> value = nullptr;
    }
    ListNode(T* t){
        this -> value = t;
    }

    void setNext(ListNode<T>* node){
        next = node;
    }
    ListNode<T>* getNext(){
        return next;
    }
    
    void setValue(T* t){
        this -> value = t;
    }
    
    T* getValue(){
        return this -> value;
    }
    
};


