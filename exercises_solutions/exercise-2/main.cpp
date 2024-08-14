#include <iostream>
#include <vector>
#include <algorithm>

// Function declarations
// TODO 2.1: Change parameter to reference
void MinMax(std::vector<int>& numbers, int& min, int& max);
// TODO 2.2: Change parameters to references
void Swap(int& x, int& y);

int main() {
	// __EXERCISE 1__
	std::cout << "__EXERCISE 1__\n";
	std::vector<int> numbers = { 3, 10, 15, 21, 42, 30, 100, 22, 160, 12 };
	int min = -1;
	int max = -1;
	MinMax(numbers, min, max);
	std::cout
		<< "(min, max) = (" << min << ", " << max << "). "
		<< "Should be: (3, 160). "
		<< "Test passed: " << ((min == 3 && max == 160) ? "True" : "False")
		<< "\n" << std::endl;

	// __EXERCISE 2__
	std::cout << "__EXERCISE 2__\n";
	Swap(min, max);
	std::cout
		<< "(min, max) = (" << min << ", " << max << "). "
		<< "Should be: (160, 3). "
		<< "Test passed: " << ((min == 160 && max == 3) ? "True" : "False")
		<< "\n" << std::endl;
}

void MinMax(std::vector<int>& numbers, int& min, int& max) {
	// TODO 2.1: Change parameters to references

	auto minIter = std::min_element(numbers.begin(), numbers.end());
	auto maxIter = std::max_element(numbers.begin(), numbers.end());

	// TODO 2.1: Set min and max to the values pointed to by minIter and maxIter
	min = *minIter;
	max = *maxIter;

	std::cout << "Inside function: (min, max) = (" << *minIter << ", " << *maxIter << ").\n";
}

void Swap(int& x, int& y) {
	// TODO 2.2: Use references to swap the values in x and y outside the function.
	int tmp = x;
	x = y;
	y = tmp;
}