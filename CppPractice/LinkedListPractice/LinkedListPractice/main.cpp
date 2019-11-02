//
//  main.cpp
//  LinkedListPractice
//
//  Created by Evan Miller on 9/21/19.
//  Copyright © 2019 Evan Miller. All rights reserved.
//

#include <iostream>
#include "LinkedList.cpp"
#include <vector>
int main(int argc, const char * argv[]) {
    // insert code here...
    vector<int> mylist = {1, 2, 3, 4, 5,6, 7};
    LinkedList* linkedList = new LinkedList();
    for(int i = 0; i < mylist.size(); i++){
        linkedList->add(mylist[i]);
    }
    linkedList->printList();
    //ListNode* midde = linkedList->findMiddle();
    linkedList->reverse();
    linkedList->printList();
    
    linkedList->rotateRight(3);
    linkedList->printList();
    linkedList->rotateLeft(2);
    linkedList->printList();
    linkedList->rotateLeft(1);
    linkedList->printList();
    
    return 0;
}
