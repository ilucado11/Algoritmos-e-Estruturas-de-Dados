/*
 * veiculo.cpp
 *
 *  Created on: 29 de fev de 2020
 *      Author: Claudio
 */

#include "veiculo.h"

void Veiculo::mover(){
	cout << "Veiculo " << this->nome << " moveu.\n";
};

//get e set de terrestre*********************************************
void Terrestre::setCapacidadeMax(int ale){
	this->cap_pass=ale;
};

int Terrestre::getCapacidadeMax(){
  return 0;
};

void Terrestre::mover(){
	cout << "Veiculo terrestre " << nome << " moveu.\n";
};



//get e set de aquatico***************************************************
void Aquatico::setCargaMax(float ale){
	this->carga_max=ale;
};

int Aquatico::getCargaMax(){
  return 0;
};

void Aquatico::mover(){
	cout << "Veiculo aquatico " <<  << " moveu.\n";
};


//get e set de aereo*******************************************************
void Aereo::setVelocidadeMax(float ale){
	this->vel_max=ale;
};

int Aereo::getVelocidadeMax(){
  return 0;
};

void Aereo::mover(){
	cout << "Veiculo aereo " << this->nome << " moveu.\n";
};
