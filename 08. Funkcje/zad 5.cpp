#include <iostream>
#include <cstdlib> 
#include <ctime>  

using namespace std;

void duza_mala(int liczba, int wylosowanaLiczba)
{
    if (liczba < wylosowanaLiczba)
    {
        cout << "Za malo!" << endl;
    }
    else if (liczba > wylosowanaLiczba)
    {
        cout << "Za duzo!" << endl;
    }
}

bool check_liczba(int liczba, int wylosowanaLiczba)
{
    if (liczba == wylosowanaLiczba)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{

    srand(time(NULL));

    int wylosowanaLiczba = rand() % 100 + 1;
    
    int strzal;
    bool czyOdgadnieta = false;

    cout << "Wylosowalem liczbe z zakresu 1-100. Sprobuj ja odgadnac!" << endl;

    do
    {
        cout << "\nPodaj swoja liczbe: ";
        cin >> strzal;


        czyOdgadnieta = check_liczba(strzal, wylosowanaLiczba);

        if (czyOdgadnieta == true)
        {
            cout << "Odgadles wylosowana liczbe!" << endl;
        }
        else
        {
        
            duza_mala(strzal, wylosowanaLiczba);
        }

    } while (czyOdgadnieta == false); 

    return 0;
}