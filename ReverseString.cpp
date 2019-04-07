// Crear un programa el cual sea capaz de revisir un string, este string debera ser impreso en forma inversa 
	// Ejemplo: "hola" , out = "aloh".
	
#include <iostream>	
#include <stdlib.h>

using namespace std;

string input;

void String() {
	
	for(int i = input.length(); i <= input.length(); i--) {
		
		cout << input[i];
	}
}

int main() {
	
	cout << "Dame una cadena de caracteres: ";
	getline(cin, input);
	
	String();
}
