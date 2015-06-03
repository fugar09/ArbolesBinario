/*
 * ElementoPersona.cpp
 *
 *  Created on: May 8, 2015
 *      Author: b38603
 */
#include "stdafx.h"
#include "ElementoPersona.h"
#include "Persona.h"

ElementoPersona::ElementoPersona(Persona & p) {
		this->p=p;

}

ElementoPersona::~ElementoPersona() {

}

void ElementoPersona::imprimir(ostream& out) const {
	out << "(" << p.getId() << " " << p.getNombre() << ")";
}

int ElementoPersona::compareTo(Elemento * otro) {
	int cmp = 0.0;
	ElementoPersona * ePersona = static_cast<ElementoPersona *>(otro);
	if (ePersona != 0) {
		cmp = this->p.getId() < ePersona->p.getId() ? -1 : this->p.getId() == ePersona->p.getId() ? 0 : 1;
	}
	return cmp;
}
