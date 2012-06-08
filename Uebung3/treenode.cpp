#ifndef TREENODE_CPP
#define TREENODE_CPP

#include "treenode.h"

using namespace mystl;

template <typename T, typename O>
TreeNode<T,O>::TreeNode(const T &value, TreeNode<T,O> *up)
    :m_up(up), m_value(value)
{

}

template <typename T, typename O>
TreeNode<T,O>* TreeNode<T,O>::findFirst() {
    if(m_value == 0) {
        return this;
    } else {
        return m_left->findFirst();
    }
}

template <typename T, typename O>
TreeNode<T,O>* TreeNode<T,O>::findLast() {
    if(m_value == 0) {
        return this;
    } else {
        return m_right->findLast();
    }
}

template <typename T, typename O>
TreeNode<T,O>* TreeNode<T,O>::find(T& value) {
    O Less;
    if(Less(m_value,value)) {
        return m_left->find(value);
    } else if(Less(value,m_value)) {
        return m_right->find(value);
    } else {
        return this;
    }
}

template <typename T, typename O>
TreeIterator<T,O>& TreeNode<T,O>::getIterator(){
    return *new TreeIterator<T,O>(this);
}

#endif
