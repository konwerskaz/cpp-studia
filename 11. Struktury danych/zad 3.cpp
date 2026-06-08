#include <iostream>
#include <string>

using namespace std;
struct Samochod {
    string marka;
    string model;
    int rok_produkcji;
};

void Wyswietl_Dane(Samochod auto_dane)
{
    cout << "Dane samochodu:" << endl;
    cout << "Marka: " << auto_dane.marka << endl;
    cout << "Model: " << auto_dane.model << endl;
    cout << "Rok produkcji: " << auto_dane.rok_produkcji << endl;
}

int main()
{
    
    Samochod mojSamochod;
    mojSamochod.marka = "Toyota";
    mojSamochod.model = "Corolla";
    mojSamochod.rok_produkcji = 2018;

    Wyswietl_Dane(mojSamochod);

    return 0;
}