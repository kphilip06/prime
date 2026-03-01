#include <iostream>
#include "src/prime.hpp"

int main() {
  Factorizer f;

  int n;
  std::cout << "Enter n: ";
  std::cin >> n;

  auto factors = f.factorize(n);
  for (auto x : factors) std::cout << x << " ";
  std::cout << "\n";
}
