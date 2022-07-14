#pragma once
class Meal
{
private:
	int mealNo;
	char Description[20];
	double price;

public:
	Meal();//Constructor
	void setDetails(int no, char pDesc[]);
	void setPrice(double pPrice);//Parameter
	double getPrice();//Method

	~Meal();//Destructor
};