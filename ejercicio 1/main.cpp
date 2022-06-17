#include <iostream>
#include <cstdlib>
#include "pila.h"
using namespace std;

int main()
{
	Nodo * pila= 0;
	int n1, n2;
	cout<<"Digite un numero: ";
	cin>>n1;
	eliminarPila(pila,n1);
	cout<<"Digite otro numero: ";
	cin>>n2;
	eliminarPila(pila,n2);

}
