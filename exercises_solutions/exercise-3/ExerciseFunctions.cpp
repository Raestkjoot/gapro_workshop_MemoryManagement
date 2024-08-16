#include "ExerciseFunctions.h"

void SetToZero() {
	// TODO 3.1: Make x a unique_ptr<int>
	std::unique_ptr<int> x = std::make_unique<int>(5);

	std::cout
		<< "*x = " << *x << ". "
		<< "Should be: 5. "
		<< "Test passed: " << (*x == 5 ? "True" : "False")
		<< "\n";

	// TODO 3.1: Change x's value to 0
	*x = 0;

	std::cout
		<< "*x = " << *x << ". "
		<< "Should be: 0. "
		<< "Test passed: " << (*x == 0 ? "True" : "False")
		<< "\n";
}

void PrintPointerValue(std::shared_ptr<int> ptr) {
	// TODO 3.2: Change PrintPointerValue to take an std::shared_ptr<int> instead of int*

	std::cout
		<< "*ptr = " << *ptr << ". "
		<< "Should be: 5. "
		<< "Test passed: " << (*ptr == 5 ? "True" : "False")
		<< "\n";

	// TODO 3.2: Use ptr2 to change the value of ptr to 0.
	std::shared_ptr<int> ptr2 = ptr;
	*ptr2 = 0;

	if (ptr2) {
		std::cout
			<< "*ptr2 == *ptr: " << (*ptr2 == *ptr ? "True" : "False") << "\n"
			<< "*ptr2 = " << *ptr2 << ". "
			<< "Should be: 0. "
			<< "Test passed: " << (*ptr2 == 0 ? "True" : "False")
			<< "\n";
	}
	else {
		std::cout << "TODO\n";
	}
}

void SetToZeroAndPrint(std::weak_ptr<int> x) {
	// TODO 3.3: Change parameter to weak_ptr instead of shared_ptr and use it to set the value to 0 and print
	if (auto tmp = x.lock()) {
		*tmp = 0;

		std::cout << "value set to " << *tmp << "\n";
	}

}