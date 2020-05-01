/*PPP2 Ch.4 - Exercise 20
Task: Modify exercise 19 to allow the user to enter a name only and pull 
the corresponding score. */

// TO DO: Replace header file with C++ header files and update try...catch block
#include "..//std_lib_facilities.h"		// included for error message, remove later

int main() {
	try {
		// local variables 
		vector<std::string> names{};
		vector<int> scores{};	// may need to change to double later
		std::string input{};
		std::string name{};
		std::string score{};

		std::cout << "Enter a name and corresponding score. (ex: 'Devere 100')" << std::endl;
		std::cout << "Enter 'NoName 0' at any time to terminate program." << std::endl;

		while (true) {
			// read user input as a string 
			std::cout << "Add record >> ";
			std::getline(std::cin, input);

			// find the whitespace in the input string 
			size_t whitespace = input.find(' ');		// return the position number of the whitespace in the string 

			// set name and score variables 
			name = input.substr(0, whitespace);		// name is all characters before whitespace 
			score = input.substr(whitespace + 1, input.length() - 1);	// score = all characters after whitespace

			// test exit condition (user inputs "NoName 0"
			if (name == "NoName" && score == "0")
				break;

			// check if name is in names vector already 
			if (std::find(names.begin(), names.end(), name) != names.end()) {
				std::cout << "Record already exists..." << std::endl;
				size_t pos = name.find(name);
				std::cout << name << "'s score: " << scores[pos] << "\n" << std::endl;
				continue;
			}
			else {
				//std::cout << "\nRecond not found. Adding..." << std::endl;
				// add strings to vectors 
				names.push_back(name);
				scores.push_back(stoi(score));		// convert score to int to add to scores vector
				std::cout << "Record added.\n" << std::endl;

				// clean up strings
				name.clear();
				score.clear();
			}
		}
		// print each name,score pair 
		for (size_t i{ 0 }; i < size(names); ++i)
			std::cout << names[i] << " " << scores[i] << std::endl;

		return 0;
	}
	catch (exception& e) {
		cerr << "Error: Tried to enter unknown name with no score." << '\n';
		return 1;
	}
};