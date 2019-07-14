#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int main() {
	
	string *titulos = NULL;
	string *autor = NULL;
	
	int tamanio;
	
	cout << "Ingrese la cantidad de peliculas: ";
	cin >> tamanio;
	
	titulos = new string [tamanio];
	autor = new string [tamanio];
				
	for(int i = 0; i < tamanio; ++i) {
		
		cout << "\n" << "Ingrese los siguientes datos: " << "\n";
		cout << "Titulo: ";
		cin >> titulos[i];
		cout << "Autor: ";
		cin >> autor[i];
		cout << "\n";
		
	}
		delete [] titulos;
		delete [] autor;
		
		titulos = NULL;
		autor = NULL;
}
