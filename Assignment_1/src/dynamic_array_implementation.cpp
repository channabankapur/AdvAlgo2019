#include "../include/dynamic_array.hpp"

using namespace std;

//Given just for reference. Only the class name and function names should match.
class dynamic_array_implementation : public dynamic_array
{
private:
    int size;
    int capacity;
    int *arr;
    double increase_factor;
    double decrease_factor;

public:
    dynamic_array_implementation();
    int get_size();
    int get_capacity();
    void set_increase_factor_table_size(double);
    void set_load_factor_reduction(double);
    void append(int);
    void pop();
    int get(int);
    ~dynamic_array_implementation();
};

dynamic_array_implementation::dynamic_array_implementation()
{
    size = 0;
    capacity = 0;
    increase_factor = 2;
    decrease_factor = 0.25;
}
int dynamic_array_implementation::get_size()
{
    return 0;
}
int dynamic_array_implementation::get_capacity()
{
    return 0;
}

void dynamic_array_implementation::set_increase_factor_table_size(double increase_factor)
{
    return;
}
void dynamic_array_implementation::set_load_factor_reduction(double decrease_factor)
{
    return;
}

void dynamic_array_implementation::append(int element)
{
    return;
}

void dynamic_array_implementation::pop()
{
    return;
}
int dynamic_array_implementation::get(int index)
{
    return 0;
}

dynamic_array_implementation::~dynamic_array_implementation()
{
    if (capacity > 0)
    {
        delete[] arr;
    }
}