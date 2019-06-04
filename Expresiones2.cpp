#include <iostream>

using namespace std;

double a, b, c, d, e, f, resultado;

void Variables() {
	
	cout << "Introduzca las variables \n";
	cout << "a: ";
	cin >> a;
	cout << "b: ";
	cin >> b;
	cout << "c: ";
	cin >> c;
	cout << "d: ";
	cin >> d;
	cout << "e: ";
	cin >> e;
	cout << "f: ";
	cin >> f;
}

int main() {
	
	Variables();
	
	resultado = (a + (b/c)) / (d + (e/f));
	cout << "El resultado es: " << resultado;
}
