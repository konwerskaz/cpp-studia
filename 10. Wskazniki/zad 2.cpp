#include <iostream>
using namespace std;


void FindMinMax(float* tablica, int rozmiar, float* wskMin, float* wskMax)
{
    
    *wskMin = tablica[0];
    *wskMax = tablica[0];

    for (int i = 1; i < rozmiar; i++)
    {
        
        if (tablica[i] < *wskMin)
        {
            *wskMin = tablica[i]; 
        }
        
        if (tablica[i] > *wskMax)
        {
            *wskMax = tablica[i]; 
        }
    }
}

int main()
{
    int ROZMIAR = 10;
    
    float tablica[ROZMIAR] = {1.5, -3.2, 4.8, 7.0, -1.1, 0.0, 3.3, -6.6, 8.9, 2.2};
    float min, max;

    
    FindMinMax(tablica, ROZMIAR, &min, &max);


    cout << "Najmniejsza wartosc w tablicy: " << min << endl;
    cout << "Najwieksza wartosc w tablicy: " << max << endl;

    return 0;
}