#pragma once

class Vector2
{
public:
	float x;
	float y;
	Vector2() :x(0.f), y(0.f) {}
	Vector2(float _x, float _y) : x(_x), y(_y) {}
	void Normalize();
	Vector2 const operator+(const Vector2& other) const;
	Vector2 const operator-(const Vector2& other) const;
	Vector2 const operator*(const float& other) const;
	Vector2 const operator*(const Vector2& other) const;
	Vector2 const operator/(const float& other) const;  
	
};