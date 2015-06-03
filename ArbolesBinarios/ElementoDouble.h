/*
 * ElementoDouble.h
 *
 *  Created on: 28/4/2015
 *      Author: ruben.jimenez
 */

#pragma once

#include "Elemento.h"


using namespace std;

class ElementoDouble : public Elemento {

private:
	double i;

public:
	ElementoDouble(double i);
	~ElementoDouble();
	int compareTo(Elemento *);
	void imprimir(ostream &) const;

};


