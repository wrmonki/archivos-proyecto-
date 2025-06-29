#ifndef CORE_HISTORIAL_H
#define CORE_HISTORIAL_H

#include "Productos.h"

// Nodo para la lista enlazada del historial
struct NodoHistorial {
    Producto* producto;          // Puntero al producto
    NodoHistorial* siguiente;    // Puntero al siguiente nodo
    NodoHistorial(Producto* prod) : producto(prod), siguiente(NULL) {}
};

// Estructura principal del historial (lista enlazada)
struct Historial {
    NodoHistorial* primero;      // Puntero al primer nodo
    int cantidad;                // Contador de elementos

    Historial();  // Constructor
    ~Historial(); // Destructor (declarado pero no definido)
};

#endif // CORE_HISTORIAL_H