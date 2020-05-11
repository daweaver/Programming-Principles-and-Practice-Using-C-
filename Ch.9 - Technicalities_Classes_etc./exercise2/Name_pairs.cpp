#include "Name_pairs.h"

namespace Name_Pairs
{
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

    void Name_pairs::read_ages()
    {
        // TO DO: add error handling code

        std::cout << "\nWhen prompted, enter the user's age in years." << std::endl;
        std::cout << "(type 'q' when finished)" << std::endl;

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
        // TO DO: add error handling code

        std::vector<std::string> sorted_names{names};
        std::vector<double> sorted_ages{ages};

        // sort the copy of the name vector
        std::sort(sorted_names.begin(), sorted_names.end());

        for (size_t i{0}; i < sorted_names.size(); ++i)
        {
            sorted_ages[i] = ages[find_index(sorted_names[i])]; // call to find the index of the
                                                                // current name in the sorted names
                                                                // vector, assigns sorted age index to the
                                                                // same index of the age that matches the name
        }

        // assign the original vectors the values of the sorted vectors
        names = sorted_names;
        ages = sorted_ages;
    }

    int Name_pairs::find_index(const std::string &name)
    {
        /* Return the index number of the given name in the names vector */
        for (size_t i{0}; i < names.size(); ++i)
        {
            if (names[i] == name) // Check if name[i] is equal to the argument
                return i;         // if it is, then return the index number
        }
    } // TO DO: address warning message

} // namespace Name_Pairs