#ifndef TREENODE_H
#define TREENODE_H

namespace mystl {
    template <typename T, typename O=Less<T> >
    class TreeNode {
        //friend class Tree<T,O>;
        //friend class TreeIterator<T,O>;

        protected:
            TreeNode<T,O>();
            TreeNode<T,O>* m_left;
            TreeNode<T,O>* m_right;
            TreeNode<T,O>* m_up;
            T m_value;

            TreeNode<T,O>* findFirst();
            TreeNode<T,O>* findLast();
            TreeNode<T,O>* find(T& value);

        public:
            TreeNode(const T &value = T(), TreeNode<T,O> *up = 0);

    };
}

#include "treenode.h"

#endif // TREENODE_H
