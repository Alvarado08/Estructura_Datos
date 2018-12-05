#include "Pila.h"


int Pila::pilaVacia()
{
    return cima == NULL;
}

/*
funcion para apilar datos que se usan para la cola
*/
void Pila::insertar(int elemento)
{
    NodoPila* nuevo;
    nuevo = new NodoPila(elemento);
    nuevo -> siguiente = cima;
    cima = nuevo;
}

/*funcion para mostrar datos que se apilan*/
int Pila::mostrar()
{
    if (pilaVacia())
        throw "PILA VACIA, NO HAY NADA QUE EXTRAER";
    int aux = cima -> elemento;
    cima = cima -> siguiente;
    return aux;
}

/*funcion para ordenar datos hacia la cima*/
int Pila:: cimaPila()
{
    if (pilaVacia())
        throw "PPILA VACIA";
    return cima -> elemento;
}

