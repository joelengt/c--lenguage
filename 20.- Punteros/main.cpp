#include <iostream>

using namespace std;

int numero = 20;

// Punteros => Variables que guardan la direccion de memoria
// asignando un puntero a una variable

int *puntero = &numero; // Una varible que guarda un puntero de una varible.

// Punteros arrelos
int arr[5];
int *p;

// Punteros a estructuras

struct miestructura {
	int a;
} miEstructura, *punteroEstructura;

// Funcion principal
int main() {

	cout << puntero << endl;  // direccion del a memoria
	cout << *puntero << endl;  // valor asignado

	// Punteros arr
	p = arr;
	cout << "Direccion del arr[0] " << &arr << endl;
	p++; // Para ver el siguiente
	cout << "Direccion del arr[0] " << p << endl;

	// Punteros a Estructuras
	miEstructura.a = 12;
	punteroEstructura = &miEstructura;

	cout << punteroEstructura << endl;       // 0x1062ca0f0
	cout << &miEstructura.a << endl;         // 0x1062ca0f0
	cout << punteroEstructura -> a << endl;  // 12

	return 0;
}

