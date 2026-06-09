#include <iostream>
#include <cstdlib> 
#include <ctime>  

using namespace std;

void LosujTablice(int* wskTablica, int rozmiar, int poczatek, int koniec)
{
    for (int i = 0; i < rozmiar; i++)
    {
        wskTablica[i] = poczatek + rand() % (koniec - poczatek + 1);
    }
}

bool SprawdzLiczbe(int* wskLiczba, int* wskTablica, int rozmiar)
{
    for (int i = 0; i < rozmiar; i++)
    {
        if (*wskLiczba == wskTablica[i])
        {
            return true; 
        }
    }
    return false; 
}

int main()
{
    srand(time(NULL));

 
    int tablica[99999]; 

    int rozmiar;
    int poczatek, koniec;


    cout << "Ile liczb chcesz wylosowac (max 99999): ";
    cin >> rozmiar;

   
    if (rozmiar <= 0 || rozmiar > 99999)
    {
        cout << "Liczba elementów musi miescic sie w przedziale 1 - 99999 " << endl;
        return 1;
    }

    cout << "Podaj poczatek przedzialu losowania: ";
    cin >> poczatek;
    cout << "Podaj koniec przedzialu losowania: ";
    cin >> koniec;

    if (poczatek > koniec)
    {
        cout << "Poczatek przedzialu nie moze byc wiekszy niz koniec" << endl;
        return 1;
    }


    LosujTablice(tablica, rozmiar, poczatek, koniec);

    int liczba;
    int licznik = 0;
    bool wynik = false;

    
    cout << "Zgaduj liczby z przedzialu od " << poczatek << " do " << koniec << "." << endl;

    do {
        cout << "Podaj liczbe: ";
        cin >> liczba;
        licznik++;

        
        wynik = SprawdzLiczbe(&liczba, tablica, rozmiar);

        if (wynik == true)
        {
            cout << "Zgadles" << endl;
        }
        else
        {
            cout << "Nie zgadles" << endl;
        }

    } while (wynik == false);

    cout << "Zgadles za " << licznik << " razem" << endl;

    return 0; 
}