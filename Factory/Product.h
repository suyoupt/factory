#pragma once
class Product
{
public:
	Product() {}
	~Product() {}
	virtual Product &createProduct() = 0;
	virtual void show() = 0;

};

