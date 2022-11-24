#include <algorithm>
#include <iostream>
#include <numeric>
#include <random>

#include "vectors.h"
#include "optimism.h"
    
#define PRINTLN(x) std::cout << x << '\n';

template<typename T>
void PRINT_VEC(T v)
{
    std::cout << '[';
    for (std::size_t i = 0; i < v.size() - 1; i++)
        std::cout << v[i] << ", ";
    std::cout << v.back() << "]\n";
}

int main()
{
    auto v = makeVector(10);
    PRINTLN(v.size());

    std::iota(v.begin(), v.end(), -5);
    std::shuffle(v.begin(), v.end(), std::mt19937{std::random_device{}()});
    v = goodVibes(v);
    PRINT_VEC(v);
    return 0;
}
