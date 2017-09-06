#pragma once
#include "Product.h"
#include "Car.h"
#include "Bus.h"
#include <map>

class Factory
{
public:
	static std::map<std::string, Product*> registration;

public:
	Factory();
	~Factory();
	// Product createProduct();
	static Product *createProduct(std::string type);
	static void RegisterProduct(std::string type, Product *p);
	
};

