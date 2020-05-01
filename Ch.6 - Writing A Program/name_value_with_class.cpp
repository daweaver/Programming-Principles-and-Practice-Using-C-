/*PPP Ch.6 - Exercise 4
Modify Ch.4 Exercise 19 program to use a
user defined class to create name,value object instead
of using vectors. */

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

// class declaration
class Name_value {
public:
	// attributes 
	std::string name{};
	int score{};

	// constructor
	Name_value(std::string name_val, int score_val)		// two-arg constructor with constructor init list 
		:name{ name_val }, score{ score_val }{}
};

int main() {
	// local variables 
	std::vector<Name_value> records{};
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
		size_t whitespace = input.find(' ');		

		// set name and score variables 
		name = input.substr(0, whitespace);		// name is all characters before whitespace 
		score = input.substr(whitespace + 1, input.length() - 1);	// score = all characters after whitespace

		// create Name_value object
		Name_value record(name, stoi(score));

		// clean up strings
		name.clear();
		score.clear();

		// test exit condition (user inputs "NoName 0"
		if (record.name == "NoName" && record.score == 0)
			break;

		/*TO DO: check if object exists already, do after rest is working*/
		//// check if name is in names vector already 
		/*if (std::find(records.begin(), records.end(), name) != records.end()) {
			std::cout << "Error: Name already exits" << std::endl;
			std::cout << "Try again." << std::endl;
			continue;
		}*/

		// add object to vector 
		records.push_back(record);
	}

	// print each name,score pair 
	for (size_t i{ 0 }; i < records.size(); ++i)
		std::cout << records[i].name << " " << records[i].score << std::endl;

	return 0;
};