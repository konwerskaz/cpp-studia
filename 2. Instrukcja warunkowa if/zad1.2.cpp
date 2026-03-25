#include <iostream>
using namespace std;

int main() {
	float wynik;
	
	cout << "Podaj wynik z egzaminu(liczba punktow): " << endl;
	cin >> wynik;
	
	if((wynik > 100) || (wynik < 0)) {
		cout << "Wprowadzono nieprawidlowe dane" << endl;
	}
		else{
		
		if(wynik == 100){
		
			cout<< "Ocena: celujaca";
		}
		else if ((wynik >= 85) && (wynik <= 99)){
		
			cout<< "Ocena: bardzo dobra";
		}
		else if ((wynik >= 70) && (wynik <= 84)){
			cout<< "Ocena: dobra";
		}
		else if ((wynik >= 50) && (wynik <= 69)){
			cout<< "Ocena: dostateczna";
		}
		else if ((wynik >= 0) && (wynik <= 49)){
			cout<< "Ocena: niedostateczna";
		}
	}
	
	return 0;}