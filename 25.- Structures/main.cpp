#include <iostream>
using namespace std;

struct stPareja { 
   int A, B; 
   int LeeA() { return A;} // Devuelve el valor de A
   int LeeB() { return B;} // Devuelve el valor de B
   void GuardaA(int n) { A = n;} // Asigna un nuevo valor a A
   void GuardaB(int n) { B = n;} // Asigna un nuevo valor a B
} Par;
 
int main() { 
   Par.GuardaA(15); 
   Par.GuardaB(63); 
   cout << Par.LeeA() << endl; 
   cout << Par.LeeB() << endl;
 
   return 0; 
}

/* Inicialización de estructuras */
struct A {
   int i;
   int j;
   int k;
};

struct B {
   int x;
   struct C {
      char c;
      char d;
   } y;
   int z;
};

A ejemploA = {10, 20, 30};
B ejemploB = {10, {'a', 'b'}, 20};
// Cada nueva estructura anidada deberá inicializarse usando la pareja correspondiente de llaves "{}", tantas veces como sea necesario.




/* Asignación de estructuras */
// La asignación de estructuras está permitida, pero sólo entre objetos del mismo tipo de estructura, (salvo que se usen constructores), y funciona como la intuición nos dice que debe hacerlo.
struct Punto { 
   int x, y; 
   Punto() {x = 0; y = 0;} 
} Punto1, Punto2;
 
int main() { 
   Punto1.x = 10; 
   Punto1.y = 12; 
   Punto2 = Punto1; 
}

