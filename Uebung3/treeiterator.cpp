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
    if(m_node->m_right == 0){
        return *new TreeIterator<T,O>(0);
    }
    if(m_node->m_right != 0){
        return m_node->m_right->getIterator();
    }else if(m_node->m_up->m_value > m_node->m_value){
        return m_node->m_up->getIterator();
    }
    return (new TreeNode<T,O>(0))->getIterator();
}

template <typename T, typename O>
TreeIterator<T,O>& TreeIterator<T,O>::operator--() {
    return m_node->m_up;
}

template <typename T, typename O>
bool TreeIterator<T,O>::operator==(const TreeIterator<T,O>& rhs) {
    return &(this->m_node) == &(rhs.m_node);
}

template <typename T, typename O>
bool TreeIterator<T,O>::operator!=(const TreeIterator<T,O>& rhs) {
    return !(*this == rhs);
}

#endif
