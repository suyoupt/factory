#include "stdafx.h"
#include "Car.h"



Car::Car()
{
}


Car::~Car()
{
}

Product & Car::createProduct()
{
	return (*new Car());
}

void Car::show()
{
	std::cout << "car" << std::endl;
}
