#include <iostream>
using namespace std;


int GetNumberFromUser()
{
    int n;
    cout << "Podaj liczbe elementow ciagu Fibonacciego do wyswietlenia: ";
    cin >> n;
    return n;
}

int CalculateFibonacciRecursive(int n)
{
  
    if (n == 1 || n == 2)
    {
        return 1;
    }

   
    return CalculateFibonacciRecursive(n - 1) + CalculateFibonacciRecursive(n - 2);
}


void DisplayFibonacciSequence(int liczba_elementow)
{
    cout << "Ciag Fibonacciego (" << liczba_elementow << " elementow): " << endl;
    
    for (int i = 1; i <= liczba_elementow; i++)
    {
        cout << CalculateFibonacciRecursive(i) << " ";
    }
    cout << endl;
}

int main()
{
    
    int ile_elementow = GetNumberFromUser();


    if (ile_elementow < 1)
    {
        cout << "Liczba elementów musi byc wieksza od 0." << endl;
        return 1;
    }

    
    DisplayFibonacciSequence(ile_elementow);

    return 0;
}