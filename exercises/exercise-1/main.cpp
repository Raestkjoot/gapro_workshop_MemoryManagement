#include <iostream>

struct Vec2 {
	int x, y;
};

// Function declarations
void SetToZero();
void PrintPointerValue(int* ptr);
// TODO 1.3: Change parameters
void Swap(int x, int y);
// TODO 1.4: Change parameters
void Swap(Vec2 vec);

int main() {
	// __EXERCISE 1__
	std::cout << "__EXERCISE 1__\n";
	SetToZero();

	// __EXERCISE 2__
	std::cout << "__EXERCISE 2__\n";
	int val = 5;
	int* ptr = nullptr;
	PrintPointerValue(&val);
	PrintPointerValue(ptr);
	std::cout << "\n";

	// __EXERCISE 3__
	std::cout << "__EXERCISE 3__\n";
	int x = 3;
	int y = 7;
	// TODO 1.3: Pass in the addresses to the variables
	Swap(x, y);
	std::cout
		<< "(x, y) = (" << x << ", " << y << "). "
		<< "Should be: (7, 3). "
		<< "Test passed: " << ((x == 7 && y == 3) ? "True" : "False")
		<< "\n" << std::endl;

	// __EXERCISE 4__
	std::cout << "__EXERCISE 4__\n";
	Vec2 vec = { 2, 4 };
	// TODO 1.4: Pass in the addresses to the vector
	Swap(vec);
	std::cout
		<< "vec = (" << vec.x << ", " << vec.y << "). "
		<< "Should be: (4, 2). "
		<< "Test passed: " << ((vec.x == 4 && vec.y == 2) ? "True" : "False")
		<< "\n" << std::endl;
}

void SetToZero() {
	int x = 5;

	// TODO 1.1: Create an int* and use it to change x to 0.

	std::cout
		<< "x = " << x << ". "
		<< "Should be: 0. "
		<< "Test passed: " << (x == 0 ? "True" : "False")
		<< "\n" << std::endl;
}

void PrintPointerValue(int* ptr) {
	// TODO 1.2: Check if pointer is valid
	
	// TODO 1.2: print The address stored in the pointer, followed by the value pointed to.
	//       It should look something like this when done: 
	//       Address: 000000B3E3CFFD44, Value: 5.

	std::cout	
		<< "Address: " << "TODO" << ", "
		<< "Value: " << "TODO" << "."
		<< std::endl;
}

void Swap(int x, int y) {
	// TODO 1.3: Use pointers as parameters to make sure the changes are saved outside the function.
	int tmp;

	tmp = x;
	x = y;
	y = tmp;
}

void Swap(Vec2 vec) {
	// TODO 1.4: Use pointers as parameters to make sure the changes are saved outside the function.
	int tmp;

	tmp = vec.x;
	vec.x = vec.y;
	vec.y = tmp;
}