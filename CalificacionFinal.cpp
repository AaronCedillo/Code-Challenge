// Escriba un programa que tome 3 calificaciones para la nota final de un alumno, este programa debe pedir la nota del examen la cual vale %60,
	//La nota de las tareas que valen %10 y la nota de practicas que valen %30
	
	#include <iostream>
	
	using namespace std;
	
	float examen, tareas, practicas, calificacion;
	
	void Calificaciones() { 
		
		cout << "Ingrese las calificaciones \n";
		
		cout << "examen: ";
		cin >> examen;
		cout << "tareas: ";
		cin >> tareas;
		cout << "practicas: ";
		cin >> practicas;		
	}
	
	int main() {
		
		Calificaciones();
		
		examen *= .60;
		tareas *= .10;
		practicas *= .30;
		
		calificacion = examen + tareas + practicas;
		cout << "Su calificacion final es: " << calificacion;
	}
