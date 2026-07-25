//metaprogramming

template <unsigned N>
struct Factorial {
    enum {
        VLAUE = N * Factorial<N - 1>::VALUE
    };
};

template <>
struct Factorial<0> {
    enum {
        VALUE = 1
    };
};

#include <iostream>
template <typename T>
void print(T &t) {
    std::cout << t << std::endl;
}

template <typename T, typename... TypeArgs>
void func(const T &t, const TypeArgs&... args) {
    std::cout << sizeof...(args) << std::endl;
    (print(args),...);
}

int main() {
    func(3, 4.5, "hello world!");
    return 0;
}