/*
 * veiculo.cpp
 *
 *  Created on: 21 de fev de 2020
 *      Author: Claudio
 */

#include "veiculo.h"


 int veiculo::getNumRodas(){
	 return 0;

 };

  void veiculo::setNumRodas(int ale){
	 rodas = new Roda[ale]();
	 cout << "Rodas construídas\n";
 };

