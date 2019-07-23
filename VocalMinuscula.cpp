#include <stdlib.h>
#include <iostream>
//Saber si el caracter ingresado es una vocal miniscula
using namespace std;

int main() {
	char letra;
	
	while(1) {
		cout << "Digite una letra: " << "\n";
		cin >> letra;
		if((letra == 97)||(letra == 101) ||(letra == 105)||(letra == 111)||(letra == 117)) 
			cout << "Es vocal minuscula" << "\n";
			else 
				cout << "No es vocal minuscula" << "\n";
	}
}
