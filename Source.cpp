#include <iostream>
#include <string>
using namespace std;
//swap

void goodSwap(int& x, int& y, int& z);

int main()

{
	// references
	int bankBalance = 300050;
	int hackedBalance = 605000;
	int langleyBalance = 2;
	cout << "\n\n\t\t***Check balances***\n\n";
	cout << "After the first transaction the balance for both accounts are....\n";
	cout << "The bank balance is: " << bankBalance << "\n";
	cout << "The terrorist balance is : " << hackedBalance << "\n\n";
	
	cout << "The hacked balance is....\n\n";
	goodSwap(bankBalance, hackedBalance);
	cout << "The bank balance is: " << bankBalance << "\n";
	cout << "The terrorist balance is : " << hackedBalance << "\n\n";

	cout << "\n\n\t\t***Goodbye***\n\n";
	return 0;
}

void goodSwap(int& bankBalance, int& hackedBalance, int& langleyBalance)
{
	int temp = bankBalance;
	bankBalance = hackedBalance;
	hackedBalance = temp;
	hackedBalance = langleyBalance;

}
