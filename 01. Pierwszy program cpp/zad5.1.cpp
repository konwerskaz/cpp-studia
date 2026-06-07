#include <iostream>
using namespace std;

int main() {
	int a;
	int b;
	
	cout << "Podaj pierwsza liczbe calkowita: ";
	cin >> a;
	cout << "podaj deuga liczbe calkowita: ";
	cin >> b;
	cout << "suma: " << a + b << endl;
	cout << "roznica: " << a - b << endl;
	cout << "iloraz: " << a / b << endl;
	cout << "Reszta z dzielnia: " << a % b;
	
		return 0;
}