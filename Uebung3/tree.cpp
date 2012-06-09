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
    if(m_root->find(value) == 0){
        return (new TreeNode<T,O>(value))->getIterator();
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

    return 0;
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
