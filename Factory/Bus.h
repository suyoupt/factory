#pragma once
#include "Product.h"

class Bus : Product
{
public:
	Bus();
	~Bus();

	// ͨ�� Product �̳�
	virtual Product & createProduct() override;


	// ͨ�� Product �̳�
	virtual void show() override;

};

