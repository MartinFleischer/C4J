#ifndef TREE_CPP
#define TREE_CPP

#include "tree.h"

using namespace mystl;

template <typename T, typename O>
Tree<T,O>::Tree(TreeNode<T,O> *root)
    :m_root(root){}

template <typename T, typename O>
TreeIterator<T,O> Tree<T,O>::insert(const T& value) {
    if(m_root == 0){
        m_root = new TreeNode<T,O>(value);
        return TreeIterator<T,O>(m_root);
    }

    O lessThan;
    if(lessThan(value, m_root->m_value)){
        Tree<T,O> *tree = new Tree<T,O>(m_root->m_left);
        return tree->insert(value);
    } else if(lessThan(m_root->m_value, value)){
        Tree<T,O> *tree = new Tree<T,O>(m_root->m_right);
        return tree->insert(value);
    } else {
        TreeNode<T,O> *tn = new TreeNode<T,O>(value, m_root);
        if(lessThan(value, m_root->m_value)){
            m_root->m_left = tn;
        } else {
            m_root->m_right = tn;
        }
        return TreeIterator<T,O>(m_root);
    }
}

template <typename T, typename O>
void Tree<T,O>::clear() {

}

template <typename T, typename O>
TreeIterator<T,O> Tree<T,O>::begin() {
    return TreeIterator<T,O>(m_root->findFirst());
}

template <typename T, typename O>
TreeIterator<T,O> Tree<T,O>::end() {
    return TreeIterator<T,O>(m_root->findLast());
}

template <typename T, typename O>
TreeIterator<T,O> Tree<T,O>::first() {

}

template <typename T, typename O>
TreeIterator<T,O> Tree<T,O>::last() {

}

template <typename T, typename O>
TreeIterator<T,O> Tree<T,O>::find(const T& value){
    m_root->find(value);
}

#endif
