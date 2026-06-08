#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Osoba {
	string imie;
	string nazwisko;
    int wiek;
};

void WyswietlZawartoscPliku()
{
    ifstream plikDoOdczytu("dane.txt");
    string imie, nazwisko;
    int wiek;

    cout << "Dane w pliku po dopisaniu:" << endl;
    while (plikDoOdczytu >> imie >> nazwisko >> wiek)
    {
        cout << "Imie: " << imie 
            << ", Nazwisko: " << nazwisko 
             << ", Wiek: " << wiek << endl;
    }
    plikDoOdczytu.close();
}

int main()
{
    ifstream plikSprawdzajacy("dane.txt");
    if (!plikSprawdzajacy.good())
    {
    
        cout << "Plik dane.txt nie istnieje. Tworzenie pliku i zapis przykladowych danych" << endl;
        plikSprawdzajacy.close(); 

        ofstream plikZapis("dane.txt");
        if (plikZapis.is_open())
        {
            plikZapis << "Jan Kowalski 25" << endl;
            plikZapis << "Anna Nowak 30" << endl;
            plikZapis.close();
        }
    }
    else
    {
        plikSprawdzajacy.close();
    }

    char decyzja;
    cout << "Czy chcesz dodac nowa osobe? (t/n): ";
    cin >> decyzja;

    if (decyzja == 't' || decyzja == 'T')
    {
        Osoba nowaOsoba;
        cout << "Podaj imie: ";
        cin >> nowaOsoba.imie;
        cout << "Podaj nazwisko: ";
        cin >> nowaOsoba.nazwisko;
        cout << "Podaj wiek: ";
        cin >> nowaOsoba.wiek;


        ofstream plikDopisywanie("dane.txt", ios::app);
        if (plikDopisywanie.is_open())
        {
            plikDopisywanie << nowaOsoba.imie << " " 
                            << nowaOsoba.nazwisko << " " 
                            << nowaOsoba.wiek << endl;
            plikDopisywanie.close();
        }
        else
        {
            cout << "Blad podczas otwierania pliku do dopisania danych" << endl;
        }
    }
    WyswietlZawartoscPliku();

    return 0;
}