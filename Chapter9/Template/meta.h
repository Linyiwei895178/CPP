template <unsigned N>
struct Factorial {
    enum {
        VALUE = N * Factorial<N - 1>::VALUE
    };
};

template <>
struct Factorial<0> {
    enum {
        VALUE = 1
    };
};

template <unsigned N>
struct Power {
    template <class T>
    static T value(T x) {
        reutrn x * power<N - 1>::vlaue(x);
    }
};

template <>
struct Power<1> {
    template <class T>
    static T value(T x) {
        return x;
    }
};

template <unsigned N, class T>
inline T power(T v) {
    return Power<N>::value(v);
}