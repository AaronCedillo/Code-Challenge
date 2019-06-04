#include <iostream>

using namespace std;

	float a, b, c, d, resultado;
	
void Expresiones() {
	
	cout << "Deme 4 numeros: \n";
	cout << "a: ";
	cin >> a;
	cout << "b: ";
	cin >> b;
	cout << "c: ";
	cin >> c;
	cout << "d: ";
	cin >> d;
}

int main() {
	
	Expresiones();
	resultado = (a + b)/(c + d);
	cout << "El resultado es: " << resultado;
}
