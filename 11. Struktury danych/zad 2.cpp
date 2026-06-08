#include <iostream>
#include <string>

using namespace std;
struct Osoba {
    string imie;
    string nazwisko;
    int wiek;
}
;

int main()
{
    
    
    Osoba grupaOsob[3];

    grupaOsob[0].imie = "Jan";
    grupaOsob[0].nazwisko = "Kowalski";
    grupaOsob[0].wiek = 25;

   
    grupaOsob[1].imie = "Anna";
    grupaOsob[1].nazwisko = "Nowak";
    grupaOsob[1].wiek = 30;

    grupaOsob[2].imie = "Piotr";
    grupaOsob[2].nazwisko = "Wisniewski";
    grupaOsob[2].wiek = 40;

    cout << "Dane zapisane w tablicy struktur:" << endl;
    
    for (int i = 0; i < 3; i++)
    {
        cout << i + 1 << ". Imie: " << grupaOsob[i].imie 
             << ", Nazwisko: " << grupaOsob[i].nazwisko 
             << ", Wiek: " << grupaOsob[i].wiek << endl;
    }

    return 0;
}