#include "Vector2.h"
#include <corecrt_math.h>

void Vector2::Normalize()
{
	float length = sqrtf(x * x + y * y);
	x /= length;
	y /= length;
}

Vector2 const Vector2::operator+(const Vector2& other) const
{
	return Vector2(x + other.x, y+ other.y);
}

Vector2 const Vector2::operator-(const Vector2& other) const
{
	return Vector2(x - other.x, y - other.y);;
}

Vector2 const Vector2::operator*(const float& other) const
{
	return Vector2(x * other, y * other);;
}

Vector2 const Vector2::operator*(const Vector2& other) const
{
	return Vector2(x * other.x, y * other.y);;
}

Vector2 const Vector2::operator/(const float& other) const
{
	return Vector2(x / other, y / other);;
}

