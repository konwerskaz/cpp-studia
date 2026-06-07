#include <iostream>
using namespace std;

long long CalculatePowerRecursive(int podstawa, int wykladnik)
{

    if (wykladnik == 0)
    {
        return 1;
    }

    return podstawa * CalculatePowerRecursive(podstawa, wykladnik - 1);
}

void DisplayResult(int podstawa, int wykladnik, long long wynik)
{
    cout << "Wynik potegowania " << podstawa << " do potegi " << wykladnik << " wynosi: " << wynik << endl;
}

int main()
{
    int podstawa, wykladnik;

    cout << "Podaj liczbe podstawowa: ";
    cin >> podstawa;

    cout << "Podaj wykladnik (liczba dodatnia lub 0): ";
    cin >> wykladnik;

    if (wykladnik < 0)
    {
        cout << "Blad! Wykladnik musi byc liczba nieujemna." << endl;
        return 1;
    }

    long long wynik = CalculatePowerRecursive(podstawa, wykladnik);


    DisplayResult(podstawa, wykladnik, wynik);

    return 0;
}