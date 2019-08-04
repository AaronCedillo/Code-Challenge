#include <stdlib.h>
#include <iostream>
#include <math.h>

using namespace std;

char x;
int y;
int u;

int CuboDeUnNumero(int *valor1) {
	*valor1 = pow(*valor1, 3);
	return *valor1;
	delete valor1;
}

void NumeroParImpar(int *valor2) {
	if(*valor2 %2 == 0) 
		cout << "El numero es par";
		else 
			cout << "El numero es impar";	
	cout << "\n";
}

int main() {
	
	while(1) {
		
		cout << "\n";
		cout << "Elija una opcion" << "\n";
		cout << "a) Cubo de un numero" << "\n";
		cout << "b) Numero par o impar" << "\n";
		cout << "c) Salir" << "\n";
		cout << "Opcion: ";
		cin >> x;	
		
		switch(x) {
			
			case 'a':
				cout << "ingrese un numero: " << "\n" ;
				cin >> y;

				CuboDeUnNumero(&y);
				cout << "El cubo del numero es: " << y;
				cout << "\n";
				
			break;
			
			case 'b':
				cout <<"ingrese un numero: " << "\n";
				cin >> u;
				
				NumeroParImpar(&u);
			break;
			
			case 'c':
				return 0;
		}				
	}
}
