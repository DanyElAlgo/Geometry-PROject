#include<iostream>
using namespace std;
int main () {
	
	const double PI = 3.1416;
	double radio, longitud, area, volumen;
	
	cout << "Ingrese el valor del radio: ";
	cin >> radio;
	
	if (radio >= 0) {
		
		longitud = 2 * PI * radio;
		area = PI * radio * radio;
		volumen = (4/3) * PI * radio * radio * radio;
		
		cout << "La longitud de la circunferencia es: " << longitud << endl;
		cout << "El area del círculo es: " << area << endl;
		cout << "El volumen de la esfera es: " << volumen << endl;
	}
	
}
