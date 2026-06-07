#include <iostream>
using namespace std;
int main(){
int a;
int b;
char wybor;

cout << "Podaj pierwsza liczbe: " << endl;
cin >> a;
cout << "Podaj druga liczbe: " << endl;
cin >> b;
cout << "Podaj znak dzialania (+, -, *, /): " << endl;
cin >> wybor;

switch(wybor)
	{
		case '+':
			cout << "Wynik: " <<  a + b;
			break;
		case '-':
			cout << "Wynik: " <<  a - b;
			break;
		case '*':
			cout << "Wynik: " <<  a * b;
			break;
		case '/':
			cout << "Wynik: " <<  a / b;
			break;
		default:
		cout << "Nieprawidlowy znak!" << endl;
		break;
	}
    return 0;
}