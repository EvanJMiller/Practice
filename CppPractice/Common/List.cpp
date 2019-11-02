//
//  List.cpp
//  Practice
//
//  Created by Evan Miller on 9/15/19.
//  Copyright © 2019 Evan Miller. All rights reserved.
//

#include "List.hpp"
template <typename T>
class List {
    int length;
    
    public:
        virtual int insert(T* t, int i) = 0;
        virtual int append(T* t) = 0;
        virtual int set(T* t, int i) = 0;
        virtual T* getItem(int i) = 0;
        virtual T* remove(int i) = 0;
        virtual int getLength() = 0;
};
