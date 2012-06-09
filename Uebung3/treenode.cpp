#ifndef TREENODE_CPP
#define TREENODE_CPP

#include "treenode.h"
#include <iostream>
#include <string>

using namespace mystl;

template <typename T, typename O>
TreeNode<T,O>::TreeNode(const T &value, TreeNode<T,O> *up)
    :m_up(up), m_value(value)
{

}

template <typename T, typename O>
TreeNode<T,O>* TreeNode<T,O>::findFirst() {
    if(this == 0) {
        return 0;
    } else {
        return m_left->findFirst();
    }
}

template <typename T, typename O>
TreeNode<T,O>* TreeNode<T,O>::findLast() {
    if(this == 0) {
        return 0;
    } else {
        return m_right->findLast();
    }
}

template <typename T, typename O>
TreeNode<T,O>* TreeNode<T,O>::find(const T& value) {
    O Order;

    if(Order(m_value,value)) {
        if(m_left == 0){
            return m_left;
        }else{
            return m_left->find(value);
        }
    } else if(Order(value,m_value)) {
        if(m_right == 0){
            return m_right;
        }else{
            return m_right->find(value);
        }
    } else {
        return this;
    }
}

template <typename T, typename O>
TreeIterator<T,O>& TreeNode<T,O>::getIterator(){
    return *new TreeIterator<T,O>(this);
}

#endif
