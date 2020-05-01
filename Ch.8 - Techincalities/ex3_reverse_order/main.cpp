/* PP2: Ch.8 Exercise 5 
   Define two functions that reverse the 
   order of a vector of ints passed to them 
   as arguments. 
*/
#include <iostream>
#include <vector>

//-----------------------------------------------
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

//-----------------------------------------------
void reverse_by_value(std::vector<int> v)
{
    std::vector<int> vc{};
    for (size_t i{0}; i < v.size(); ++i)
        vc.push_back(v[(v.size() - 1) - i]);

    std::cout << "Vector has been reversed: ";
    for (auto i : vc)
        std::cout << i << " ";
    std::cout << '\n';
}

//-----------------------------------------------
void reverse_by_reference(std::vector<int> &v)
{
    if (v.size() % 2 == 0) // vector with even # elements
    {
        for (size_t i{0}; i <= v.size() / 2; ++i)
            swap(v[i], v[(v.size() - 1) - i]);
    }
    else
    {
        for (size_t i{0}; i <= ((v.size() - 1) / 2); ++i)
            swap(v[i], v[(v.size() - 1) - i]);
    }

    std::cout << "Element has been reversed by referece: ";
    for (auto i : v)
        std::cout << i << " ";
    std::cout << '\n';
}

//-----------------------------------------------
int main()
{
    std::vector<int> nums{1, 2, 3, 4, 5};

    std::cout << "Current vector values: ";
    for (auto i : nums)
        std::cout << i << " ";
    std::cout << '\n';

    reverse_by_value(nums);
    reverse_by_reference(nums);

    return 0;
}