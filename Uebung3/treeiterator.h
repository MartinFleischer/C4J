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

        private:
            TreeIterator<T,O>& nextRightNode();

        public:
            TreeIterator(TreeNode<T,O>* node, Tree<T,O>* tree);

            TreeNode<T,O>* m_node;
            Tree<T,O>* m_tree;

            T& operator*();
            T* operator->();
            TreeIterator<T,O>& operator++();
            TreeIterator<T,O>& operator--();
            bool operator==(const TreeIterator<T,O> &rhs);
            bool operator!=(const TreeIterator<T,O> &rhs);
    };
}

#endif // TREEITERATOR_H
