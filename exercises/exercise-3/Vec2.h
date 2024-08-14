#pragma once

#include <iostream>

struct Vec2 {
	int x;
	int y;

	Vec2(int x = 0, int y = 0)
		: x(x), y(y) {
	}

	inline Vec2 operator=(const Vec2& other) {
		x = other.x;
		y = other.y;
		return *this;
	}

	inline Vec2 operator+(const Vec2& other) const {
		return {
			x + other.x,
			y + other.y
		};
	}

	inline Vec2 operator+=(const Vec2& other) {
		x += other.x;
		y += other.y;
		return *this;
	}
};

inline std::ostream& operator<<(std::ostream& stream, const Vec2& vec) {
	return stream << "(" << vec.x << ", " << vec.y << ")";
}