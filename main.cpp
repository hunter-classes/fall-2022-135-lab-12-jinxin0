#include <iostream>

#include "vectors.h"
    
#define PRINTLN(x) std::cout << x << '\n';

int main()
{
    auto v = makeVector(10);
    PRINTLN(v.size());
    return 0;
}
