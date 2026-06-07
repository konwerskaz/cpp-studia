#include <iostream>
using namespace std;

int main() {
	float waga;
	float wzrost;
	cout << "Podaj wage(w kg): " << endl;
	cin >> waga;

	cout << "Podaj wzrost(w metrach): "<<endl;
	cin >> wzrost;
	
	float bmi = waga / (wzrost * wzrost);
	cout << bmi << endl;
	cout << "Twoje bmi wynosi: " << bmi << endl;
	
	if(bmi < 18.5){
		cout << "Twoj stan wagowy: niedowaga";
	}
	else if ((bmi >= 18.5) && (bmi <= 24.9 )){
			cout << "Twoj stan wagowy: w normie";
	}
	else if ((bmi >= 25) && (bmi <= 29.9 )){
			cout << "Twoj stan wagowy: nadwaga";
	}
	else if (bmi > 30) {
			cout << "Twoj stan wagowy: otylosc";
	}
		
	return 0;
}