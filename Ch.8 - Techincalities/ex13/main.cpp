/*PP2: Ch.8 - Exercise 13 */
#include <iostream>
#include <vector>
#include <string>

using namespace std;
vector<int> count_strings(const vector<string> &v)
{
    vector<int> count_vect{};
    for (size_t i{0}; i < v.size(); ++i)
    {
        count_vect.push_back(v[i].length());
    }
    return count_vect;
}

//-----------------------------------------------
int main()
{
    vector<string> names{"Devere", "Tuitty", "Stella", "Paris"};
    vector<int> counts = count_strings(names);

    cout << "{ ";
    for (auto i : counts)
        cout << i << ' ';
    cout << "}" << endl;
    return 0;
}