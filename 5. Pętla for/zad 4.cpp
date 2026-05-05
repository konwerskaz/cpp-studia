#include <iostream>
using namespace std;

int main(){
int wiersze;
int kolumny;

cout << "Podaj liczbe wierszy: " << endl;
cin >> wiersze;

cout << "Podaj liczbe kolumn :" << endl;
cin >> kolumny;
int macierz[wiersze][kolumny];
int aktualna_liczba = 1;

for(int i = 0; i < wiersze; i++){
	for(int j = 0; j < kolumny; j++){
	
		macierz[i][j] = aktualna_liczba;
		aktualna_liczba += 2;
		}}
for (int i = 0; i < wiersze; i++) {
        for (int j = 0; j < kolumny; j++) {
            cout << macierz[i][j] << "\t";
        }
        cout << endl; 
    }

return 0;
}