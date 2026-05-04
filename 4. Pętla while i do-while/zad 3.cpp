#include <iostream>
using namespace std;
int main(){
char wybor;
int liczba;
   do{
		cout << "Podaj liczbe: " << endl;
		cin >> liczba;
		cout << "Wprowadziles liczbe: " << liczba << endl;
		cout << "Czy chcesz wprowadzic kolejna liczbe? (t/n):" << endl;
		cin >> wybor;

}while(wybor == 't' || wybor == 'T');

cout << "Dziekuje za wprowadzenie liczb!" << endl;

   return 0;
}