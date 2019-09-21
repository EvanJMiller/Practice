//
//  main.cpp
//  Practice
//
//  Created by Evan Miller on 9/15/19.
//  Copyright © 2019 Evan Miller. All rights reserved.
//

#include <iostream>
#include "Lists/LinkedList.cpp"
#include "Common/IntWrapper.cpp"

int main(int argc, const char * argv[]) {
    LinkedList<IntWrapper>* myList = new LinkedList<IntWrapper>();
    IntWrapper* wrapper;
    
    for(int i = 0; i < 10; i++){
        wrapper = new IntWrapper(i);
        myList -> append(wrapper);
        std::cout << myList -> getLength()  <<"\n";
    }
    std::cout << myList -> getLength() <<"\n";
    
    
    for(int i = 0; i < 5; i++){
        wrapper = myList -> pop();
        std::cout << wrapper -> integer <<"\n";
    }
    
    std::cout << myList -> getLength() <<"\n";
    
    return 0;
}
