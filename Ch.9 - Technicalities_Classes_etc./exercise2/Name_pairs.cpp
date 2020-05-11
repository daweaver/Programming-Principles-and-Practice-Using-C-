#include "Name_pairs.h"

//=============================================================================
// Name_pairs member functions
//=============================================================================
void Name_pairs::read_names()
{
    // continuously prompt user and read input into names vector
    std::cout << "Type a name to enter into the database.";
    std::cout << "(type 'quit' when finished)" << std::endl;

    std::string name{};
    while (true)
    {
        std::cout << ">> ";
        std::getline(std::cin, name);
        if (name == "quit")
            break;
        names.push_back(name);
    }
    std::cout << "Operation complete." << std::endl;
}

void Name_pairs::read_ages() // TO DO: add ability to terminate early
{
    std::cout << "\nWhen prompted, enter the user's age in years." << std::endl;
    std::cout << "(type 'q' when finished)" << std::endl;
    // operation needs to know what values are in the name vector
    for (size_t i{0}; i < names.size(); ++i)
    {
        int age{};
        std::cout << names[i] << "'s age >> ";
        std::cin >> age;
        ages.push_back(age);
    }
    std::cout << "Operation complete." << std::endl;
}

void Name_pairs::print()
{
    std::cout << '\n';
    for (size_t i{0}; i < names.size(); ++i)
    {
        std::cout << "Name: " << names[i] << "\t";
        std::cout << "Age: " << ages[i] << std::endl;
    }
}

void Name_pairs::sort()
{
    std::sort(names.begin(), names.end());  

    // TO DO: figure out how to sort the ages vector to match names
}