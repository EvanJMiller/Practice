//
//  TreeNode.cpp
//  UnivaluePath
//
//  Created by Evan Miller on 9/16/19.
//  Copyright © 2019 Evan Miller. All rights reserved.
//

#include "TreeNode.hpp"


class TreeNode {
 
public:
    TreeNode* left;
    TreeNode* right;
    int value;
    
    TreeNode(){
    }
    TreeNode(int v){
        value = v;
    }
};

