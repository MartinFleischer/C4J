#ifndef PAIR_H
#define PAIR_H

template <typename T1, typename T2>
class Pair{
    T1 m_first;
    T2 m_second;

public:
    Pair(T1 first = T1(),T2 second = T2());
    T1& first();
    T2& second();
    T1& first() const;
    T2& second() const;
    void operator<<();
};


#endif // PAIR_H
