// Name_pairs class declaration
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

class Name_pairs
{
public:
    // add constructor or just use default?

    // modifying operations
    void read_names();
    void read_ages();
    void print();
    void sort();

private:
    std::vector<std::string> names{};
    std::vector<double> ages{};
};