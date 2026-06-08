#include <iostream>
#include <fstream>
#include <string>
#include <cstdio> 

using namespace std;

int main()
{
    int wybor;

    cout << "Wybierz operacje:" << endl;
    cout << "1 - Utworz nowy plik" << endl;
    cout << "2 - Usun plik" << endl;
    cout << "3 - Zmien nazwe pliku" << endl;

    cin >> wybor;

    switch (wybor)
    {
        case 1:
        {
            string nazwaPliku;
            cout << "Podaj nazwe nowego pliku: ";
            cin >> nazwaPliku;

            ofstream plik(nazwaPliku);

            if (plik.is_open())
            {
                plik.close(); 
                cout << "Plik '" << nazwaPliku << "' zostal utworzony" << endl;
            }
            else
            {
                cout << "Blad podczas tworzenia pliku." << endl;
            }
            break;
        }
        case 2:
        {
            string nazwaPliku;
            cout << "\nPodaj nazwe pliku do usuniecia: ";
            cin >> nazwaPliku;

            ifstream plikSprawdzajacy(nazwaPliku);
            if (!plikSprawdzajacy.good())
            {
                cout << "Plik '" << nazwaPliku << "' nie istnieje" << endl;
                break;
            }
            plikSprawdzajacy.close(); 

            if (remove(nazwaPliku.c_str()) == 0)
            {
                cout << "Plik '" << nazwaPliku << "' zostal usuniety" << endl;
            }
            else
            {
                cout << "Wystapil blad podczas usuwania pliku" << endl;
            }
            break;
        }
        case 3:
        {
            string staraNazwa, nowaNazwa;
            cout << "Podaj nazwe pliku do zmiany: ";
            cin >> staraNazwa;
            cout << "Podaj nowa nazwe pliku: ";
            cin >> nowaNazwa;

            ifstream plikSprawdzajacy(staraNazwa);
            if (!plikSprawdzajacy.good())
            {
                cout << "\nBlad! Plik '" << staraNazwa << "' nie istnieje." << endl;
                break;
            }
            plikSprawdzajacy.close(); 

            if (rename(staraNazwa.c_str(), nowaNazwa.c_str()) == 0)
            {
                cout << "Plik zostal pomyslnie zmieniony na '" << nowaNazwa << "'." << endl;
            }
            else
            {
                cout << "Wystapil blad podczas zmiany nazwy pliku" << endl;
            }
            break;
        }
        default:
            cout << "Nie ma takiej opcji" << endl;
            break;
    }

    return 0;
}