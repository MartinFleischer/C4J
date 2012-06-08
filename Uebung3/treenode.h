#ifndef TREENODE_H
#define TREENODE_H

#include "less.h"

namespace mystl {

    // Vorab-Deklaration
    template<typename T, typename O>
    class TreeIterator;

    // Vorab-Deklaration
    template<typename T, typename O>
    class Tree;

    template <typename T, typename O=Less<T> >
    class TreeNode {

        protected:
            TreeNode();
            TreeNode* m_left;
            TreeNode* m_right;
            TreeNode* m_up;
            TreeIterator<T,O>& getIterator();

            T m_value;

            TreeNode* findFirst();
            TreeNode* findLast();
            TreeNode* find(T& value);

        public:
            TreeNode(const T &value = T(), TreeNode<T,O> *up = 0);

            friend class TreeIterator<T,O>;
            friend class Tree<T,O>;
    };
}

#endif // TREENODE_H
