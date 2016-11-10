
#include <iostream>

using namespace std;

int a = 20;
int b = 12;

int Sumar() {
	int r;
	return 0;
}

char Letra(char l, int numero) {
	cout << numero << endl;
	return l;
}

bool Bvalue(bool n) {
	if(n == false) {
		return false;
	} else {
		return true;
	}

}

string DCadena(int largo, string msg) {
	cout << largo << endl;
	return msg;
}

double Cientifico(double a, double b) {
	return a * b;
}

// Procedimineot

void GetBuild(bool va, string name) {
	if(va == 0) {
		cout << "Error en el sistema" << endl;
		return;

	} else {
		cout << "nombre " << name;
	}
}

bool funcionBool(int n, string mensaje)//Función con dos parámetros
{
	if(n == 0)//Usamos el parámetro en la función
	{
		cout << mensaje << endl;//Mostramos el mensaje
		return 1; //Si n es cero retorna 1
	}

	return 0;//Este return sólo se ejecuta cuando n NO es cero
}


void procedimiento(int n, string nombre)
{
	if(n == 0){
		cout << "hola " << nombre << endl;
		return;
	}

	cout << "adios " << nombre << endl;
}

int main() {
	char respuesta = Letra('e', 20);

	bool value = Bvalue(true);

	cout << value << endl;

	string cadena = DCadena(123, "Normas de la vida comunitaria");

	cout << Cientifico(12.3123, 1233.432423) << endl;

	//GetBuild(true, "joel");
	procedimiento(funcionBool(0, "hola"), "Juan");

	return 0;
}

