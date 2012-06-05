#ifndef PAIR_H
#define PAIR_H

#include <iostream>


namespace mystl {

template <typename T1, typename T2>
class Pair{
    T1 m_first;
    T2 m_second;

public:
    Pair(T1 first = T1(),T2 second = T2())
        :m_first(),m_second()
    {
    }

    T1& first(){
        return m_first;
    }

    T2& second(){
        return m_second;
    }

    T1& first() const{
        return m_first;
    }
    T2& second() const{
        return m_second;
    }
};

inline std::ostream& operator<<(std::ostream &lhs, const Pair &pair){

}

}

#endif // PAIR_H
