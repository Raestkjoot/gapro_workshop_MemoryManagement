#pragma once

#include "GameObject.h"

#include <memory>
#include <string>
#include <map>

class Game {
public:
	std::weak_ptr<GameObject> FindGameObejct(const std::string& name);
	std::weak_ptr<GameObject> CreateGameObject(const std::string& name);
	bool Test();

private:
	std::map<std::string, std::shared_ptr<GameObject>> _gameObjects;
};