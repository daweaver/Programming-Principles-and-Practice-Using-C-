/*PP2: Chapter 8 - Exercise 11 */
#include <iostream> 
#include <vector>

using namespace std;

//-----------------------------------------------
int maxv(const vector<int> &v)
{
    // return largest value
    int largest = v[0];
    for (auto i : v)
    {
        if (i > largest)
            largest = i;
    }
    return largest;
}

//-----------------------------------------------
int minv(const vector<int> &v)
{
    // return smallest value
    int smallest = v[0];
    for (auto i : v)
    {
        if (i < smallest)
            smallest = i;
    }

    return smallest;
}
//-----------------------------------------------
float mean(const vector<int> &v)
{
    // calculate mean
    float total{};
    for (auto i : v)
        total += i;
    float mean = total / v.size();
    return mean;
}

//-----------------------------------------------
float median(const vector<int> &v)
{
    float median;
    if (v.size() % 2 == 0) // even
    {
        float upper = v[(v.size() / 2)];
        float lower = v[(v.size() / 2) - 1];
        median = (upper + lower) / 2;
    }
    else // odd
    {
        median = v[(v.size() - 1) / 2];
    }

    return median;
}

//-----------------------------------------------
int main()
{
    vector<int> nums{1, 2, 3, 4, 5, 6, 7, 8};

    cout << "Largest: " << maxv(nums) << endl;
    cout << "Smallest: " << minv(nums) << endl;
    cout << "Mean: " << mean(nums) << endl;
    cout << "Median: " << median(nums) << endl;

    return 0;
}