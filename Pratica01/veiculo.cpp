/*
 * veiculo.cpp
 *
 *  Created on: 21 de fev de 2020
 *      Author: Claudio
 */

#include "veiculo.h"


 int veiculo::getNumRodas(){
//	 cout << num_rodas << " rodas.\n";
	 return this->num_rodas;
 };

  void veiculo::setNumRodas(int ale){
	 delete []rodas;
	 rodas = new Roda[ale]();
	 num_rodas = ale;
 };
