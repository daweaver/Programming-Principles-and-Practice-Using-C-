/*PP2: Ch.8 - Exercise 7 */
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    vector<string> name(5);
    vector<int> age(5);

    for (size_t i{0}; i < 5; ++i)
    {
        cout << "Enter name " << i + 1 << ": ";
        cin >> name[i];
        cout << "Enter " << name[i] << "'s age: ";
        cin >> age[i];
        cout << '\n';
    }

    for (size_t i{0}; i < 5; ++i)       // print out vectors, put into function 
    {
        if (i == 4)
            cout << '(' << name[i] << ", " << age[i] << ")\n";
        else

            cout << '(' << name[i] << ", " << age[i] << "), ";
    }

    // make copy of names vector before sorting it 
    vector<string> name_copy = name;

    sort(name.begin(), name.end());

    // TO DO: Figure out how to sort the age vector to 
    // match the names vector values 

    for (size_t i{0}; i < 5; ++i)       // print out vectors, put into function 
    {
        if (i == 4)
            cout << '(' << name[i] << ", " << age[i] << ")\n";
        else

            cout << '(' << name[i] << ", " << age[i] << "), ";
    }

    return 0;
}