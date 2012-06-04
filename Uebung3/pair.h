#ifndef PAIR_H
#define PAIR_H

template <typename T1, typename T2>

class Pair{


public:
    Pair(T1 first = T1(),T2 second = T2());
    T1& first();
    T2& second();
    T1& first() const;
    T2& second() const;
    std::cout& operator<<(std::ostream& lhs, Pair const&);

private:
    T1 m_first;
    T2 m_second;

};

#endif // PAIR_H
