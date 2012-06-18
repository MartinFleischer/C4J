#ifndef TREENODE_H
#define TREENODE_H

#include "less.h"

using namespace std;

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
            TreeNode* m_up;
            T m_value;      
            TreeNode* m_left;
            TreeNode* m_right;
            Tree<T,O>* m_tree;


            TreeNode* findFirst();
            TreeNode* findLast();
            TreeNode* find(const T& value);

        public:
            TreeIterator<T,O>& getIterator();
            T value(){return m_value;}
            TreeNode(const T &value = T(), TreeNode<T,O> *up = 0, Tree<T,O>* tree = 0);
            friend class TreeIterator<T,O>;
            friend class Tree<T,O>;
    };
}

#endif // TREENODE_H
