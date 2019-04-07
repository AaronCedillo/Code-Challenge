// Crear un programa el cual nos pida un valor de entrada, a este valor de entrada se le debe sacar su factorial.
	//Ejemplo: x = 3, out = 6

#include <iostream>
#include <stdlib.h>

using namespace std;

int x;
int fact;

void Factorial() {

	fact = x;
	
	for(int i = x - 1; i >= 1; i--) {
		
		fact = fact * i;
	}
	
	cout << endl;
	cout << "El factorial de " << x << " es: " << fact;
}

int main() {
	
	cout << "Ingresa un numero: ";
	cin >> x;
	
	Factorial();
}

