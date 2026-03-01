#include "prime.hpp"
#include <vector>

std::vector<int> Factorizer::factorize(int n) const {
    std::vector<int> out;
    if (n < 2) return out;

    while (n % 2 == 0) {
        out.push_back(2);
        n /= 2;
    }

    for (int d = 3; d * d <= n; d += 2) {
        while (n % d == 0) {
            out.push_back(d);
            n /= d;
        }
    }

    if (n > 1) out.push_back(n);
    return out;
}