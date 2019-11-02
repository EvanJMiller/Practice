#include <iostream>
#include <vector>

#include "BST_Tree.cpp"

using namespace std;

int main() {

    BST_Tree* myTree = new BST_Tree();
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    vector<int> v;

    for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++){
        v.push_back(arr[i]);
    }

    random_shuffle(v.begin(), v.end());
    for(vector<int>::iterator it = v.begin(); it != v.end(); ++it) {
        cout << *it << " ";
        myTree->add(myTree->root, *it);
    }
    cout << "\n";

    myTree->printTreeInOrder(myTree->root);


    return 0;
}