#pragma once
#ifndef __VECTOR_2D__
#define __VECTOR_2D__

#include <string>

class Vector2D
{
public:
	// CONSTRUCTOR(S)
	Vector2D();
	Vector2D(float value);
	Vector2D(float x, float y);

	// COPY CONSTRUCTOR
	Vector2D(const Vector2D& vec2D);

	// DESTRUCTOR
	~Vector2D();

	// ACCESSORS
	float GetX() const;
	float GetY() const;

	// MUTATORS
	void SetX(float x);
	void SetY(float y);
	void Set(float x, float y);

	// PUBLIC METHODS
	std::string ToString() const;

	// PUBLIC STATIC METHODS (Public Class Functions that are Static)

private:
	// ATTRIBUTES
	float m_x{};
	float m_y{};

	// PRIVATE METHODS
};

#endif /* (__VECTOR_2D__) */

