#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

	int currentSalary = 0;
	double newSalary = 0;

	cout << fixed << setprecision(0);

	cout << "Please enter your current salary or type -1 to exit: ";
	cin >> currentSalary;

	//Sentinal Value exits
	if (currentSalary == -1)
		exit;

	//Multiplies current salary by each percent and displays them
	else
	{
		newSalary = currentSalary + (currentSalary * 0.03);
		cout << "Your new salary with a 03% raise is: $" << newSalary << endl;
		newSalary = currentSalary + (currentSalary * 0.04);
		cout << "Your new salary with a 04% raise is: $" << newSalary << endl;
		newSalary = currentSalary + (currentSalary * 0.05);
		cout << "Your new salary with a 05% raise is: $" << newSalary << endl;
		newSalary = currentSalary + (currentSalary * 0.06);
		cout << "Your new salary with a 06% raise is: $" << newSalary << endl;
	}
}