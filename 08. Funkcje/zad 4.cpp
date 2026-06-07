#include <iostream>
using namespace std;

void GetArrayFromUser(int tablica[], int rozmiar)
{
    
    for (int i = 0; i < rozmiar; i++)
    {
        cout << "Podaj liczbe nr " << i + 1 << ": ";
        cin >> tablica[i];
    }
}

int FindMaxValue(int tablica[], int rozmiar)
{

    int max = tablica[0];

    for (int i = 1; i < rozmiar; i++)
    {
        
        if (tablica[i] > max)
        {
            max = tablica[i]; 
        }
    }
    return max;
}


void DisplayResult(int maxWartosc)
{
    cout << "\nNajwieksza wartosc z podanych liczb to: " << maxWartosc << endl;
}

int main()
{
    const int ROZMIAR = 5; 
    int liczby[ROZMIAR];  

    
    GetArrayFromUser(liczby, ROZMIAR);
    
    int najwyzsza = FindMaxValue(liczby, ROZMIAR);

    DisplayResult(najwyzsza);

    return 0;
}