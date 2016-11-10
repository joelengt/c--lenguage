#include <iostream>

using namespace std;

// Esto define la clase CRender
// Por defecto los miembros de una clase son privados.

class CRender {
    int a, b;

	public: // hacer pública una parte de la clase (accesible a otras partes del programa)
	    void m_Renderizar() {
	    	cout << "Saludos" << endl;
	    	return;
	    };
};

class Pareja {
    // atributos
    double a, b;

	public:
	    // métodos
	    double getA();
	    double getB();    
	    void   setA(double n);
	    void   setB(double n);
};

double Pareja::getA() { return a; }
double Pareja::getB() { return b; }
void Pareja::setA(double n) { a = n; }
void Pareja::setB(double n) { b = n; }

// Para implementar esta función como mientro de una clase
//void CRender::m_Renderizar()
// {
//     //strcpy(buffer, "C++ en wikibooks");
//     cout << "Saludos" << endl;
//     return;
// }


// Subclase
// Una subclase es una clase que se deriva de otra

// class hija : private padre {};

class Suma : public Pareja {
    // atributos de Suma
    double resultado;

	public:
	    // métodos de Suma
	    double calcular();
};

// implementación de Suma
double Suma::calcular() { 
	return getA() + getB(); 
}

int main() {

	// Creando Dos objetos a partir de la clase
	CRender objeto1, objeto2;

	objeto1.m_Renderizar();

	Suma s;
	s.setA(80);
	s.setB(100);
	cout << s.getA() << " + " << s.getB() << " = " << s.calcular() << endl;

	return 0;
}



// Los miembros de una struct son públicos por defecto, mientras que los miembros de una class son privados por defecto

// Los parámetros-argumentos struct se pasan normalmente por copia, los parámetros-argumentos class se pasan normalmente por referencia.

