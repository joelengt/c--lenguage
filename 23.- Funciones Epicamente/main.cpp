#include <iostream>

using namespace std;


// Funcion => Bloque de codigo, que puede recibir argumentos como parametros, se llama y retorna un valor
// Metogo => Una funcion dentro de un objeto
// Procedimiento => una funcion que no requiere necesidad de retornar , en c++ es void


// Declarando funciones 

int funcionEntera() {
	int suma = 5 + 1;
	return suma;
}


char funcionCharacter(int n) {
	if(n == 0) {
		return 'a';
	}
	return 'X';
}

bool functionBool(int n, string mensaje) {
	if(n == 0) {
		cout << mensaje << endl;
		return 1;
		return true;
	}
	return 0;
	return false;
}

// Procedimientos
void Procedimiento (int n, string nombre) {
	if(n == 0) {
		cout << "hola " << nombre << endl;
		return;  // En una funcion tipo void -> El retorno indicar para finalizar la ejecucion del procedimiento
	}

	cout << "adios" << endl;
 
}

// Una funcion puede ejecutarse dentro de otro
// Una funcion puede pasarse como parametro de otra

int main() {
	cout << funcionCharacter('k') << endl;

	cout << functionBool(0, "salud") << endl;

// Una funcion puede ser asignada a una varible del mismo tipo
	bool message = functionBool(0, "salud");

	int resultado = funcionEntera();
	Procedimiento(0, "joel");

	return 0;
}
