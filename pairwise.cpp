#include <algorithm>

#include "pairwise.h"

std::vector<int> sumPairWise(const std::vector<int> &v1, const std::vector<int> &v2)
{
    auto a = &v1;
    auto b = &v2;
    if (a->size() < b->size())
        std::swap(a, b);
    std::vector<int> ans;
    ans.reserve(a->size());
    auto it1 = a->begin();
    for (auto it2 = b->begin(); it2 != b->end(); ++it2)
    {
        ans.push_back(*it1 + *it2);
        ++it1;
    }
    for (; it1 != a->end(); ++it1)
    {
        ans.push_back(*it1);
    }
    return ans;
}
