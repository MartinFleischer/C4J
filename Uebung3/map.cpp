#ifndef MAP_CPP
#define MAP_CPP

#include "map.h"
#include <stdio.h>
using namespace std;

using namespace mystl;

template <typename K, typename V,typename O >

V& Map<K,V,O>::operator[](const K& k){

    TreeIterator< Pair<K, V>, O > it = this->find(k);
    if(it != end()){
        Pair<K, V> &p = *it;
        return p.second();
    } else {
        cout << "hier" << endl;
        Pair<K, V> p = *new Pair<K,V>(k,V());
        return this->insert(p).m_node->value().second();
    }
}

template <typename K, typename V,typename O >
TreeIterator< Pair<K, V>, O > Map<K,V,O>::insert(const Pair<K,V>& p){
    return this->m_tree.insert(p);
}

template <typename K, typename V,typename O >
TreeIterator< Pair<K, V>, O > Map<K,V,O>::find(const K& k){
    return this->m_tree.find(k);
}

template <typename K, typename V,typename O >
TreeIterator< Pair<K, V>, O > Map<K,V,O>::begin(){
    return this->m_tree.begin();
}

template <typename K, typename V,typename O >
TreeIterator< Pair<K, V>, O > Map<K,V,O>::end(){
    return this->m_tree.end();
}

template <typename K, typename V,typename O >
TreeIterator< Pair<K, V>, O > Map<K,V,O>::first(){
    return this->m_tree.begin();
}

template <typename K, typename V,typename O >
TreeIterator< Pair<K, V>, O > Map<K,V,O>::last(){
    return this->m_tree.last();
}

template <typename K, typename V,typename O >
const K& Map<K,V,O>::min(){
    return this->first().m_node->value().first();
}

template <typename K, typename V,typename O >
const K& Map<K,V,O>::max(){
    return this->last().m_node->value().first();
}

template <typename K, typename V,typename O >
void Map<K,V,O>::clear(){
    m_tree.clear();
}

#endif
