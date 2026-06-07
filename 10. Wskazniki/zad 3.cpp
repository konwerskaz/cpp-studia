#include <iostream>
using namespace std;


int ObliczSume(int* ptr, int rozmiar)
{
    int suma = 0;
    
    for (int i = 0; i < rozmiar; i++)
    {
       suma += *ptr; 
        ptr++;       
    }
    
    return suma;
}


void WyswietlTablice(int* ptr, int rozmiar)
{
    for (int i = 0; i < rozmiar; i++)
    {
      cout << *ptr << " "; 
       ptr++;
    }
    cout << endl;
}

int main()
{
    int rozmiar = 5;
    int tablica[rozmiar] = {10, 20, 30, 40, 50};

    cout << "Poczatkowa zawartosc tablicy: ";
    WyswietlTablice(tablica, rozmiar);

    int aktualnaSume = ObliczSume(tablica, rozmiar);
    cout << "Suma elementow tablicy: " << aktualnaSume << endl;


    int* wskaznikModyfikacji = tablica; 
    
    cout << "Podaj nowe wartosci dla elementow tablicy:" << endl;
    for (int i = 0; i < rozmiar; i++)
    {
        cout << "Podaj nowa wartosc dla elementu nr " << i + 1 << ": ";
        cin >> *wskaznikModyfikacji; 
        wskaznikModyfikacji++; 
    }
    cout << "----------------------------------------" << endl;

    
    cout << "Zmodyfikowana zawartosc tablicy: ";
    WyswietlTablice(tablica, rozmiar);

    int nowaSuma = ObliczSume(tablica, rozmiar);
    cout << "Nowa suma elementow tablicy: " << nowaSuma << endl;

    return 0;
}