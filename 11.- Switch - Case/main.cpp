#include <iostream>

using namespace std;

bool comprobador = false;

int n1, n2, n3, n4;

int main() { 

	n1 = 40;
	n2 = 40;

	char c;

	string day;

	cout << "Escribe una letra" << endl;
	cin >> c;

	cin >> day;

	switch (c) {
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			cout << "Es una vocal: " << c << endl;
			break;
		default:
			cout << "La letra digitada no se encuentra" << endl;
	}

	switch (day) {
		case 'monday':
			// code
			break;
		
		case 'tuesday':
			// code
			
			break;
		case 'wednesday':
			// code
			
			break;
		case 'thursday':
			// code
			
			break;
		case 'friday':
			// code
			
			break;

		default:
			cout << "El parametro no coincide" << endl;
	}


	cin.get();
	return 0;
}
