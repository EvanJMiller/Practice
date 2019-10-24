//
//  main.cpp
//  CppPracitce
//
//  Created by Evan Miller on 10/23/19.
//  Copyright © 2019 Evan Miller. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

// Description: Merge two sorted linked lists and return the header
// Assumption: inputs are header nodes for two sorted linked list nodes
// Approach: Without allocating more memory, reassign pointers to create
// a new sort linked list
//
// Before
// List 1: A -> B -> F -> H -> J
// List 2: C -> D -> E -> K

// After
// A -> B      F -> H -> J
//      |       \         \
//      C -> D -> E        K

class Node {
public:
    Node* next;
    Node* prev;
    int value;
    
    Node(int value){
        this->value = value;
    }
};

class LinkedList {
public:
    Node* head;
    Node* tail;
    
    LinkedList(){
        head = nullptr;
        tail = nullptr;
    }
    
    void append(int value){
        Node* curr_node;
        
        if(head == nullptr){
            head = new Node(value);
            tail = head;
            
        }
        else if(head == tail){
            curr_node = new Node(value);
            head -> next = curr_node;
            tail = curr_node;
        }
        else{
            curr_node = new Node(value);
            tail -> next = curr_node;
            tail = curr_node;
        }
    }
    
    void print(){
        Node* curr = head;
        while(curr != nullptr){
            std::cout << curr->value << " ";
            curr = curr->next;
        }
        std::cout << "\n";
    }
};

Node* mergeLists(Node* head1, Node* head2){
    
    Node* curr; // curr node
    Node* other; // head of the other list
    Node* head; // head of the newly merged list
    Node* temp; // temp used for switching curr to other list
    
    // check for null ptrs
    if(head1 == nullptr && head2 == nullptr){
        return nullptr;
    }
    
    // Determine the head of the newly merged list
    if(head1->value > head2->value){
        curr = head2;
        other = head1;
        head = head1;
        
    }
    else {
        curr = head1;
        other = head2;
        head = head2;
        
    }
    // Reroute pointers for each node so everything is in order
    while(curr != nullptr){
        // If the end of each list is reached
        if(curr->next == nullptr && other == nullptr){
            curr = nullptr;
        }
        // If the current list ends, switch to the other list
        else if(curr->next == nullptr && other != nullptr){
            curr->next = other;
            curr = curr->next;
            other = nullptr;
        }
        //If the other list ended, just use the current one
        else if(curr->next != nullptr && other == nullptr){
            curr = curr->next;
        }
        // If the next value is less than the other lists value, stay on this list
        else if(curr->next->value < other->value){
                curr = curr->next;
        }
        // Else, point the current node to the other list and swap
        else {
                temp = other;
                other = curr->next;
                curr->next = temp;
                curr = curr->next;
        }
    }
    return head;
}

int main(int argc, const char * argv[]) {
    
    LinkedList* myList = new LinkedList();
    LinkedList* myOtherList = new LinkedList();
    
    int arr [5] = { 2, 4, 6, 8, 12 };
    int arr2 [5] = { 3, 4, 9, 11, 14 };
    
    for(int i = 0; i < 5; i++){
        myList->append(arr[i]);
    }
    for(int i = 0; i < 5; i++){
        myOtherList->append(arr2[i]);
    }
    
    
    myList->print();
    myOtherList->print();
    
    myList->head = mergeLists(myList->head, myOtherList->head);
    
    //myList->print();
    
    return 0;
}
