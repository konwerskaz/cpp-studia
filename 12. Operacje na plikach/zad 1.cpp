#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    string imie, nazwisko;
    int wiek;

    
    ifstream plik("dane.txt");

    if (!plik.is_open())
    {
        cout << "Nie udalo sie otworzyc pliku dane.txt" << endl;
        cout << "Upewnij sie, ze plik znajduje sie w tym samym folderze co program" << endl;
        return 1; 
    }

    cout << "Dane zapisane w pliku i wyswietlone na ekranie: " << endl;
   
    while (plik >> imie >> nazwisko >> wiek)
    {
        cout << "Imie: " << imie 
             << ", Nazwisko: " << nazwisko 
             << ", Wiek: " << wiek << endl;
    }

    plik.close();

    return 0;
}