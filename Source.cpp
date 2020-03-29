#include <iostream>
#include <string>
using namespace std;
//swap

void goodSwap(int& x, int& y, int& z);
void badSwap(int& x, int& y, int& z);
int main()

{
	// references
	int bankBalance = 900050;
	int hackedBalance = 605000;
	int langleyBalance = 2;
	cout << "\n\n\t\t***Check balances***\n\n";
	cout << "After the first transaction the balance for both accounts are....\n";
	cout << "The bank balance is: " << bankBalance << "\n";
	cout << "The terrorist balance is : " << hackedBalance << "\n\n";
	
	cout << "The hacked balance is....\n\n";
	goodSwap(bankBalance, hackedBalance, langleyBalance);
	cout << "The bank balance is: " << bankBalance << "\n";
	cout << "The terrorist balance is : " << hackedBalance << "\n\n";
	badSwap(bankBalance, hackedBalance, langleyBalance);
	cout << "The bank balance is: " << bankBalance << "\n";
	cout << "The terrorist balance is : " << langleyBalance << "\n\n";
	cout << "\n\n\t\t***Goodbye***\n\n";
	return 0;
}

void goodSwap(int& bankBalance, int& hackedBalance, int& langleyBalance)
{
	int temp = bankBalance;
	bankBalance = hackedBalance;
	hackedBalance = temp;


}
void badSwap(int& bankBalance, int& hackedBalance, int& langleyBalance)
{
	int temp = bankBalance;
	bankBalance = hackedBalance;
	hackedBalance = temp;
	hackedBalance = langleyBalance;

}
