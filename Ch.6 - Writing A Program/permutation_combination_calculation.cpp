/*Permutation and Combination Calculation
- program allows user to calculate the total number of
possible permutation or combinations with repitition allowed*/

/* TO DO: Possibly refactor repetitive code that reads user input
for a and b values. */

/* TO DO: Allow user the ability to pass in a set of values and 
output the different combinations/permutations themselves instead
along with the possible number. */

#include <iostream>

/*Function prototypes*/
int permutation(int a, int b);
int combination(int a, int b);
unsigned long long int factorial(int c);			// must unsigned long long int as factorials get extremely large - 20! is largest

/*--------------------------------------------------*/
int main() {
	// local variables
	int a{};
	int b{};
	char c{};

	// present user with menu options, refactor into own function later
	std::cout << "Select number to choose operation:" << std::endl;

	while (c != '3') {
		std::cout << "1. Calculate number of permutations" << std::endl;
		std::cout << "2. Calculate number of combinations" << std::endl;
		std::cout << "3. Quit program" << std::endl;
		std::cout << "\n>> ";
		std::cin >> c;

		switch (c)
		{
		case '1':
			std::cout << "Enter number of objects in the set (max = 20): ";
			std::cin >> a;
			std::cout << "Enter number in sample: ";
			std::cin >> b;
			std::cout << permutation(a, b) << '\n' << std::endl;
			break;
		case '2':
			std::cout << "Enter number of objects in the set (max = 20): ";
			std::cin >> a;
			std::cout << "Enter number in sample: ";
			std::cin >> b;
			std::cout << combination(a, b) << '\n' << std::endl;
			break;
		case '3':
			std::cout << "Good-bye." << std::endl;
			break;
		default:
			std::cout << "Input not recognized" << std::endl;
			std::cout << "Try again: Please enter 1, 2, or 3\n" << std::endl;
			break;
		}
	}
	return 0;
}

/*--------------------------------------------------*/
/*Function definitions*/

int permutation(int object, int sample) {
	/*Calculate number of possible permutations*/
	unsigned long long int numerator = factorial(object);
	unsigned long long int denominator = factorial(object - sample);
	return (numerator / denominator);
}

int combination(int object, int sample) {
	/*Calculate number of possible combinations*/
	unsigned long long int numerator = permutation(object, sample);
	unsigned long long int denominator = factorial(sample);
	return (numerator / denominator);
}

unsigned long long int factorial(int x) {
	/*Calculate factorial of argument*/
	unsigned long long int product = 1;
	for (size_t i{ 1 }; i <= x; ++i)
		product *= i;
	return product;
}
