#include <iostream>
using namespace std;

int GetNumberFromUser()
{
	int n;
	cout << "Podaj liczbe calkowita n: ";
	cin >> n;
	return n;
 } 
 

 
 int CalculateSumRecursive(int n)
{
    if (n == 1)
    {
        return 1;
    }
  
    return n + CalculateSumRecursive(n - 1);
}

void DisplayResult(int n, int wynikSumy)
{
    cout << "Suma liczb od 1 do " << n << " wynosi: " << wynikSumy << endl;
}

int main()
{
    
    int liczba = GetNumberFromUser();

   
    if (liczba < 1)
    {
        cout << "Blad! Liczba musi byc wieksza lub rowna 1." << endl;
        return 1;
    }

    int suma = CalculateSumRecursive(liczba);
    DisplayResult(liczba, suma);

    return 0;
}