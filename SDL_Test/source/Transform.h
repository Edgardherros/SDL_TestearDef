#pragma once
#include "Vector2.h"

class Transform
{
public:
	Vector2 position;
	float rotation;
	Vector2 scale;
	Vector2 size;
	Transform() : position(Vector2(0.0f, 0.0f)), rotation(0.0f), scale(Vector2(1.0f, 1.0f)), size (Vector2(100.f, 100.f)) {}

	Transform(Vector2 _position, float _rotation, Vector2 _scale)
		: position(_position), rotation(_rotation), scale(_scale) {}

};