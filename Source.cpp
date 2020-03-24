#include <iostream>
#include <string>
using namespace std;

int main()

{
	cout << "\n\n\t\t***The Refs***\n\n ";
	//before you can make a reference you need to make a variable to refer to
	int age = 21;
	cout << "\nThe customer age using a variable is " << age << endl;

	// make your first refj
	int& r_age = age;
	cout << "\nThe customer age using a reference is " << r_age << endl;
	age = 56;
	cout << "\nThe customer age using a variable is " << age << endl;
	int& r_age = age;
	cout << "\nThe customer age using a reference is " << r_age << endl;
	

	return 0;
}