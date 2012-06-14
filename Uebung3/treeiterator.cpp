#ifndef TREEITERATOR_CPP
#define TREEITERATOR_CPP

#include "treeiterator.h"
#include "treenode.h"

using namespace mystl;
int ope = 20;
template <typename T, typename O>
TreeIterator<T,O>::TreeIterator(TreeNode<T,O>* node, Tree<T,O>* tree = 0)
    :m_node(node),m_tree(tree) {}

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
    O Order;
    if( !m_node ){
        return *this;
    }else if(m_node->m_right){
        m_node =  m_node->m_right->findFirst();
        return *this;
    }else if(!m_node->m_right && m_node->m_up){
        TreeNode<T,O>* up = m_node->m_up;
        while(up){
            if(Order( m_node->m_value,up->value()) ){
                m_node = up;
                return *this;
            }
            up = up->m_up;
        }
    }
    m_node = 0;
    return *new TreeIterator<T,O>(0);
}

//    if( !m_node ){
//        return *this;
//    } else if(m_node->m_left){
//        m_node = m_node->m_left;
//        return *this;
//    } else if(m_node->m_right){
//        m_node = m_node->m_right;
//        return *this;
//    } else {
//        return this->nextRightNode();
//    }
//}

//template <typename T, typename O>
//TreeIterator<T,O>& TreeIterator<T,O>::nextRightNode() {
//    if(m_node->m_up) {
//        if(m_node->m_up->m_right && m_node->m_up->m_right->m_value != m_node->m_value){
//            m_node = m_node->m_up->m_right;
//            return *this;
//        } else {
//            m_node = m_node->m_up;
//            return nextRightNode();
//        }
//    } else {
//        m_node = 0;
//        return *new TreeIterator<T,O>(0);
//    }
//}

template <typename T, typename O>
TreeIterator<T,O>& TreeIterator<T,O>::operator--() {
    O Order;
    if( !m_node ){
        return *this;
    }else if(m_node->m_left){
        m_node =  m_node->m_left->findLast();
        return *this;
    }else if(!m_node->m_right && m_node->m_up){
        TreeNode<T,O>* up = m_node->m_up;
        while(up){
            if(Order( up->value(), m_node->m_value) ){
                m_node = up;
                return *this;
            }
            up = up->m_up;
        }
    }
    m_node = 0;
    return *new TreeIterator<T,O>(0);
}

template <typename T, typename O>
bool TreeIterator<T,O>::operator==(const TreeIterator<T,O>& rhs) {
    return this->m_node == rhs.m_node;
}

template <typename T, typename O>
bool TreeIterator<T,O>::operator!=(const TreeIterator<T,O>& rhs) {
    return !(*this == rhs);
}

#endif
