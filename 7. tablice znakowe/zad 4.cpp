#include <iostream>
#include <string>
#include <cstring>

using namespace std;
int main()
{

char tekst[100];
char nowytekst[100];
int dlugosc;
int y = 0;

cout << "Podaj ciag znakow: ";
	cin.getline(tekst, 100);

dlugosc = strlen(tekst);

for(int i = dlugosc - 1; i >= 0; i--)
{
	nowytekst[y] = tekst[i];
	y++;
}

nowytekst[y] = '\0'; 

    
    cout << "Odwrocony ciag znakow: " << nowytekst << endl;

return 0;
}