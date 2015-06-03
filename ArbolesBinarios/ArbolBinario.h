/*
 * ArbolBinario.h
 *
 *  Created on: 5/5/2015
 *      Author: ruben.jimenez
 */

#pragma once

#include "Elemento.h"

using namespace std;

class ArbolBinario {

	friend ostream & operator<<(ostream &, ArbolBinario &);

private:
	Elemento * raiz;

public:
	ArbolBinario();
	virtual ~ArbolBinario();

	void insertarElemento(Elemento *);

private:
	void insertarElementoRec(Elemento *, Elemento *);
	void imprimir(Elemento *, ostream &, int);
};

ostream & operator<<(ostream &, ArbolBinario &);


