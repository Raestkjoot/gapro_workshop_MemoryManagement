#pragma once

#include "Vec2.h"

#include <string>
#include <memory>
#include <vector>

class GameObject {
public:
	std::string name;
	Vec2 position;

	std::weak_ptr<GameObject> GetChild(const std::string& name);

private:
	void AddChild(std::weak_ptr<GameObject> child);

	std::weak_ptr<GameObject> _parent;
	std::vector<std::weak_ptr<GameObject>> _children;
};