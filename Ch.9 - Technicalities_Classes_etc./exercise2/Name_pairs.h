// Name_pairs class declaration
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

namespace Name_Pairs
{

    class Name_pairs
    {
    public:
        // modifying operations
        void read_names();
        void read_ages();
        void print();
        void sort();
        int find_index(const std::string &n); 

    private:
        std::vector<std::string> names{};
        std::vector<double> ages{};
    };
} // namespace Name_Pairs
