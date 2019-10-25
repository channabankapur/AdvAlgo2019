#include "../src/suffixes_data_structure_implementation.cpp"
#include "../include/suffixes_data_structure.hpp"
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

TEST_CASE("Case 1: Full Match")
{
    vector<string> input;
    input.push_back("Lorem Ipsum is simply dummy text of the printing and typesetting industry. Lorem Ipsum has been the industry's standard dummy text ever since the 1500s, when an unknown printer took a galley of type and scrambled it to make a type specimen book. It has survived not only five centuries, but also the leap into electronic typesetting, remaining essentially unchanged. It was popularised in the 1960s with the release of Letraset sheets containing Lorem Ipsum passages, and more recently with desktop publishing software like Aldus PageMaker including versions of Lorem Ipsum.");
    input.push_back("Contrary to popular belief, Lorem Ipsum is not simply random text. It has roots in a piece of classical Latin literature from 45 BC, making it over 2000 years old. Richard McClintock, a Latin professor at Hampden-Sydney College in Virginia, looked up one of the more obscure Latin words, consectetur, from a Lorem Ipsum passage, and going through the cites of the word in classical literature, discovered the undoubtable source.");
    suffixes_data_structure_implementation test_obj;
    test_obj.build(input);
    string query_string = "Lorem";
    search_results results = test_obj.search(query_string);
    CHECK(results.matched_string == query_string);
    CHECK(results.indices.size() == 2);
    CHECK(results.indices[0].first == 0);
    CHECK(results.indices[0].second == 0);
    CHECK(results.indices[1].first == 1);
    CHECK(results.indices[1].second == 28);
}

TEST_CASE("Case 2: Partial Match")
{
    vector<string> input;
    input.push_back("How vexingly quick daft zebras jump!");
    input.push_back("The quick brown fox jumps over a lazy dog");
    suffixes_data_structure_implementation test_obj;
    test_obj.build(input);
    string query_string = "a quick";
    search_results results = test_obj.search(query_string);
    CHECK(results.matched_string == " quick");
    CHECK(results.indices.size() == 1);
    CHECK(results.indices[0].first == 0);
    CHECK(results.indices[0].second == 12);
}

TEST_CASE("Case 3: No match")
{
    vector<string> input;
    input.push_back("abcdef");
    input.push_back("hijklm");
    suffixes_data_structure_implementation test_obj;
    test_obj.build(input);
    string query_string = "g";
    search_results results = test_obj.search(query_string);
    CHECK(results.matched_string.length() == 0);
    CHECK(results.indices.size() == 0);
}