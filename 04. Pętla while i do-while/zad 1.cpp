#include <iostream>
using namespace std;
int main(){
int n;
int i = 2;

cout << "Podaj liczbe N: " << endl;
cin >> n;

while(i <= n){
	
	if(i % 2 == 0){
		cout << i << endl;
		i = i + 1;
		
	}
	
	i++;
}
	
	
return 0;	
}