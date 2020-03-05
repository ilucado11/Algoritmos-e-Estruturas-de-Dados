/*
 * pratica01.cpp
 *
 *  Created on: 21 de fev de 2020
 *      Author: Claudio
 */

#include <iostream>
#include "veiculo.h"
using namespace std;

int main() {

//	Veiculo veiculo1("v1");
//	{
//	Veiculo veiculo2("v2");
//	{
//	Veiculo veiculo3("v3");
//	}
//	}

	veiculo * obj1 = new veiculo("v1");
	obj1->setNumRodas(4);
	cout << obj1->getNumRodas() <<endl;
	delete obj1;

	veiculo * obj2 = new veiculo("v2");
	obj2->setNumRodas(2);
	cout << obj2->getNumRodas() << endl;
	delete obj2;

	veiculo * obj3 = new veiculo("v3");
	obj3->setNumRodas(6);
	obj3->setNumRodas(6);

	cout << obj3->getNumRodas() << endl;
	delete obj3;

	std::cout << "Primeira aplicacao c++" << endl;

	return 0;
}

