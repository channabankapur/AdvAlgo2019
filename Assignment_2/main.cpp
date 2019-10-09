#include "src/survival_of_the_fittest_implementation.cpp"
#include <iostream>
#include <math.h>
#include <limits>

using namespace std;

typedef std::numeric_limits< double > dbl;

//You can test/use your code here.
int main()
{
    double range = pow(10, -9);
    survival_of_the_fittest_implementation obj1;
    vector<double> tmp = obj1.solve(1, 1, 2);
    cout << tmp[0] << " " << tmp[1] << " " << tmp[2] << "\n";
    //Sets precision to show specified number of digits. Refer, 
    https://stackoverflow.com/questions/554063/how-do-i-print-a-double-value-with-full-precision-using-cout
    cout.precision(dbl::max_digits10);
    cout << tmp[0]-range<<" "<<tmp[0]+range<<" "<<"\n";
    return 0;
}