#include "fusion.h"

void gogeta(std::vector<int> &goku, std::vector<int> &vegeta)
{
    goku.insert(goku.end(), vegeta.begin(), vegeta.end());
    vegeta.clear();
}
