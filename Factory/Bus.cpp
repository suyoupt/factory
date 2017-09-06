#include "stdafx.h"
#include "Bus.h"


Bus::Bus()
{
}


Bus::~Bus()
{
}

Product & Bus::createProduct()
{
	return (*new Bus());
}

void Bus::show()
{
	std::cout << "Bus" << std::endl;

}
