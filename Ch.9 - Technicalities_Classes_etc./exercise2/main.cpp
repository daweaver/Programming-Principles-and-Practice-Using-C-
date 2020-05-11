#include "Name_pairs.h"

using namespace std;

int main()
{
    Name_pairs family;
    family.read_names();    // input names
    family.read_ages(); // input ages
    family.print(); // output name,age pairs
    family.sort();  // sort names
    family.print(); // names should be in order

    return 0;
}