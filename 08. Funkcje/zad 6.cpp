#include <iostream>
using namespace std;

int GetNumberFromUser()
{
    int liczba;
    cout << "Podaj liczbe calkowita: ";
    cin >> liczba;
    return liczba;
}

long long CalculateFactorial(int n)
{
    long long wynik = 1;
    for (int i = 1; i <= n; i++)
    {
        wynik = wynik * i;
    }

    return wynik;
}

void DisplayResult(int n, long long wynikSilni)
{
    cout << "Silnia liczby " << n << " (" << n << "!) wynosi: " << wynikSilni << endl;
}

int main()
{
    int podana_liczba = GetNumberFromUser();

    if (podana_liczba < 0)
    {
        cout << "liczba musi byc wieksza od 0" << endl;
        return 1;
    }

    long long wynik = CalculateFactorial(podana_liczba);
    DisplayResult(podana_liczba, wynik);

    return 0;
}