#include "GameObject.h"

std::weak_ptr<GameObject> GameObject::GetChild(const std::string& name) {
	for (auto child : _children) {
		if (auto go = child.lock()) {
			if (go->name == name) {
				return go;
			}
		}
	}

	// Child not found. Returning null weak_ptr
	return std::weak_ptr<GameObject>();
}

void GameObject::AddChild(std::weak_ptr<GameObject> child) {
	_children.push_back(child);
}