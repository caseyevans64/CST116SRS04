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
	double angle3{};

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
        std::cout << "Enter two angles and a side in that order" << std::endl;
		std::cin >> angle1 >> angle2 >> side1;
		std::cout << "angle3=" << 180 - (angle1 + angle2) << std::endl;
		std::cout << "side2=" << side1 / (sin(angle2) *3.14/180) * (sin(angle1)*3.14 / 180) << "side3=" << side2 / (sin(angle1) *3.14 / 180) * (sin(angle2)*3.14 / 180) << std::endl;
		if (180 <= angle1 + angle2) 
			std::cout << "Problem is unsolvable" << std::endl;
		   break;

	case ASA:

		std::cout << "Enter an angle, side, and then an angle" << std::endl;
		std::cin >> angle1 >> side1 >> angle2;
		std::cout << "angle3=" << 180 - (angle1 + angle2) << std::endl;
		std::cout << "side2=" << side1 / (sin( 180 - (angle1 + angle2))*3.14 / 180) * (sin(angle1)*3.14 / 180) << std::endl;
		std::cout << "side3=" << side1 / (sin( 180 - (angle1 + angle2))*3.14 / 180) * (sin(angle2)*3.14 / 180) << std::endl;
	
	case SAS:

		std::cout << "Enter side, angle then side" << std::endl;
		std::cin >> side1 >> angle3 >> side2;
		std::cout << "side3=" << sqrt(side1*side1 + side2 * side2 - 2 * side1*side2*(cos(angle3)) *3.14 / 180) << std::endl;
		std::cout << "angle1=" << (asin(sin(angle3) *3.14 / 180) * side1 / side3) << std::endl;
		std::cout << "angle2=" << 180 - (angle3 + (asin(sin(angle3) *3.14 / 180) * side1 / side3)) << std::endl;

	case SSA:
		std::cout << "Enter side, side, and then angle" << std::endl;
		std::cin >> side2 >> side3 >> angle2;
		std::cout << "angle3=" << (asin(sin(side3)*3.14 / 180) * (sin(angle2) / side2) *3.14 / 180) << std::endl;
		std::cout << "angle1=" << ( 180 - ( angle2 + (asin(sin(side3) *3.14 / 180) * (sin(angle2))*3.14 / 180) / side2)) << std::endl;
		std::cout << "side1=" << sin( 180 - (angle2 + (asin (sin(side3))*3.14 / 180) * (sin(angle2)))*3.14 / 180) * side2 / (asin(sin(side3)*3.14 / 180) * (sin(angle2)*3.14 / 180) / side2) << std::endl;

	case SSS:



	default: 
		std::cout << "invalid option try agian" << std::endl;
		break;
	}
	 
		
		
    return 0;
}

