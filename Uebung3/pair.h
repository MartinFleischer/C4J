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
            :m_first(first),m_second(second)
        {}
        Pair(const Pair<T1, T2>& p)
            :m_first(p.first()),m_second(p.second())
        {}

        T1& first(){
            return m_first;
        }

        T2& second(){
            return m_second;
        }

        const T1& first() const{
            return m_first;
        }
        const T2& second() const{
            return m_second;
        }
    };

    template <typename T1, typename T2>
    std::ostream& operator<<(std::ostream &lhs, const Pair<T1, T2> &pair){
        lhs << "<" << pair.first() << "," << pair.second() << ">";
        return lhs;
    }

}

#endif // PAIR_H
