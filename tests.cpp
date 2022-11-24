#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "vectors.h"

TEST_CASE("Task A")
{
    auto v = makeVector(10);
    CHECK(v.size() == 10);
}
