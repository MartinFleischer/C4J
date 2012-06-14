#ifndef MAP_H
#define MAP_H

#include "MapToFirst.h"
#include "treeiterator.h"
#include "pair.h"


namespace mystl {

    template <typename K, typename V,typename O = MapToFirst< K, V > >
    class Map
    {
    public:

        typedef TreeIterator< Pair<K, V>, O > iterator;

        V& operator[](const K&);
        iterator insert(const Pair<K,V>&);
        iterator find(const K&);
        iterator begin();
        iterator end();
        iterator first();
        iterator last();
        const K& min();
        const K& max();
        void clear();

    private:
        Tree< Pair<K, V>, O > m_tree;
    };
}

#include "map.cpp"

#endif // MAP_H
