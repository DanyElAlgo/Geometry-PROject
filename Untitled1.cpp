#include<iostream>
using namespace std;
int main () {
	
	const double PI = 3.1416;
	double radio, longitud;
	
	cout << "ingrese el valor del radio: ";
	cin >> radio;
	
	if (radio >= 0) {
		
		longitud = 2 * PI * radio;
		
		cout << "la longitud de la circunferencia es: " << longitud << endl;
	}
	
}
