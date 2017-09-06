#pragma once
#include "Product.h"

class Bus : Product
{
public:
	Bus();
	~Bus();

	// 通过 Product 继承
	virtual Product & createProduct() override;


	// 通过 Product 继承
	virtual void show() override;

};

