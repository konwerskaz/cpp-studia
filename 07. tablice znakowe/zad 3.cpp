#include <iostream>
#include <string>
#include <cstring>

using namespace std;


int main() {
char tekst[100];
char znak;
int dlugosc;
int licznik = 0;
int pozycje_wystapien[100];

	cout << "Podaj ciag znakow: ";
	cin.getline(tekst, 100);
	
	cout << "Podaj znak do zliczenia: ";
	cin >> znak;
	
dlugosc	= strlen(tekst);
	

	for(int i = 0; i < dlugosc; i++){
		if (tekst[i] == znak){
		    pozycje_wystapien[licznik] = i + 1;
		    licznik ++;
		}
		
		
		
	}

		cout << "Liczba wystapien znaku: " << licznik << endl;
		
		if(licznik > 0) {
        cout << "Pozycje wystapien: ";
        for(int j = 0; j < licznik; j++) {
            cout << pozycje_wystapien[j] << (j == licznik - 1 ? "" : ", ");
        }}


	return 0; 
	
	
}