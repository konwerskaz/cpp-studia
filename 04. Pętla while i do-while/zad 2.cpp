#include <iostream>
using namespace std;
int main(){
int n;
int i = 1;
int suma = 0;

cout << "Podaj liczbe N: " << endl;
cin >> n;
while(i <= n){
	
	suma = suma + i;
	i++;
	

	
}
cout << "Suma liczb naturalnych do " << n << ": " << suma << endl;


return 0;
}