#include "../src/splay_tree_implementation.cpp"
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

TEST_CASE("Initialization") {
    splay_tree_implementation test_splay_tree;
    CHECK(test_splay_tree.get_num_nodes() == 0);
}

TEST_CASE("Insert") {
    splay_tree_implementation test_splay_tree;
    test_splay_tree.insert(1);
    CHECK(test_splay_tree.get_num_nodes() == 1);
}

TEST_CASE("Find") {
    splay_tree_implementation test_splay_tree;
    test_splay_tree.insert(1);
    CHECK(test_splay_tree.find(1) == true);    
}

TEST_CASE("Remove") {
    splay_tree_implementation test_splay_tree;
    test_splay_tree.insert(1);
    CHECK(test_splay_tree.get_num_nodes() == 1);
    test_splay_tree.remove(1);
    CHECK(test_splay_tree.get_num_nodes() == 0);
}