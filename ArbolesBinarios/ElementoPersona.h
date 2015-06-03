/*
 * ElementoPersona.h
 *
 *  Created on: May 8, 2015
 *      Author: b38603
 */
#pragma once

#include "Elemento.h"
#include "Persona.h"


using namespace std;

class ElementoPersona: public Elemento {
private:
	Persona p;

public:
	ElementoPersona(Persona & p);
	int compareTo(Elemento *);
	void imprimir(ostream &) const;
	virtual ~ElementoPersona();
};


