/*	Pratica2.cpp
 *  Created on: 29 de fev de 2020
 *      Author: Claudio
 */

#include <iostream>
#include "veiculo.h"

using namespace std;

int main(){

//	Veiculo v1 ("v1");
//	Aquatico a1 ("a1");
//	Terrestre t1 ("t1");
//	Aereo e1 ("e1");

	//Veiculo * terr, * aqua, * aereo;

	Veiculo * terr = new Terrestre("VT1");
	((Terrestre *)terr)->setCapacidadeMax(45);
	terr->mover();
	delete terr;

	Veiculo * aqua = new Aquatico("VQ1");
	((Aquatico *)aqua)->setCargaMax(12.5);
	aqua->mover();
	delete aqua;

	Veiculo * aereo = new Aereo("VA1");
	((Aereo *)aereo)->setVelocidadeMax(1040.5);
	aereo->mover();
	delete aereo;

	Veiculo * anfi = new Anfibio("VAnf1");
	anfi->mover();

	return 0;
}
