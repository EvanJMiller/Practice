//
//  BiNode.cpp
//  Practice
//
//  Created by Evan Miller on 9/15/19.
//  Copyright © 2019 Evan Miller. All rights reserved.
//

#include "BiNode.hpp"
#include "../Common/Node.cpp"


template <typename T>
class BiNode: public Node<T> {
    
    Node<T>* first;
    Node<T>* second;
    
public:
    BiNode(){
        this -> value = nullptr;
    }
    BiNode(T* t){
        this -> value = t;
    }
    
    void setFirst(Node<T>* node){
        this -> first = node;
    }
    void setSecond(Node<T>* node){
        this -> second = node;
    }
    Node<T>* getFirst(){
        return first;
    }
    Node<T>* getSecond(){
        return second;
    }
    
    void setValue(int v){
        this -> value = v;
    }
    
    
};
