#include <vector>

class survival_of_the_fittest
{
public:
    // The integers are number of archers, pikemen and knights respectively.
    virtual std::vector<double> solve(int, int, int) = 0;
};
