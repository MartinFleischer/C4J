#ifndef TREENODE_H
#define TREENODE_H

#include "less.h"
#include <iostream>

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
            TreeNode* m_left;
            TreeNode* m_right;
            TreeNode* m_up;
            TreeIterator<T,O>& getIterator();
            T m_value;


            TreeNode* findFirst();
            TreeNode* findLast();
            TreeNode* find(const T& value);

        public:
            TreeNode* left(){
                if(m_left == 0){ cout << "nix da" << endl;return 0;}
                return m_left;
            }
            T value(){return m_value;}
            TreeNode(const T &value = T(), TreeNode<T,O> *up = 0);
            friend class TreeIterator<T,O>;
            friend class Tree<T,O>;
    };
}

#endif // TREENODE_H
