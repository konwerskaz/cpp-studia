#include <iostream>
using namespace std;
int main(){
int c;
char wybor;

cout << "Podaj temperature w stopniach Celsjusza: " << endl;
cin >> c;
cout << "Wybierz jednostke docelowa (K - Kelvin, F - Fahrenheit): " << endl;
cin >> wybor;

switch(wybor)
	{
		case 'K':
		case 'k':
			cout << "Temperatura w  stopniach Kelvina: " <<  c + 273.15;
			break;
		case 'F':
		case 'f':
			cout << "Temperatura w stopniach Fahrenheita: " << (c * 1.8) + 32;
			break;
		default:
			cout << "Nieprawidlowa wartosc" << endl;
		break;
	}
    return 0;
}