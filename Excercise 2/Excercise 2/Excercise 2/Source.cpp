#include <iostream>
using namespace std;


int main()
{
	cout << "This program will accept integers and display a string value based on the following algorithm" << endl;
	cout << "If the number is divisible by 3, Mustang will be displayed." << endl;
	cout << "If the number is divisible by 3, Bronco will be displayed." << endl;
	cout << "If the number is divisible by 3, MustangBronco will be displayed." << endl << endl; 
	

	char a;
	int num;
	char b;
	
	do
	{
		cout << "Enter an integer" << endl;
		cin >> num;
		while (cin.fail()) {
			cout << "Input not integer, please try again." << endl;
			cin.clear();
			cin.ignore(256,'\n');
			cin >> num;

		}
		if (num % 3 == 0 && num % 5 == 0) {
			cout << "MustangBronco" << endl;
		}
		else if (num % 3 == 0) {
			cout << "Mustang" << endl;
		}
		else if (num % 5 == 0) {
			cout << "Bronco" << endl;
		}
		else {
			cout << num << endl;

			
		}
		
		cout << "Would you like try another number? Type y to continue or press any other key to exit" << endl;
		cin >> a;
		

		
	} while (a == 'y');
	
	

	return 0;
}