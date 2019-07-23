#include <stdlib.h>
#include <iostream>

using namespace std;

int main() {
	int numero;
	
	while(1){
		cout << "Digite un numero: " << "\n";
		cin >> numero;
		
		if(numero < 0)
			cout << "El numero es negativo" << "\n";
		else 
			cout << "El numero es positivo" << "\n";
	}
}
