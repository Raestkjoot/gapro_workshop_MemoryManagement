#include "Game.h"
#include "Vec2.h"
#include "GameObject.h"
#include "ExerciseFunctions.h"

#include <iostream>
#include <memory>
#include <vector>

int main() {
	// __EXERCISE 1__
	std::cout << "__EXERCISE 1__\n";
	SetToZero();
	std::cout << std::endl;

	// __EXERCISE 2__
	std::cout << "__EXERCISE 2__\n";
	// TODO 3.2: Make a shared pointer with its value = 5 and pass it to the PrintPointerValue function
	int val = 10;
	PrintPointerValue(&val);
	std::cout << std::endl;

	// __EXERCISE 3__
	std::cout << "__EXERCISE 3__\n";
	std::shared_ptr<int> ptr = std::make_shared<int>(5);
	SetToZeroAndPrint(ptr);
	std::cout << std::endl;

	// __EXERCISE 4__
	std::cout << "__EXERCISE 4__\n";
	Game game;
	auto player = game.CreateGameObject("Player");
	game.Test();
	std::cout << std::endl;

	// __EXERCISE 5__
	std::cout << "__EXERCISE 5__\n";
	// TODO 3.5: Change player position to 3, 7 and print it to the terminal

	std::cout << "Player position = "
		<< "TODO"
		<< "\n";
	// printing the player position would spoil too much of the solution
	// so I'm just printing TODO here.
	std::cout << std::endl;
}