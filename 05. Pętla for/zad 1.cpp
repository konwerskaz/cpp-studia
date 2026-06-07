#include <iostream>
using namespace std;

int main(){
int n;
int suma = 0;

cout << "Podaj liczbe n: " << endl;
cin >> n;

for(int i = 1; i <=n; i++){
	suma = suma + i;
} 
	
	cout << "Suma liczb od 1 do " << n << " wynosi: " << suma;
	return 0;
}