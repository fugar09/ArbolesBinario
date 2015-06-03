/*
 * ElementoDouble.cpp
 *
 *  Created on: 28/4/2015
 *      Author: ruben.jimenez
 */
#include "stdafx.h"
#include "ElementoDouble.h"

ElementoDouble::ElementoDouble(double i) :
		i(i) {
}

ElementoDouble::~ElementoDouble() {
}

int ElementoDouble::compareTo(Elemento * otro) {
	double cmp = 0.0;
	ElementoDouble * eDouble = static_cast<ElementoDouble *>(otro);
	if (eDouble != 0) {
		cmp = this->i < eDouble->i ? -1 : this->i == eDouble->i ? 0 : 1;
	}
	return cmp;
}

void ElementoDouble::imprimir(ostream& out) const {
	out << i;
}
