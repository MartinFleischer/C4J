#ifndef MAP_CPP
#define MAP_CPP

#include "map.h"

using namespace mystl;


template <typename K, typename V,typename O >

V& Map<K,V,O>::operator[](const K& k){
    TreeIterator< Pair<K, V>, O > it = this->find(k);
    if(it != m_tree.end()){
        Pair<K, V> &p = *it;
        return p.second();
    } else {
        Pair<K, V> p(k);
        return this->insert(p)->second();
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
    return *this->m_tree.begin().m_node;
}

template <typename K, typename V,typename O >
const K& Map<K,V,O>::max(){
    return *this->m_tree.last().m_node;
}

template <typename K, typename V,typename O >
void Map<K,V,O>::clear(){
    m_tree.clear();
}

#endif
