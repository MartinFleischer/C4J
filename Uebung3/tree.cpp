#ifndef TREE_CPP
#define TREE_CPP

#include "tree.h"

using namespace mystl;

template <typename T, typename O>
Tree<T,O>::Tree(TreeNode<T,O> *root)
    :m_root(root)
{

}

template <typename T, typename O>
TreeIterator<T,O> Tree<T,O>::insert(const T& value) {

}

template <typename T, typename O>
void Tree<T,O>::clear() {

}

template <typename T, typename O>
TreeIterator<T,O> Tree<T,O>::begin() {

}

template <typename T, typename O>
TreeIterator<T,O> Tree<T,O>::end() {

}

template <typename T, typename O>
TreeIterator<T,O> Tree<T,O>::first() {

}

template <typename T, typename O>
TreeIterator<T,O> Tree<T,O>::last() {

}

template <typename T, typename O>
TreeIterator<T,O> Tree<T,O>::find(const T& value){

}

#endif
