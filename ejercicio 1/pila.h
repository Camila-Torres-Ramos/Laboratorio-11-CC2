#include <iostream>
#include <cstdlib>
#include "nodo.h"
using namespace std;

class pila{
    public:
        pila();
        ~pila();
        void agregarPila();
};


void agregarPila (Nodo *&pila, int n)
{
	Nodo *nuevo_nodo= new Nodo();
	nuevo_nodo->dato=n;
	nuevo_nodo->siguiente= pila;
	pila=nuevo_nodo;
	cout<<"Elemento: "<<n<<" agregado\n";
}

pila::~pila()
{
}