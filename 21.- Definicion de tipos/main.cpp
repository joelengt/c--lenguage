#include <iostream>

using namespace std;

// Definicion de Tipos : typedef
typedef unsigned int uint;  // entero sin signo

typedef int entero;

typedef float comita;

// Funcion principal
entero main() {
	uint numero = 10;  // si se le asigna -10 no funciona

	entero a = 10;
	comita num = 1.23;

	cout << numero << endl;

	return 0;

}

