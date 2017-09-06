#pragma once
#include "Product.h"

class Car : Product
{
public:
	Car();
	~Car();

	// 通过 Product 继承
	virtual Product & createProduct() override;

	// 通过 Product 继承
	virtual void show() override;
};

