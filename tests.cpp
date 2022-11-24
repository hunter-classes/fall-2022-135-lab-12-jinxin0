#include <algorithm>
#include <numeric>
#include <random>

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "vectors.h"
#include "optimism.h"
#include "fusion.h"
#include "pairwise.h"

auto v = makeVector(10);
TEST_CASE("Task A")
{
    CHECK(v.size() == 10);
}

TEST_CASE("Task B")
{
    std::iota(v.begin(), v.end(), -5);
    std::shuffle(v.begin(), v.end(), std::mt19937{std::random_device{}()});
    v = goodVibes(v);
    std::vector<int> ans{1, 2, 3, 4};
    CHECK(std::equal(v.begin(), v.end(), ans.begin()));
}

std::vector<int> q(5);
TEST_CASE("Task C")
{
    std::iota(q.begin(), q.end(), 5);
    gogeta(v, q);
    std::vector<int> ans{1, 2, 3, 4, 5, 6, 7, 8, 9};
    CHECK(std::equal(v.begin(), v.end(), ans.begin()));
    CHECK(q.empty() == true);
}

TEST_CASE("Task D")
{
    std::fill_n(std::back_inserter(q), 5, 10);
    auto x = sumPairWise(v, q);
    std::vector<int> ans{11, 12, 13, 14, 15, 6, 7, 8, 9};
    CHECK(x == ans);
}
