#include <iostream>
#include <conio.h>
#include <math.h>
#include <stdlib.h>

using namespace std;
//Numero par o impar

int main() {
	int a;
	while(1) {
		
	cout << "Deme un numero: ";
	cin >> a;
			
	if(a %2 == 0) 
		cout << "Es par" << "\n";
	 else 
		cout << "Es impar" << "\n";	
	}	
}
