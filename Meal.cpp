#include "Meal.h"
#include<cstring>
#include<iostream>

using namespace std;

Meal::Meal()
{
	mealNo = 0;
	strcpy(Description, " ");
}

void Meal::setDetails(int no, char pDesc[])
{
	mealNo = no;
	strcpy(Description, pDesc);
}

void Meal::setPrice(double pPrice)
{
	price = pPrice;
}

double Meal::getPrice() 
{
	return price;
}

Meal::~Meal()
{
}

