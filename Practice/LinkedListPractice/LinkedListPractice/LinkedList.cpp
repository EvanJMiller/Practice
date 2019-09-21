//
//  LinkedList.cpp
//  LinkedListPractice
//
//  Created by Evan Miller on 9/21/19.
//  Copyright © 2019 Evan Miller. All rights reserved.
//

#include "LinkedList.hpp"
#include "ListNode.cpp"
#include <iostream>

using namespace std;
class LinkedList{
public:
    ListNode* head;
    ListNode* tail;
    
    LinkedList(){
        head = NULL;
        tail = NULL;
    }
    
    void add(int value){
        ListNode* node = new ListNode(value);
        if(head == NULL){
            head = node;
            tail = node;
        }
        else {
            tail -> next = node;
            tail = node;
        }
    }
    void printList(){
        ListNode* curr = head;
        if(head != NULL && head == tail){
            cout << head->value;
        }
        cout << "\n";
        while(curr != NULL){
            cout << curr->value << " ";
            curr = curr->next;
        }
        
    }
    void rotateRight(int k){
        reverse();
        rotateLeft(k);
        reverse();
    }
    void rotateLeft(int k){
        tail->next = head;
        ListNode* curr = head;
        ListNode* prev = tail;
       
        for(int i = 0; i < k; i++){
            prev = curr;
            curr = curr->next;
            
        }
        tail = prev;
        head = curr;
        
        prev->next = NULL;
    }
    void reverse(){
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* next = head->next;
        tail = head;
        while(curr->next != NULL){
            
            curr->next = prev;
            prev = curr;
            curr = next;
            next = next->next;
        }
        head = curr;
        curr->next = prev;
        
    }
    
    ListNode* findMiddle(){
        ListNode* node = head;
        ListNode* middle = head;
        int count = 0;
        int count_mid = 0;
        
        while(node != NULL){
            node = node->next;
            count++;
            if(count % 2 == 0){
                count_mid++;
                middle = middle -> next;
            }
        }
        if(count % 2 != 0){
            count_mid++;
            middle = middle->next;
        }
        cout << "\nCount: " << count << " ";
        cout << "\nMid Count: " << count_mid << " ";
        cout << "\nMiddle: " << middle->value << " ";
        return middle;
    }
    
};
