#include <iostream>
using namespace std;

int main() {
	string imie;
	int wiek;
	
	cout << "Podaj imie: " << endl;
	cin >> imie;
	cout << "Podaj wiek: " <<endl;
	cin >> wiek;
	
	cout<< "Witaj, " << imie <<"! Masz " << wiek << " lat." <<endl;
	
	return 0;
}