#include "../src/dynamic_array_implementation.cpp"
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

TEST_CASE("Initialization") {
    dynamic_array_implementation test_dynamic_array;
    CHECK(test_dynamic_array.get_size() == 0);
    CHECK(test_dynamic_array.get_capacity() == 0);
}

TEST_CASE("Insert") {
    dynamic_array_implementation test_dynamic_array;
    test_dynamic_array.append(5);
    CHECK(test_dynamic_array.get_size() == 1);
    CHECK(test_dynamic_array.get_capacity() == 1);
    CHECK(test_dynamic_array.get(0) == 5);
}

TEST_CASE("Delete") {
    dynamic_array_implementation test_dynamic_array;
    test_dynamic_array.append(5);
    test_dynamic_array.pop();
    CHECK(test_dynamic_array.get_size() == 0);
    CHECK(test_dynamic_array.get_capacity() == 0);
}
