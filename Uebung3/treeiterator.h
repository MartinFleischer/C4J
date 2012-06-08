#ifndef TREEITERATOR_H
#define TREEITERATOR_H

#include "less.h"

namespace mystl {

    // Vorab-Deklaration
    template<typename T, typename O>
    class TreeNode;

    // Vorab-Deklaration
    template<typename T, typename O>
    class Tree;

    template <typename T, typename O=Less<T> >
    class TreeIterator {
        public:
            TreeIterator();

            Tree<T,O>* m_tree;
            TreeNode<T,O>* m_node;

            TreeIterator(TreeNode<T,O>* node);
            T* operator*();
            T* operator->();
            TreeIterator<T,O>& operator++();
            TreeIterator<T,O>& operator--();
            bool operator==(const TreeIterator<T,O> &rhs);
            bool operator!=(const TreeIterator<T,O> &rhs);
    };
}

#endif // TREEITERATOR_H
