#include "pair.h"

Pair::Pair(T1 first,T2 second){
}

T1& Pair::first(){
    return m_first;
}

T2& Pair::second(){
   return m_second;
}

T1& Pair::first() const;
T2& Pair::second() const;
std::cout& operator<<(std::ostream& lhs, Pair const&);
