#ifndef TREEITERATOR_H
#define TREEITERATOR_H

#include "tree.h"
#include "treenode.h"

namespace mystl {
    template <typename T, typename O=Less<T> >
    class TreeIterator {
        public:
            TreeIterator();
            Tree<T,O>* m_tree;
            TreeNode<T,O>* m_node;

            TreeIterator(TreeNode<T,O> node);
            T& operator*();
            T* operator->();
            TreeIterator<T,O>& operator++();
            TreeIterator<T,O>& operator--();
            bool operator==(const TreeIterator<T,O> &rhs);
            bool operator!=(const TreeIterator<T,O> &rhs);
    };
}

#include "treeiterator.cpp"

#endif // TREEITERATOR_H
