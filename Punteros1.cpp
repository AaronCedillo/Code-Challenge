#include <iostream>
#include <stdio.h>

using namespace std;

int funcion(int valor) {
	
	valor = valor + 10;
	return valor;	
}

int funcionPunteros(int *valor) {
	
	*valor = *valor + 10;
	return *valor;
	delete valor;
}

int main() {
	
	int numero = 10;	
	cout << "Al inicio de la funcion: " << numero << "\n";
	
	funcion(numero);	
	cout << "Despues de llavamar a la funcion: " << numero << "\n";
	
	funcionPunteros(&numero);
	cout << "Despues de la funcion punetros: " << numero << "\n";
	
	cout << "Direccion de memoria del numero: " << &numero;
}
