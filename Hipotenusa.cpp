//Escriba un programa que pida los dos catettos de un triangulo rectangulo y de como salida la hipotenusa.

#include <iostream>
#include <math.h>

using namespace std;
float CA, CO, H;

int main() {
	
	cout << "Calculo de Hipotenusa \n";
	cout << "Deme los catetos \n";
	cout << "Cateto Opuesto: ";
	cin >> CO;
	cout << "Cateto Adyacente: ";
	cin >> CA;
	
	H = sqrt(CA+CO);
	cout << "Hipotenusa: " << H;
}
