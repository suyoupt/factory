#pragma once
#include "Product.h"

class Car : Product
{
public:
	Car();
	~Car();

	// ͨ�� Product �̳�
	virtual Product & createProduct() override;

	// ͨ�� Product �̳�
	virtual void show() override;
};

