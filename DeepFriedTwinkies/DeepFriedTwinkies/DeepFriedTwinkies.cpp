#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "Welcome to Deep Fried Twinkie" << endl;

	double dollar = 1.0;
	double quarter = 0.25;
	double dime = 0.10;
	double nickel = 0.05;
	double amount = 0;
	double change = 0;
	char choice;

	do {

		cout << "Enter money: $ for dollar, q for quarter, d for dime, n for nickel.";

		cin >> choice;

		if (choice == '$')
		{
			amount = amount + dollar;
		}
		else if (choice == 'q')
		{
			amount = amount + quarter;
		}
		else if (choice == 'd')
		{
			amount = amount + dime;
		}
		else if (choice == 'n')
		{
			amount = amount + nickel;
		} 
		else
		{
			cout << "Invalid input. Try again" << endl;
		}

	
		cout << "Your current amount is: $" << amount << endl;
	
	} while (amount < 3.50);

	//if-else statement used to calculate change
	if (amount > 3.50)
	{
		change = amount - 3.50;
		cout << "Your change is: $" << change << endl;
	}
	else {
		cout << "No change due" << endl;
	}

	cout << "Have a nice day." << endl;

}