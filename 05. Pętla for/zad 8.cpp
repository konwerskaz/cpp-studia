#include <iostream>
using namespace std;

int main() {
    int szerokosc, wysokosc;

    
    cout << "Podaj szerokosc podstawy: ";
    cin >> szerokosc;
    cout << "Podaj wysokosc trojkata: ";
    cin >> wysokosc;

    for (int i = 0; i < wysokosc; i++) {
        
       
        int margin = i;
        for (int j = 0; j < szerokosc; j++) {
            
            
            if (j >= margin && j <= (szerokosc - margin - 1)) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        
       
        cout << endl;
    }

    return 0;
}