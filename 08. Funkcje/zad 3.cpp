#include <iostream>
#include <string> 

using namespace std;


string GetTextFromUser()
{
    string tekst;
    cout << "Podaj ciag znakow: ";
    getline(cin, tekst); 
    return tekst;
}


string ReverseString(string tekst)
{
    string nowyTekst = ""; 
    int dlugosc = tekst.length(); 

   
    for (int i = dlugosc - 1; i >= 0; i--)
    {
        nowyTekst += tekst[i];
    }

    return nowyTekst;
}

void DisplayResult(string odwroconyTekst)
{
    cout << "Odwrocony ciag znakow: " << odwroconyTekst << endl;
}

int main()
{

    string oryginalnyTekst = GetTextFromUser();

    
    string wynik = ReverseString(oryginalnyTekst);


    DisplayResult(wynik);

    return 0;
}