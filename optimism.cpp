#include <algorithm>

#include "optimism.h"

std::vector<int> goodVibes(const std::vector<int>& v)
{	
    std::remove_const<std::remove_reference<decltype(v)>::type>::type o;
    std::copy_if(v.begin(), v.end(), std::back_inserter(o), [](int i){return i > 0;});
    std::sort(o.begin(), o.end());
    return o;
}
