#include "Vector2D.h"

Vector2D::Vector2D()
{
	Set(0.0f, 0.0f);
}

Vector2D::Vector2D(const float value)
{
	Set(value, value);
}

Vector2D::Vector2D(const float x, const float y)
{
	Set(x, y);
}

Vector2D::Vector2D(const Vector2D& vec2D)
{
	Set(vec2D.GetX(), vec2D.GetY());
}

Vector2D::~Vector2D()
= default;

Vector2D Vector2D::operator=(const Vector2D& rhs_vector)
{
	Set(rhs_vector.GetX(), rhs_vector.GetY());
	return *this;
}

float Vector2D::GetX() const
{
	return m_x;
}

float Vector2D::GetY() const
{
	return m_y;
}

void Vector2D::SetX(const float x = 0.0f)
{
	m_x = x;
}

void Vector2D::SetY(const float y = 0.0f)
{
	m_y = y;
}

void Vector2D::Set(const float x = 0.0f, const float y = 0.0f)
{
	SetX(x);
	SetY(y);
}

std::string Vector2D::ToString() const
{
	std::string outputString;
	outputString += "(" + std::to_string(GetX()) + ", " + std::to_string(GetY()) + ")";
	return outputString;
}
