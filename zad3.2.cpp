#include <iostream>
using namespace std;

int main() {
	int liczba;
	cout<< "podaj liczbe calkowita: "<<endl;
	cin >> liczba;
	
	if(liczba % 2 == 0){
		cout<<"Liczba jest parzysta."<<endl;
		
	}
	else if(liczba % 3 == 0){
		cout << "Liczba jest podzielna przez 3."<<endl;
		
	}
	else{
		cout << "Liczba nie jest ani parzysta, ani podzielna przez 3."<<endl;
	}
	return 0;
}