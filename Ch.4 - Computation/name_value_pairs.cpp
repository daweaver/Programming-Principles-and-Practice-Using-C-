/*PPP2 Ch.4 - Exercise 19
Task: Read input of name and value pairs (Devere 92). For each pair
add the name portion to a names vector and add the number portion to a 
scores vector. Output each name, score pair, one per line. */
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main() {
	// local variables 
	std::vector<std::string> names{};
	std::vector<int> scores{};	// may need to change to double later
	std::string input{};
	std::string name{};
	std::string score{};

	std::cout << "Enter a name and corresponding score. (ex: 'Devere 100')" << std::endl;
	std::cout << "Enter 'NoName 0' at any time to terminate program." << std::endl;

	while (true) {
		// read user input as a string 
		std::cout << ">> ";
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
			std::cout << "Error: Name already exits" << std::endl;
			std::cout << "Try again." << std::endl;
			continue;
		}
		
		// add strings to vectors 
		names.push_back(name);
		scores.push_back(stoi(score));		// convert score to int to add to scores vector 

		// clean up strings
		name.clear();
		score.clear();
	}

	// print each name,score pair 
	for (size_t i{ 0 }; i < size(names); ++i)
		std::cout << names[i] << " " << scores[i] << std::endl;

	return 0;
};