#include "Pizza.h"
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
void printReceipt(Custom);
void order();
void menu();
int main()
{
	int count;
	int cookTime;
	cout << "How many Pizzas would you like to Order?";
	cin >> count;
	for(int i= 0; i<count; i++)
	{
		order();
	}
	cookTime = 5 * count + 5;
	cout << endl;
	cout << "Thanks for Ordering\n";
	cout << "Your order will be Ready in " << cookTime << " minutes!\n";
	return 0;
};
void order()
{
	char size = '0';
	char ifNote;
	int topping1, topping2;
	string note;
	do {
		if (size == '0')
		{
			cout << "Choose pizza size: \n";
			cout << "( S, M, or L) \n";
			cin >> size;
		}
		if (size != 's' && size != 'S' && size != 'm' && size != 'M' && size != 'l' && size != 'L')
		{
			cout << "Error: Invalid Size Input\n";
			size = '0';
		}
	} while (size == '0');
	menu();
	cin >> topping1;
	cout << "Enter Second topping: ";
	cin >> topping2;
	cout << "Any Note? (Y/N)\n";
	cin >> ifNote;
	while (ifNote == 'y' || ifNote == 'Y')
	{
		cout << "Enter Note : \n";
		cin.ignore();
		getline(cin, note);
		break;
	}
	Custom p(size,topping1, topping2, note);
	cout << endl;
	return printReceipt(p);
	

}
void menu()
{
	cout << "Choose your 2 toppings: \n";
	cout << "(Enter topping number)\n";
	cout << endl;
	cout << "  Meat ($2.00):\n";
	cout << endl;
	cout << "   1. pepperoni\n";
	cout << "   2.bacon\n";
	cout << "   3.sausage\n";
	cout << endl;
	cout << "  Veggie ($1.00):\n";
	cout << endl;
	cout << "   4.mushrooms\n";
	cout << "   5.peppers\n";
	cout << "   6.onions\n";
	cout << "   7.olives\n";
	cout << "Enter 0 to void topping: ";
}
void printReceipt(Custom p) 
{
	
	cout << "Pizza Size: " << p.getSize() << endl;
	cout << setprecision(2) << fixed << showpoint;
	cout << "Topping one:" << p.getTopping1() << endl;
	cout << "Topping two:" << p.getTopping2() << endl;	
	cout << "Price:"
		<< p.getPrice() << endl;
	p.setTotalPrice(p.getPrice());
	cout << "Note: "
		<< p.getNote() << endl;
	cout << endl << endl;
	cout << "Total Price:"
		<< p.getTotalPrice() << endl;
}
