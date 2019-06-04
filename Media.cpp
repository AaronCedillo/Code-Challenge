// Escriba un programa que lea las notas finales de 4 alumnos y saque la media de esas calificaciones

#include <iostream>

using namespace std;
float a, b, c, d, media;

void Calificaciones() {
	
	cout << "Deme su nota final \n";
	
	cout << "Alumno 1: ";
	cin >> a;
	cout << "Alumno 2: ";
	cin >> b;
	cout << "Alumno 3: ";
	cin >> c;
	cout << "Alumno 4: ";
	cin >> d;
}

int main() {
	
	Calificaciones();
	
	media = (a + b + c + d) / 4;
	cout << "Media: " << media;
}
