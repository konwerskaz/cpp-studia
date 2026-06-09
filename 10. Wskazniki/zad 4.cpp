#include <iostream>
#include <cstdlib> 
#include <ctime>   

using namespace std;

void LosujTablice(int tab[])
{
    for (int i = 0; i < 10; i++)
    {
        tab[i] = rand() % 51; 
    }
}


bool SprawdzLiczbe(int* wskLiczba, int* wskTablica)
{
   
    for (int i = 0; i < 10; i++)
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

    
    int tab[10];

    LosujTablice(tab);

    int liczba;
    int licznik = 0;
    bool wynik = false;


    do {
        cout << "Podaj liczbe: ";
        cin >> liczba;
        licznik++; 

       
        wynik = SprawdzLiczbe(&liczba, tab);

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