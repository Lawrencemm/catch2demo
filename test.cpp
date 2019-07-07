#include <catch2/catch.hpp>

TEST_CASE("Test that math holds") {
    auto i = GENERATE(1, 2);
    REQUIRE(i == 1);
}
