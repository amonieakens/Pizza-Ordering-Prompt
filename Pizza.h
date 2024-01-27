#ifndef PIZZA_H
#define PIZZA_H
#include <iostream>
#include <string>
using namespace std;
class Pizza
{
protected:
	char sizeSymbol;
	string note, size;
	double price;
public:
	Pizza()
	{
		sizeSymbol = '0', note = "", price = 0;
	}
	Pizza(char s, string n)
	{
		sizeSymbol = s; note = n;
	}
	void setSize(char s)
	{
		sizeSymbol = s;
		
	}
	void setNote(string n)
	{
		note = n;
	}
	virtual string getSize() const
	{
		char s = sizeSymbol;
		string size;
		if (s == 's' || s == 'S')
		{
			size = "Small";
		}
		else if (s == 'm' || s == 'M')
		{
			size = "Medium";
		}
		else if (s == 'l' || s == 'L')
		{
			size = "Large";
		}
		return  size;
	}
	virtual double getPrice() const
	{
		char s = sizeSymbol;
		double price{};
		if (s == 's' || s == 'S')
		{
			price = 5.00;
		}
		else if (s == 'm' || s == 'M')
		{
			price = 7.00;
		}
		else if (s == 'l' || s == 'L')
		{
			price = 10.00;
		}
		return  price;
	}
	virtual string getNote() const
	{
		return note;
	}

};
class Custom : public Pizza
{
protected:
	int topping1, topping2;
	string toppingLabel1, toppingLabel2;
	double toppingPrice;
	static double totalPrice;

public:
	Custom() : Pizza()
	{
		topping1 = 0, topping2 = 0, toppingPrice = 0; totalPrice = 0;
	}
	Custom(char s, int t1, int t2, string n)
	{
		sizeSymbol = s; topping1 = t1; topping2 = t2; note = n;
	}
	void setTopping1(int t1)
	{
		topping1 = t1;
	}
	void setTopping2(int t2)
	{
		topping2 = t2;
	}
	void setTotalPrice(double p)
	{
		totalPrice += p;
	}
	string getTopping1() const
	{
		double toppingPrice{};
		string toppingLabel1{};

		switch (topping1)
		{
		case 1:
			toppingLabel1 = "pepperoni";
			toppingPrice = 2.00;
			break;
		case 2:
			toppingLabel1 = "bacon";
			toppingPrice = 2.00;
			break;
		case 3:
			toppingLabel1 = "sausage";
			toppingPrice = 2.00;
			break;
		case 4:
			toppingLabel1 = "mushrooms";
			toppingPrice = 1.00;
			break;
		case 5:
			toppingLabel1 = "peppers";
			toppingPrice = 1.00;
			break;
		case 6:
			toppingLabel1 = "onions";
			toppingPrice = 1.00;
			break;
		case 7:
			toppingLabel1 = "olives";
			toppingPrice = 1.00;
			break;
		default:
			toppingLabel1 = "";
			toppingPrice = 0.00;
			break;
		}
		return toppingLabel1;
	}
	string getTopping2() const
	{
		string toppingLabel2{};
		double toppingPrice{};
		switch (topping2)
		{
		case 1: 
			toppingLabel2 = "pepperoni";
			toppingPrice += 2.00;
			break;
		
		case 2: 
			toppingLabel2 = "bacon";
			toppingPrice += 2.00;
			break;
		
		case 3:
			toppingLabel2 = "sausage";
			toppingPrice += 2.00;
			break;
		
		case 4: 
			toppingLabel2 = "mushrooms";
			toppingPrice += 1.00;
			break; 
		
		case 5: 
			toppingLabel2 = "peppers";
			toppingPrice += 1.00;
			break;
		
		case 6: 
			toppingLabel2 = "onions";
			toppingPrice += 1.00;
			break;
		
		case 7: 
			toppingLabel2 = "olives";
			toppingPrice += 1.00;
			break;
		
		default: 
			toppingLabel2 = "";
			toppingPrice += 0.00;
			break; 
		}
		return toppingLabel2;
	}
	double getPrice() const
	{
		char s = sizeSymbol;
		double price{}, toppingPrice{};
		if (s == 's' || s == 'S')
		{
			price = 5.00;
		}
		else if (s == 'm' || s == 'M')
		{
			price = 7.00;
		}
		else if (s == 'l' || s == 'L')
		{
			price = 10.00;
		}
		
			switch (topping1)
			{
			case 1:
				//toppingLabel2 = "pepperoni";
				toppingPrice += 2.00;
				break;

			case 2:
				//toppingLabel2 = "bacon";
				toppingPrice += 2.00;
				break;

			case 3:
				//toppingLabel2 = "sausage";
				toppingPrice += 2.00;
				break;

			case 4:
				//toppingLabel2 = "mushrooms";
				toppingPrice += 1.00;
				break;

			case 5:
				//toppingLabel2 = "peppers";
				toppingPrice += 1.00;
				break;

			case 6:
				//toppingLabel2 = "onions";
				toppingPrice += 1.00;
				break;

			case 7:
				//toppingLabel2 = "olives";
				toppingPrice += 1.00;
				break;

			default:
				//toppingLabel2 = "";
				toppingPrice += 0.00;
				break;
			}
			switch (topping2)
			{
			case 1:
				//toppingLabel2 = "pepperoni";
				toppingPrice += 2.00;
				break;

			case 2:
				//toppingLabel2 = "bacon";
				toppingPrice += 2.00;
				break;

			case 3:
				//toppingLabel2 = "sausage";
				toppingPrice += 2.00;
				break;

			case 4:
				//toppingLabel2 = "mushrooms";
				toppingPrice += 1.00;
				break;

			case 5:
				//toppingLabel2 = "peppers";
				toppingPrice += 1.00;
				break;

			case 6:
				//toppingLabel2 = "onions";
				toppingPrice += 1.00;
				break;

			case 7:
				//toppingLabel2 = "olives";
				toppingPrice += 1.00;
				break;

			default:
				//toppingLabel2 = "";
				toppingPrice += 0.00;
				break;
			}
		
		price += toppingPrice;
		return  price;
	}
	double getTotalPrice() const
	{
		return totalPrice;
	}
};

double Custom::totalPrice = 0;

#endif PIZZA_H
