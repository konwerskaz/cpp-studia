#include <iostream>
#include <string>

using namespace std;


struct Osoba {
    string imie;
    string nazwisko;
    int wiek;
};

int main()
{
    Osoba pracownik;
    pracownik.imie = "Jan";
    pracownik.nazwisko = "Kowalski";
    pracownik.wiek = 25;

    cout << "Dane przed modyfikacja:" << endl;
    cout << "Imie: " << pracownik.imie 
         << ", Nazwisko: " << pracownik.nazwisko 
         << ", Wiek: " << pracownik.wiek << endl;
    
    cout << endl; 

    pracownik.wiek = 30;

    cout << "Dane po modyfikacji:" << endl;
    cout << "Imie: " << pracownik.imie 
         << ", Nazwisko: " << pracownik.nazwisko 
         << ", Wiek: " << pracownik.wiek << endl;

    return 0;
}