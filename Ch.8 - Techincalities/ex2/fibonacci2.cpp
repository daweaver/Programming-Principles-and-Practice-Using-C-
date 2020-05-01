// Fibonacci2.cpp 

#include <iostream>
#include <vector>
#include <string>

//------------------------------------------------------
void print(std::string label, const std::vector<int> &nums)
{
    std::cout << label << ':' << std::endl;
    for (auto i : nums)
    {
        if (i == nums[nums.size()- 1])
            std::cout << i << std::endl;
        else
            std::cout << i << ", ";
    }
    std::cout << '\n';
}

//------------------------------------------------------
void fibonacci(int x, int y, std::vector<int> v, int n)
{
    v.push_back(x);
    v.push_back(y);
    for (size_t i{2}; i < n; ++i)
        v.push_back(v[i - 1] + v[i - 2]);

    print("My Fibonacci Sequence", v);
}

//------------------------------------------------------
int main()
{
    std::vector<int> sequence{};
    fibonacci(1, 1, sequence, 5);
    fibonacci(1, 2, sequence, 7);
    return 0;
}