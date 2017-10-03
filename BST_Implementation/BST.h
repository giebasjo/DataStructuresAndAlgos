//
// Created by Jordan Giebas on 10/3/17.
//

#include <iostream>
using std::cout;
using std::endl;

#ifndef BST_IMPLEMENTATION_BST_H
#define BST_IMPLEMENTATION_BST_H

template<class T>
struct Node {


    T data;
    Node *left;
    Node *right;

    Node( T val ) {

        this->data = val;

    }

    Node( T val, Node<T>* left, Node<T>* right ) {

        this->data = data;
        this->left = left;
        this->right = right;

    }

};

template<class T>
class BST {

    protected:

        Node<T>* root;

        void addHelper( Node<T> *root, T val );
        void printHelper( Node<T> *root );
        int nodesCountHelper( Node<T> *root );
        int heightHelper( Node<T> *root );
        void printMaxPathHelper( Node<T> *root );
        bool deleteValueHelper( Node<T> *parent, Node<T> *current, T value );


    public:

        void add( T val );
        void print();
        int nodesCount();
        int height();
        void printMaxPath();
        bool deleteValue( T val );


};













#endif //BST_IMPLEMENTATION_BST_H
