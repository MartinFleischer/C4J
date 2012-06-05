#ifndef MAPTOFIRST_H
#define MAPTOFIRST_H

#include "less.h"
#include "greater.h"
#include "pair.h"

using namespace mystl;

template<typename T1, typename T2, template<typename T1> class Op = Less >
class MapToFirst {
    private:
        Op<T1> m_order;

    public:
        bool operator () (const Pair<T1, T2> &lhs, const Pair<T1, T2> &rhs){
            return m_order(lhs.first(), rhs.first());
        }
};


#endif // MAPTOFIRST_H
