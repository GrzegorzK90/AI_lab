// Network.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "CompassNetwork.h"

#include <iostream>
#include <string>


int main()
{
	const double x =-1;
	const double y = 1;

	CompassNetwork compass;
	auto pred = compass.predict(x, y);

	std::cout << "x: " << x << " y: " << y << std::endl;

	for (auto& dir :compass.CLASSES)
		std::cout << dir << "	  ";

	std::cout << std::endl;

	for (auto& p : pred)
		std::cout << p << " ";

	std::getchar();

    return 0;
}

