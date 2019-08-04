#include <iostream>
#include <stdlib.h>

using namespace std;

int x;

void TablaDeMultiplicar(int *valor) {
	for(int i = 1; i < 11; ++i) {
		int value = *valor * i;
		cout << *valor << "*" << i << " = ";
		cout << value << "\n";
	}
	delete valor;
}

int main() {
	cout << "Ingrese un numero: ";
	cin >> x;
	
	TablaDeMultiplicar(&x);
}
