/*
 * Author: Nicholas Shortt
 * StudentID: 100630003
 *
 * Date: September 20, 2021
 *
 * Desc: Demo project for OOP3200 - F2021- Week 3
 *
 */

#include <iostream>

#include "Vector2D.h"


int main()
{
	try
	{
		float scalar = 1.5f;

		// Getting input from the console int our vector 2 object
		Vector2D origin;
		std::cin >> origin;

		// Output to the console from our vector 2 object
		std::cout << origin;

		Vector2D first(5.0f, 6.0f);

		origin = scalar * origin * 0.5f;

		std::cout << origin << std::endl;
	}
	catch (std::exception& exception)
	{
		std::cerr << exception.what() << " Ending Program" << std::endl;
	}
}

