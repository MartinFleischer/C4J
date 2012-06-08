#ifndef TREEITERATOR_CPP
#define TREEITERATOR_CPP

#include "treeiterator.h"
#include "treenode.h"

using namespace mystl;

template <typename T, typename O>
TreeIterator<T,O>::TreeIterator(TreeNode<T,O>* node) {
    this->m_node = node;
}

template <typename T, typename O>
T* TreeIterator<T,O>::operator*() {
    return &this->m_node->m_value;
}

template <typename T, typename O>
T* TreeIterator<T,O>::operator->() {
    return &this->m_node->m_value;
}

template <typename T, typename O>
TreeIterator<T,O>& TreeIterator<T,O>::operator++() {
    if(m_node->m_right){
        return m_node->m_right->findFirst()->getIterator();
    } else if(m_node->m_up != 0 && m_node->m_up > m_node){
        return m_node->m_up->getIterator();
    }
    cerr << "unsupported operation\n";
    throw;
}

template <typename T, typename O>
TreeIterator<T,O>& TreeIterator<T,O>::operator--() {
    return m_node->m_up;
}

template <typename T, typename O>
bool TreeIterator<T,O>::operator==(const TreeIterator<T,O> &rhs) {
    return this->m_node->m_value == rhs.m_node->m_value && this->m_tree == this->m_tree;
}

template <typename T, typename O>
bool TreeIterator<T,O>::operator!=(const TreeIterator<T,O> &rhs) {
    return !(this->m_node->m_value == rhs.m_node->m_value && this->m_tree == this->m_tree);
}

#endif
