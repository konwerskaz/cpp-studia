#include <iostream>
using namespace std;

int main() {
	
int tab[2][3];
int macierz[3][2];

cout << "Podaj 6 liczb calkowitych do macierzy 2x3:" << endl;

for(int i = 0; i < 2; i++){
	for(int j = 0; j < 3; j++){
		cout << "Podaj liczbe dla wiersza " << i + 1 << ", kolumny " << j + 1 <<": ";
		cin >> tab[i][j];
	}
}
	
	
	for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            
            macierz[j][i] = tab[i][j];
        }
}	
        
        cout << "Transponowana macierz:" << endl;
	
	for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 2; j++) {
            
            cout << macierz[i][j] << "	";
        }
        cout << endl;
    }
        
	return 0;
}