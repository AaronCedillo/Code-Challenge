#include <string.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

char input[30];
int vocal_a = 0, vocal_e = 0, vocal_i = 0, vocal_o = 0, vocal_u = 0;

void String() {
	
	for(int i = 0; i <= 30; i++) {
		
		switch (input[i]) {
		
		case 'a': vocal_a ++; break;
		case 'e': vocal_e ++; break;
		case 'i': vocal_i ++; break;
		case 'o': vocal_o ++; break;
		case 'u': vocal_u ++; break;
			
		}
	}
	
	cout << "vocal a: " << vocal_a;
	cout << "vocal e: " << vocal_e;
	cout << "vocal i: " << vocal_i;
	cout << "vocal o: " << vocal_o;
	cout << "vocal u: " << vocal_u;
}

int main() {
	
	cin >> input;
	String();
}
