#include <iostream>
using namespace std;

const float PI = 3.14159;

float CalculateVolume(float a)
{
    return a * a * a;
}

float CalculateVolume(float a, float b, float h)
{
    return a * b * h;
}


float CalculateVolume(float r, float h)
{
    return PI * r * r * h;
}


void DisplayResult(float objetosc)
{
    cout << "Obliczona objetosc wynosi: " << objetosc << endl;
}

int main()
{
    int wybor;
    cout << "Wybierz bryle, ktorej objetosc chcesz obliczyc:" << endl;
    cout << "1. Szescian (V = a^3)" << endl;
    cout << "2. Prostopadloscian (V = a * b * h)" << endl;
    cout << "3. Walec (V = pi * r^2 * h)" << endl;
    cout << "Wybierz numer bryly: " << endl;
    cin >> wybor;

    switch (wybor)
    {
        case 1:
        {
            float a;
            cout << "Podaj dlugosc boku a: ";
            cin >> a;
            
            float wynik = CalculateVolume(a); 
            DisplayResult(wynik);
            break;
        }
        case 2:
        {
            float a, b, h;
            cout << "Podaj dlugosc a: ";
            cin >> a;
            cout << "Podaj szerokosc b: ";
            cin >> b;
            cout << "Podaj wysokosc h: ";
            cin >> h;
            
            float wynik = CalculateVolume(a, b, h); 
            DisplayResult(wynik);
            break;
        }
        case 3:
        {
            float r, h;
            cout << "Podaj promien podstawy r: ";
            cin >> r;
            cout << "Podaj wysokosc walca h: ";
            cin >> h;
            
            float wynik = CalculateVolume(r, h); 
            DisplayResult(wynik);
            break;
        }
        default:
            cout << "Niepoprawny wybor" << endl;
            break;
    }

    return 0;
}