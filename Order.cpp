#include "Order.h"
#include <iostream>
using namespace std;

Order::Order(int pID, int size)
{
	orderID = pID;
	maxSize = size;
	meals = new Meal[size];
	count = 0;
}

void Order::addItem(int no, char name[], double pPrice)
{
	if (count < maxSize)
	{
		meals[count].setDetails(no, name);
		meals[count].setPrice(pPrice);
		count++;
	}
	else
		cout << "Cannot enter anyone items " << endl;
}

double Order::calTotPrice()
{
	double total = 0;

	for (int i = 0; i < count; i++)
	{
		total += meals[i].getPrice();
	}

	return total;
}

Order::~Order()
{
}