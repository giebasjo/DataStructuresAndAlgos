//
// Created by Jordan Giebas on 10/3/17.
//

#include <iostream>
using std::cout;
using std::endl;

#include <math.h>
using std::max;

#include "BST.h"

template<class T>
void BST<T>::addHelper(Node<T> *root, T val) {

    if ( root->data > val ) {

        if ( !root->left ) {

            root->left = new Node<T>(val);

        }
        else {

            addHelper( root->left, val );

        }

    }
    else {

        if ( !root->right ) {

            root->right = new Node<T>(val);

        }
        else {

            addHelper( root->right, val );

        }


    }

}


template<class T>
void BST<T>::printHelper(Node<T> *root) {

    if ( !root ) return;
    printHelper( root->left );
    cout << root->data << ' ';
    printHelper( root->right );

}

template<class T>
int BST<T>::nodesCountHelper( Node<T> *root ) {

    if ( !root ) return 0;
    else return 1 + nodesCountHelper( root->left ) + nodesCountHelper( root->right );

}

template<class T>
int BST<T>::heightHelper( Node<T> *root ) {

    if ( !root ) return 0;
    else return 1 + max(heightHelper( root->left ), heightHelper( root->right ));

}


template<class T>
void BST<T>::printMaxPathHelper( Node<T> *root ) {

    if ( !root ) return;
    cout << root->data << ' ';

    if ( heightHelper( root->left ) > heightHelper( root->right ) ) {

        printMaxPathHelper( root->left );

    }
    else {

        printMaxPathHelper( root->right );

    }

}


template<class T>
bool BST<T>::deleteValueHelper( Node<T> *parent, Node<T> *current, T value ) {

    if ( !current ) return false;
    if ( current->data == value ) {

        if ( current->right == nullptr || current->left == nullptr  ) {

            Node<T> *temp = current->left;
            if ( current->right ) temp = current->right;
            if ( parent ) {

                if ( parent->left == current ) {

                    parent->left = temp;

                }
                else {

                    parent->right = temp;

                }

            }
            else {

                this->root = temp;

            }

        }
        else {

            Node<T> *sub = current->right;
            while ( sub->left ) {

                sub = sub->left;

            }
            T temp = current->data;
            current->data = sub->data;
            sub->data = temp;

            return deleteValueHelper( current, current->right, temp );

        }

        delete current;
        return true;

    }

    return deleteValueHelper( current, current->left, value ) || deleteValueHelper( current, current->right, value );

}

template<class T>
void BST<T>::add( T val ) {

    if ( root ) {

        this->addHelper( root, val );

    }
    else {

        root = new Node<T>( val );

    }

}

template<class T>
void BST<T>::print() {

    printHelper( this->root );

}

template<class T>
int BST<T>::nodesCount() {

    return nodesCountHelper( this->root );

}

template<class T>
int BST<T>::height() {

    return heightHelper( this->root );

}

template<class T>
void BST<T>::printMaxPath() {

    printMaxPathHelper( this->root );

}

template<class T>
bool BST<T>::deleteValue( T val ) {

    return this->deleteValueHelper( nullptr, this->root, val );

}




