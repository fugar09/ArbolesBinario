// ArbolesBinarios.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include "ArbolBinario.h"
#include "Elemento.h"
#include "ElementoInt.h"
#include "ElementoDouble.h"
#include "ElementoPersona.h"
#include "Persona.h"
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	srand(time(NULL));

	ArbolBinario a;
	for (int i = 0; i < 10; ++i) {
		a.insertarElemento(new ElementoInt(rand() % 100));
	}
	ArbolBinario b;
	for (int i = 0; i < 10; ++i) {
		b.insertarElemento(new ElementoDouble((rand() % 100) + 1.1));
	}
	ArbolBinario c;
	Persona p1(5, "Pedro");
	Persona p2(2, "Andres");
	Persona p3(4, "Carmen");
	Persona p4(1, "Jose");
	Persona p5(3, "Maria");
	Persona p6(7, "Adriana");
	Persona p7(6, "Laura");
	c.insertarElemento(new ElementoPersona(p1));
	c.insertarElemento(new ElementoPersona(p2));
	c.insertarElemento(new ElementoPersona(p3));
	c.insertarElemento(new ElementoPersona(p4));
	c.insertarElemento(new ElementoPersona(p5));
	c.insertarElemento(new ElementoPersona(p6));
	c.insertarElemento(new ElementoPersona(p7));



	cout << "*** Inicia el arbol de ElementoInt" << endl;
	cout << a << endl;
	cout << "*** Finaliza el arbol de ElementoInt" << endl;
	cout << endl;
	cout << "*** Inicia el arbol de ElementoDouble" << endl;
	cout << b << endl;
	cout << "*** Finaliza el arbol de ElementoDouble" << endl;
	cout << "*** Inicia el arbol de ElementoPersona" << endl;
	cout << c << endl;
	cout << "*** Finaliza el arbol de ElementoPersona" << endl;

	system("PAUSE");
	return 0;
}

