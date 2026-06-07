
#include <iostream>
using namespace std;
float suma(float a,  float b)
{
	return a + b;
}

float roznica(float a,  float b)
{
	return a - b;
}

float iloczyn(float a,  float b)
{
	return a * b;
}

float iloraz(float a,  float b)
{
	return a/b;
}

int main()
{
int wybor;
float a;
float b;
	do {

        cout << "\n=== menu kalkulatora ===" << endl;
        cout << "1. Suma" << endl;
        cout << "2. Roznica" << endl;
        cout << "3. Iloczyn" << endl;
        cout << "4. Iloraz" << endl;
        cout << "0. Zakoncz program" << endl;
        cout << "Wybierz opcje: ";
        
        
        cin >> wybor;

        
        if (wybor == 0) {
            cout << "Koniec programu. Do widzenia!" << endl;
            break; 
        }
        
        if (wybor >= 1 && wybor <= 4) {
        	
            cout << "Podaj pierwsza liczbe: ";
            cin >> a;
            cout << "Podaj druga liczbe: ";
            cin >> b;

            switch (wybor) {
                case 1:
                    cout << "Wynik: " << suma(a, b) << endl;
                    break;
                case 2:
                    cout << "Wynik: " << roznica(a, b) << endl;
                    break;
                case 3:
                    cout << "Wynik: " << iloczyn(a, b) << endl;
                    break;
                case 4:
                    if (b != 0) {
                        cout << "Wynik: " << iloraz(a, b) << endl;
                    } else {
                        cout << "Blad! Nie mozna dzielic przez zero!" << endl;
                    }
                    break;
            }
        } else {
            cout << "Niepoprawny wybor! Sprobuj ponownie." << endl;
        }

    } while (wybor != 0);

    return 0;
}
	

	
	
	
	
	
	
	
	
	
	
