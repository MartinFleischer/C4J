#ifndef MAP_CPP
#define MAP_CPP

#include "map.h"

using namespace mystl;


template <typename K, typename V,typename O >

V& Map<K,V,O>::operator[](const K& k){
    iterator iterator = this->find(k);
    if(iterator != m_tree.end()){
        Pair<K, V> &pair = *iterator;
        return pair.second();
    } else {
        Pair<K, V> pair(k);
        return this->insert(pair)->second();
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
    return this->m_tree.first();
}

template <typename K, typename V,typename O >
TreeIterator< Pair<K, V>, O > Map<K,V,O>::last(){
    return this->m_tree.last();
}

template <typename K, typename V,typename O >
const K& Map<K,V,O>::min(){
    return (this->first()->first());
}

template <typename K, typename V,typename O >
const K& Map<K,V,O>::max(){
    return (this->last()->first());
}

template <typename K, typename V,typename O >
void Map<K,V,O>::clear(){
    m_tree.clear();
}

#endif
