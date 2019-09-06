#include <iostream>
#include <stdexcept>

class dynamic_array
{
public:
    //Size is the number of elements in the array. This returns that number.
    virtual int get_size() = 0;
    
    //Capacity is the amount of memory allocated for the array. This returns that number.
    virtual int get_capacity() = 0;
    
    //This sets the variable which is the value of how much the array should expand by.
    //The default value should be 2, i.e. when the array expands, the new size should be
    //twice as large.If the size and capacity is 4 and an insertion happens,
    //the new capacity should be 8(if the value is 2)   
    virtual void set_increase_factor_table_size(double) = 0;

    //This sets the variable which is the value of when the array should decrease in size.
    //The default value should be 0.25, i.e. the array should decrease in capacity when the 
    //size is load_factor * capacity. If the capacity is 16, then when the size reaches
    //4 (after popping), the capacity of the array should reduce to 8. 
    virtual void set_load_factor_reduction(double) = 0;

    //Inserts an element to the end of the array. 
    //Expansion of the array should happen if necessary.
    virtual void append(int) = 0;

    //Deletes an element from the end of the array. 
    //Contraction of the array to capacity*increase_factor*load_factor_reduction should happen if necessary. 
    virtual void pop() = 0;

    //Returns the element at the index which is the argument. We won't be testing the 
    //out of bounds case, but throwing an "out_of_range" exception seems
    //to be the correct way to handle it.
    virtual int get(int) = 0;
};
