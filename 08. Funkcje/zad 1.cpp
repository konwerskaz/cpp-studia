
#include <iostream>
using namespace std;

bool czy_parzysta (int liczba)
{
	if(liczba % 2 == 0)
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
	int liczba;
	
	cout << "Podaj liczbe calkowita: " << endl;
	cin >> liczba;
	
 if (czy_parzysta(liczba) == true)
	{
		cout << "Liczba " << liczba << " jest parzysta." << endl;
	}
	else
	{
		cout << "Liczba " << liczba << " jest nieparzysta." << endl;
	}

	return 0;
}
