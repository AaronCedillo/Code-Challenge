//Encontrar la palabra mas grande en un string
	//Ej: Como estas, out: estas

#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

char Dir[20];
char cadena[5];

void String() {
	
	char *ptr, c = 'r';
	
	strcpy(cadena, Dir);
	ptr = strrchr(cadena, c);
	
	if(ptr) {
		
		cout << "el caracte %c esta en la posicion: ", c, ptr-cadena;
	} else {
		cout << "No hay caracter";
	}
				
}

int main() {
	
	cout << "Dame una cadena de caracteres: ";
	cin >> Dir;
	
	String();
}
