#ifndef TREEITERATOR_CPP
#define TREEITERATOR_CPP

#include "treeiterator.h"

using namespace mystl;

template <typename T, typename O>
TreeIterator<T,O>::TreeIterator(TreeNode<T,O> node) {
    this->m_node = node;
}

template <typename T, typename O>
T& TreeIterator<T,O>::operator*() {
    return this->m_node->m_value;
}

template <typename T, typename O>
T* TreeIterator<T,O>::operator->() {
    return &this->m_node->m_value;
}

template <typename T, typename O>
TreeIterator<T,O>& TreeIterator<T,O>::operator++() {
    //return this++;
}

template <typename T, typename O>
TreeIterator<T,O>& TreeIterator<T,O>::operator--() {
    //return this--;
}

template <typename T, typename O>
bool TreeIterator<T,O>::operator==(const TreeIterator<T,O> &rhs) {
    //return this->m_node->m_value == rhs.m_node->m_value;
}

template <typename T, typename O>
bool TreeIterator<T,O>::operator!=(const TreeIterator<T,O> &rhs) {
    //return !(this==rhs);
}

#endif
