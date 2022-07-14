#include<iostream>
#include "Order.h"

using namespace std;

int main()
{
	Order or1(100, 3);

	or1.addItem(102, (char*) "Burger", 550.00);
	or1.addItem(114, (char*) "Sandwitch", 390.00);
	or1.addItem(215, (char*) "Fish&chips", 470.00);

	cout << "total Rs. " << or1.calTotPrice() << endl;

	return 0;
}