#include <iostream>
using namespace std;
int main(){
char rodzaj;
int godziny;

cout << "Podaj rodzaj pojazdu (S - samochod, M - motocykl, A - autobus): " << endl;
cin >> rodzaj;


cout << "Podaj ilosc godzin: " << endl;
cin >> godziny;


switch(rodzaj)
	{
	
		case 's':
		case 'S':
			cout << "Oplata za parkowanie: " << godziny * 5 << " zl ";
			 
			break;
		case 'm':
		case 'M':
			cout << "Oplata za parkowanie: " << godziny * 3 << " zl ";
			 
			break;
		case 'a':
		case 'A':
			cout << "Oplata za parkowanie: " << godziny * 10 << " zl ";
			 
			break;
		default:
			cout << "Nie ma takiej opcji; nieznany pojazd";
			
			break;
	}
return 0;
}