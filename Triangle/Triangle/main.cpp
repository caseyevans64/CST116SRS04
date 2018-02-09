// Triangle.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <cmath>

int main()
{
	
	double side1{};
	double side2{};
	double side3{};

	double angle1{};
	double angle2{};
	double andle3{};

	int option{};
	 
	std::cout << "Pick a triangle configurations and enter option below : 1-AAA, 2-AAS, 3-ASA, 4-SAS, 5-SSA, 6-SSS" << std::endl;
	std::cin >> option;
	
	const int AAA{ 1 };
	const int AAS{ 2 };
	const int ASA{ 3 };
	const int SAS{ 4 };
	const int SSA{ 5 };
	const int SSS{ 6 };

	switch ( option )
	{
	case AAA : 
		std::cout << "Enter two angles" << std::endl;
		std::cin >> angle1 >> angle2;
		std::cout << "angle3=" << 180 - (angle1 + angle2) << std::endl;
		if (180 <= angle1 + angle2)
			std::cout << "Problem is unsolvable (Angles added together must equal 180 degrees)" << std::endl;
			break;

	case AAS:
        std::cout << "Enter two angles and a side" << std::endl;
		std::cin >> angle1 >> angle2 >> side1;
		std::cout << "side2=" << side1 / sin(angle1) << "side3=" << side2 / sin(angle2) << std::endl; 
		if (180 <= angle1 + angle2)
			std::cout << "Problem is unsolvable" << std::endl;
		   break;

	default : 
		std::cout << "invalid option try agian" << std::endl;
		break;
	}
	 
		
		
    return 0;
}

