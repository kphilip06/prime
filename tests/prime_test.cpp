#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/prime.hpp"

TEST_CASE( "Testing when n < 2" ) {
    Factorizer f;
    REQUIRE(f.factorize(0).empty() );
    REQUIRE(f.factorize(1).empty() );
    REQUIRE(f.factorize(-5).empty() );
}
TEST_CASE ("Do primes return themselves") {
    Factorizer f;
    REQUIRE(f.factorize(2) == std::vector<int>{2} );
    REQUIRE(f.factorize(3) == std::vector<int>{3} );
}
TEST_CASE ("Testing powers") {
    Factorizer f;
    REQUIRE(f.factorize(4) == std::vector<int>{2,2} );
    REQUIRE(f.factorize(9) == std::vector<int>{3,3} );
}
TEST_CASE ("Mixed composites and leftover prime testing") {
    Factorizer f;
    REQUIRE(f.factorize(10) == std::vector<int>{2,5} );
    REQUIRE(f.factorize(15) == std::vector<int>{3,5} );
}