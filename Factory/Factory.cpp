// Factory.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "Factory.h"
#include "Bus.h"
#include "Car.h"


int main()
{
	Factory::RegisterProduct("car", (Product*) new Car());
	Factory::RegisterProduct("bus", (Product*) new Bus());

	Bus b;
	Car c;

	Product *p1 = Factory::createProduct("car");
	Product *p2 = Factory::createProduct("bus");
	
	p1->show();
	p2->show();

    return 0;
}


std::map<std::string, Product*> Factory::registration;

Factory::Factory()
{
}


Factory::~Factory()
{
}

Product * Factory::createProduct(std::string type)
{
	auto found = registration.find(type);
	if (found != registration.end())
	{
		return &registration[type]->createProduct();
	}
	
	return nullptr;
}

void Factory::RegisterProduct(std::string type, Product * p)
{
	registration[type] = p;
}


