#include <iostream>

using namespace std;

float a, b, c, d, resultado;

void Variables() {
	
	cout << "Inserte variables \n";
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
	
	Variables();
	
	resultado = a + (b / (c-d));
	cout << "El resultado es: " << resultado;
}
