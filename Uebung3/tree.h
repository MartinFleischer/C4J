#ifndef TREE_H
#define TREE_H

#include "tree.h"
#include "treenode.h"
#include "treeiterator.h"
#include "less.h"

namespace mystl {

    template <typename T, typename O=Less<T> >
    class Tree {
    public:

        typedef TreeIterator<T,O> iterator;
        typedef TreeNode<T,O> node;

        Tree(TreeNode<T,O>* root = 0);
        TreeNode<T,O>* m_root;

        iterator insert(const T& value);
        void clear();
        iterator begin();
        iterator end();
        iterator first();
        iterator last();
        iterator find(const T& value);

    private:
        void removeNode(TreeNode<T,O>* node);
    };
}

#include "tree.cpp"
#include "treeiterator.cpp"
#include "treenode.cpp"

#endif // TREE_H
