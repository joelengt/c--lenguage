#include <iostream>
#define LARGO 4

//using namespace std;

// Un espacio de nombre => puedo tener variables variables del mismo nombre, pero que esten en distintos espacios de nombre

namespace ciudad {
	int calle;
}

namespace pueblito {
	int calle = 10;
}

namespace casita {
	int calle = 2000;
}

// se pueden mantener la misma variable por que estan en diferentes spacios de nombres

// Definimos que namespace se va usar

using namespace ciudad;

// Funcion principal
int main() {

	calle = 20;

	std::cout << pueblito::calle << std::endl;  // llamando namespace pueblito

	std::cout << calle << std::endl;  // namespace ciudad defecto

	std::cout << casita::calle << std::endl;

	return 0;
}


