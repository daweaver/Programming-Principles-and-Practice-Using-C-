/*PP2 - Ch.8: Exercise 10 */

// Possibly may need to overload the maxv() function
// in order to return different data types
#include <iostream>
#include <vector>

using namespace std;

//------------------------------------------------
int maxv(const vector<int> &v) // return largest value from vector
{
    int largest = v[0];
    for (auto i : v)
    {
        if (i > largest)
            largest = i;
    }
    return largest;
}

//------------------------------------------------
int main()
{
    vector<int> nums{1, 2, 3, 4, 5, 2929};

    cout << maxv(nums) << endl;
    
    return 0;
}