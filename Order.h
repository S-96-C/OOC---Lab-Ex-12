#pragma once
#include "Meal.h"
class Order
{
private:
	int orderID;
	Meal *meals;
	int count;
	int maxSize;

public:
	Order(int pID, int size);
	void addItem(int no, char name[], double pPrice);
	double calTotPrice();
	~Order();

};

