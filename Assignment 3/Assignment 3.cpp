// Assignment 3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	int x = 0, y = 0, z = 0;

	std::cout << "Please enter numbers for x and y:\n";
	std::cin >> x >> y;

	if (x > 0)
	{
		if (y > 0)
		{
			z = x;
			y = x + 1;
		}
		else
		{
			z = y;
		}

		z = z + 1;
	}
	else
	{
		y = x - 1;
		z = 2 * x;
	}
	
	std::cout << "x = " << x << "\ny = " << y << "\nz = "<< z;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
