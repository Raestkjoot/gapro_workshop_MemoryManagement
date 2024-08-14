#include "Game.h"

#include <iostream>

std::weak_ptr<GameObject> Game::FindGameObejct(const std::string& name) {
	auto search = _gameObjects.find("Player");

	if (search != _gameObjects.end()) {
		return search->second;
	} else {
		return std::weak_ptr<GameObject>();
	}
}

std::weak_ptr<GameObject> Game::CreateGameObject(const std::string& name) {
	// TODO 3.4: Create a new GameObject on the heap using shared_ptr
	std::shared_ptr<GameObject> gameObject = std::make_shared<GameObject>();

	// TODO 3.4: Add the new GameObject to _gameObjects
	// Hint: https://en.cppreference.com/w/cpp/container/map/operator_at
	_gameObjects[name] = gameObject;

	// TODO 3.4: Return the new GameObject
	return gameObject;
}

bool Game::Test() {
	if (auto player = FindGameObejct("Player").lock()) {
		std::cout << "Test passed.\n";
		return true;
	}
	std::cout << "Test failed: No player found.\n";
	return false;
}
