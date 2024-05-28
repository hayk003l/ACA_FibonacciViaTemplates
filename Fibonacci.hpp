#ifndef __FIBONACCI__
#define __FIBONACCI__

template <int f>
class Fibonacci {
public:
    static const int val = Fibonacci<f - 2>::val + Fibonacci<f - 1>::val;
};

template <>
class Fibonacci<1> {
public:
    static const int val = 1;
};

template <>
class Fibonacci<0> {
public:
    static const int val = 0;
};

#endif // __FIBONACCI__