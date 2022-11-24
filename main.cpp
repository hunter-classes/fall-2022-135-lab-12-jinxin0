#include <algorithm>
#include <iostream>
#include <numeric>
#include <random>

#include "vectors.h"
#include "optimism.h"
#include "fusion.h"
#include "pairwise.h"
    
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

    std::vector<int> q(5);
    std::iota(q.begin(), q.end(), 5);
    gogeta(v, q);
    PRINT_VEC(v);
    PRINTLN(std::boolalpha << q.empty());

    std::fill_n(std::back_inserter(q), 5, 10);
    auto x = sumPairWise(v, q);
    PRINT_VEC(x);
    return 0;
}
