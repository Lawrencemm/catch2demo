#include <catch2/catch.hpp>

float my_formula(float arg) { return arg + 0.1f + 0.1f; }

TEST_CASE("Test float numbers work")
{
    auto [arg, expected_answer] = GENERATE(table<float, float>({
      {1.f, 1.2f},
      {20.f, 20.2f},
      {200.f, 200.2f},
    }));
    CAPTURE(arg, expected_answer);
    REQUIRE(my_formula(arg) == expected_answer);
}
