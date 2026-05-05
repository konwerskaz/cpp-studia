#include <iostream>
using namespace std;

int main() {
	
int tab[5];
int suma = 0;

cout << "Wprowadz 5 liczb calkowitych: " << endl;
	
	for(int i = 0; i < 5; i++){
		cin >> tab[i];
	}
	
	cout << "Liczby ujemne zamienione na 0: ";
	for(int i = 0; i < 5; i++){
		if(tab[i] < 0){
			tab[i] = 0;
		
		}
		cout << tab[i];
		if (i < 4) {
            cout << ", ";
        }
			
	}
	
	
	
return 0;
}