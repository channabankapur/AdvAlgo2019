#include "../src/survival_of_the_fittest_implementation.cpp"
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

TEST_CASE("Case 1") {
    double range = pow(10, -9);
    survival_of_the_fittest_implementation obj;
    vector<double> result = obj.solve(1, 1, 1);

    CHECK(result[0]-range <= 0.333333333333);
    CHECK(result[0]+range >= 0.333333333333);
    CHECK(result[1]-range <= 0.333333333333);
    CHECK(result[1]+range >= 0.333333333333);
    CHECK(result[2]-range <= 0.333333333333);
    CHECK(result[2]+range >= 0.333333333333);
}

TEST_CASE("Case 2") {
    double range = pow(10, -9);
    survival_of_the_fittest_implementation obj;
    vector<double> result = obj.solve(1, 1, 2);

    CHECK(result[0]-range <= 0.133333333333);
    CHECK(result[0]+range >= 0.133333333333);
    CHECK(result[1]-range <= 0.533333333333);
    CHECK(result[1]+range >= 0.533333333333);
    CHECK(result[2]-range <= 0.333333333333);
    CHECK(result[2]+range >= 0.333333333333);
}
