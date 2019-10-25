#include "../include/suffixes_data_structure.hpp"
using namespace std;

class suffixes_data_structure_implementation : public suffixes_data_structure
{
public:
    suffixes_data_structure_implementation();
    void build(vector<string> input);
    search_results search(string query);
    ~suffixes_data_structure_implementation();
};
