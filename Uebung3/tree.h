#ifndef TREE_H
#define TREE_H

#include "treenode.h"
#include "less.h"
#include "treeiterator.h"

namespace mystl {
    template <typename T, typename O=Less<T> >
    class Tree {
        public:
            Tree<T,O>(TreeNode<T,O> &root = TreeNode<T,O>());
            TreeNode<T,O>* m_root;

            //typedef TreeIterator<T,O> iterator;
            //typedef TreeNode<T,O> node;
            TreeIterator<T,O> insert(const T& value);
            void clear();
            TreeIterator<T,O> begin();
            TreeIterator<T,O> end();
            TreeIterator<T,O> first();
            TreeIterator<T,O> last();
            TreeIterator<T,O> find(const T& value);
    };
}

#include "tree.cpp"

#endif // TREE_H
