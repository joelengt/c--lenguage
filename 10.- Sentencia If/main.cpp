#include <iostream>

using namespace std;

bool comprobador = false;

int n1, n2, n3, n4;

int main() { 

	n1 = 40;
	n2 = 40;

	if(n1 < n2) {
		cout << "El numero " << n2 << " es mayor que " << n1 << endl;

	} else if(n1 == n2) { 
		cout << "El numero " << n2 << " son iguales " << n1 << endl;


	} else {
		cout << "El numero " << n1 << " es menor que " << n2 << endl;

	}


	cin.get();
	return 0;
}
