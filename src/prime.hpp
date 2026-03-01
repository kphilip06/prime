#pragma once

#include <vector>

class Factorizer {
public:
    // Returns prime factors in non-decreasing order.
    // Example: 84 -> {2,2,3,7}
    std::vector<int> factorize(int n) const;
};