#include <iostream>

using namespace std;

// class Persona {
// 	public:  // Se pueden consultar desde todo la clase y afuera
// 		void Build() {
// 			int value = 20;
// 			casa = 10;
// 		}

// 	private:  // Se pueden consultar dentro de la clase, incluye public, solo dentro de la clase
// 		int casa;

// 	protected: // Intermedio de public y private. No deja que desde afuera se puedan usar los datos.
// 	// Si deja que una clase por herencia, se tenga acceso a las variables por protect

// };

class cuentas {
	public:
		int sumaDos (int arg);
		int sumaTres (int arg);

	private:
		int resultado;
	protected:
		int m, n;
};


int cuentas::sumaDos(int arg) {
	resultado = arg + 2;
	return resultado;
}

int cuentas::sumaTres(int arg) {
	resultado = arg + 3;
	return resultado;
}

int main() {


	// Objetos
	// Declarando Objeto
	cuentas nueva_cuenta;
	cuentas nueva_cuenta2;

	cout << "+ 2 = " << nueva_cuenta.sumaDos(2) << endl;

	cout << "+ 3 = " << nueva_cuenta.sumaDos(2) << endl;


	return 0;
}
