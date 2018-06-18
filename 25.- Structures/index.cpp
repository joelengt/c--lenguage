// form 1
struct Punto { 
   int x, y; 
   Punto() {x = 0; y = 0;} // Constructor
} Punto1, Punto2;

// form 2
struct Punto { 
   int x, y; 
   Punto(); // Declaración del constructor
} Punto1, Punto2;
 
// Definición del constructor, fuera de la estructura
Punto::Punto() {  
   x = 0; 
   y = 0; 
}