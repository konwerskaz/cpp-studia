#include <iostream>
using namespace std;

int main() {
	int a;
	int b;
	
	cout << "Podaj pierwsza liczbe: " << endl;
	cin >> a;
	cout << "Podaj druga liczbe: " <<endl;
	cin >> b;
	int suma = a + b;
	cout << "suma: " << suma  << endl;
	if(suma % 2 == 0){
		cout << "Suma jest liczba parzysta" << endl;
	}
	else{
		cout<< "Suma jest liczba nieparzysta" << endl;
		
	}
		
	return 0;
}