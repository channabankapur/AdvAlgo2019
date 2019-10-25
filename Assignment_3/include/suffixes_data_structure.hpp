#ifndef SUFFIXES_DATA_STRUCTURE
#define SUFFIXES_DATA_STRUCTURE

#include <vector>
#include <utility>
#include <string>

using namespace std;

struct search_results
{
    string matched_string;
    vector<pair<int, int>> indices;
};

class suffixes_data_structure
{
public:
    // The input is a a vector of strings.
    // The index of the string is considered the document number.
    // This is used for initialization of the suffix array/tree
    virtual void build(vector<string>) = 0;
    // The input is the query string.
    // There are 3 cases.
    // 1. Complete match, i.e. the complete query string is found in any document. 
    // Return value - The matched_string should be the query string.
    // The indices should contain the document index,
    // and first index that is matched for that document.
    // The indices should be sorted in ascending order according to document index.
    // 2. Partial match, i.e. the whole query string is not found
    // but a substring of the query string is found, 
    // it should match the first occurrence of longest substring across the whole input.
    // i.e. if it occurs in document 1 and document 2, it should return 
    // the document 1 index, even if the document 1 index is greater
    // than the document 2 index.
    // Return value - 
    // matched_string should be the longest substring that is found in the document. 
    // The indices vector should contain only 1 value, the first occurrence.
    // 3. No substring is matched. 
    // Return value - matched_string should be empty, i.e. length 0. 
    // indices vector should be empty too.
    virtual search_results search(string) = 0;
};
#endif