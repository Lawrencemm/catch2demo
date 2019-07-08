#include <catch2/catch.hpp>

int my_formula(int arg)
{
    return arg * arg * arg;
}

TEST_CASE("Test my function is always positive") {
    int j = GENERATE(3, -4);
    CAPTURE(j);
    REQUIRE(my_formula(j) > 0);
}
