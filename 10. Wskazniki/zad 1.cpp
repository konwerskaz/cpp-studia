#include <iostream>
using namespace std;

int main()
{
	int a = 5;
	int b =	10;
		
	int *wskaznik1 = &a;
	int *wskaznik2 = &b;
	
	cout << "Przed modyfikacja: " << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
		
	*wskaznik1 = 3 * 5;
	*wskaznik2 = 15 + 5;
	
	cout << "Po modyfikacji: " << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	return 0;
}