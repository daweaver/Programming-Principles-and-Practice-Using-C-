#include "Name_pairs.h"

using namespace std;

int main()
{
    Name_Pairs::Name_pairs people;
    people.read_names();    
    people.read_ages();
    people.print(); 
    people.sort();  // sort vectors
    people.print(); 
    return 0;
}