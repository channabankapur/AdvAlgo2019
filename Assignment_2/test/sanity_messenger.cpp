#include "../src/the_messenger_implementation.cpp"
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

TEST_CASE("Case 1") {
    the_messenger_implementation obj;
    int result = obj.solve(3, 2, 4, "pqpq");

    CHECK(result == 8);
}

TEST_CASE("Case 2") {
    the_messenger_implementation obj;
    int result = obj.solve(3, 1, 4, "qqqq");

    CHECK(result == 5);
}
