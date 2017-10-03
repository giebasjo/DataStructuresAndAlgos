#include <iostream>
using namespace std;

#include "BST.cpp"

int main() {

    BST<int> *bst = new BST<int>();
    bst->add(11);
    bst->add(1);
    bst->add(6);
    bst->add(-1);
    bst->add(-10);
    bst->add(100);
    bst->print();


    return 0;
}