/*
 * veiculo.h
 *
 *  Created on: 21 de fev de 2020
 *      Author: Claudio
 */

#ifndef VEICULO_H_
#define VEICULO_H_

#include <iostream>
#include <stddef.h>
using namespace std;

class Roda{

	public:

		//Construtor
		Roda(){
			cout << "Roda foi construida\n";
		}

		//Destrutor
		~Roda(){
			cout << "Roda destruida\n";
		}
};



class veiculo{

	 string nome;
	 Roda * rodas;
	 int num_rodas;

	 public:

	 	 //Construtor
	 	 veiculo(const char * param){
	 		 this->nome = string(param);
	 		 rodas=NULL;
	 		 num_rodas=0;
	 		 cout << "Um novo veiculo foi criado, nome: " << this->nome << "\n";
	 	 }

	 	 //Destrutor
	 	 ~veiculo(){
	 		 cout << this->nome <<" foi destruido\n";
	 		 delete []rodas;
	 	 }

	 	void setNumRodas(int ale);

	    int getNumRodas();

 };

#endif /* VEICULO_H_ */
