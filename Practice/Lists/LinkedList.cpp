//
//  LinkedList.cpp
//  Practice
//
//  Created by Evan Miller on 9/15/19.
//  Copyright © 2019 Evan Miller. All rights reserved.
//

#include "../Nodes/ListNode.cpp"
#include "../Common/List.cpp"
#include "LinkedList.hpp"


template <typename T>
class LinkedList: public List<T> {
    
    ListNode<T>* head;
    ListNode<T>* tail;
    int length;
    
public:
    LinkedList () {
        head = new ListNode<T>();
        tail = head;
        length = 0;
        
    }
    LinkedList (int i) {
        head = new ListNode<T>();
        tail = head;
        head -> setValue(i);
        length = 1;
        
    }
    int getLength(){ return length; };

    int insert(T* t, int i){
        ListNode<T>* curr = head;
        ListNode<T>* prev = NULL;
        if(i < 0) { return -1; }
        
        for(int j = 0; j < i; j++){
            if(curr -> getNext() == NULL){
                return -1;
            }
            curr = curr -> getNext();
            prev = curr;
        }
        ListNode<T>* newNode = new ListNode<T>();
        newNode -> setValue(t);
        
        if(curr == tail){
            curr -> setNext(newNode);
            tail = newNode;
        }
        else{
            prev -> setNext(newNode);
            newNode -> setNext(curr);
        }
        
        
        return 1;
    }
    
    int set(T* t, int i){
        ListNode<T>* curr = head;
        ListNode<T>* prev = NULL;
        if(i < 0) { return -1; }
        
        for(int j = 0; j < i; j++){
            if(curr -> getNext() == NULL){
                return -1;
            }
            curr = curr -> getNext();
            prev = curr;
        }
        curr -> setValue(t);
        
        return 1;
    }
    T* remove(int i){
        ListNode<T>* curr = head;
        ListNode<T>* prev = nullptr;
        if(i < 0) { return nullptr; }
        if(head == tail){ return nullptr; }
        
        if(i == 0 && head != tail){
            head = head -> getNext();
            return head ->getValue();
        }
        
        for(int j = 0; j < i; j++){
            if(curr -> getNext() == NULL){
                return nullptr;
            }
            curr = curr -> getNext();
            prev = curr;
        }
        
        if(curr == tail){
            tail = prev;
        }
        else{
            prev -> setNext(curr -> getNext());
        }
        length--;
        
        return curr->getValue();
    }
    int append(T* t){
        ListNode<T>* newNode = new ListNode<T>(t);
        if(length == 0){
            head -> setValue(t);
        }
        else{
            tail -> setNext(newNode);
            tail = newNode;
        }

        length++;
        return 1;
    }
    
    T* pop(){
        return remove(length - 1);
    }
    
    T* getItem(int i){
        ListNode<T>* curr = head;
        
        if(i < 0){ return NULL; }
        
        for(int j = 0;j < i; j++){
            if(curr -> getNext() == NULL){
                return nullptr;
            }
            curr = curr -> getNext();
        }
        return curr -> getValue();
        
    }
    
};
