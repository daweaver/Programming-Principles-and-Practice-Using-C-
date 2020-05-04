/*PP2: Ch.8 - Exercise 7 */
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

// void swap(vector<string> n, vector<int> &a)
// {
//     if (n[1] < n[0])
//     {
//         int temp = a[1];
//         a[0] = a[1];
//         a[1] = a[0];
//     }
//     if (n[1] > n[2])
//}

void func(vector<string> nc, vector<string> sn, vector<int> a)
{
    // find the index of the original name vector (nc) elements 
    // in the sorted name vector (sn)
    for (size_t i{0}; i < nc.size(); ++i)
    {
        // find nc element in sn 
        if (nc[i] != sn[i])
        {
        }
    }
}

int main()
{
    vector<string> name(3);     // TO DO: cange this back to 5 later
    vector<int> age(3);

    for (size_t i{0}; i < 3; ++i)
    {
        cout << "Enter name " << i + 1 << ": ";
        cin >> name[i];
        cout << "Enter " << name[i] << "'s age: ";
        cin >> age[i];
        cout << '\n';
    }

    for (size_t i{0}; i < 3; ++i)       // print out vectors, put into function 
    {
        if (i == 2)
            cout << '(' << name[i] << ", " << age[i] << ")\n";
        else

            cout << '(' << name[i] << ", " << age[i] << "), ";
    }

    // make copy of names vector before sorting it 
    vector<string> name_copy = name;
    sort(name.begin(), name.end());

    // TO DO: Figure out how to sort the age vector to 
    // match the names vector values 

    for (size_t i{0}; i < 3; ++i)       // print out vectors, put into function 
    {
        if (i == 2)
            cout << '(' << name[i] << ", " << age[i] << ")\n";
        else

            cout << '(' << name[i] << ", " << age[i] << "), ";
    }

    return 0;
}