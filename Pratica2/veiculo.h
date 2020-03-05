/*
 * veiculo.h
 *  Created on: 29 de fev de 2020
 *      Author: Claudio
 */

#ifndef VEICULO_H_
#define VEICULO_H_

# include <iostream>
using namespace std;

//*********************************************************************
class Veiculo{
protected:
	string nome;

public:
	Veiculo(const char * nove){
		this->nome=string(nove);
		cout << nove << " foi criado.\n";
	}

	virtual void mover() = 0;

	virtual ~Veiculo() {
		cout << nome << " foi destruido.\n";
	};
};


//*****************************************************************
class Terrestre : public Veiculo{
	int cap_pass = 5; //numero max de passageiros

public:
	Terrestre (const char * nove) : Veiculo (nove){
		this->cap_pass;

		}

	void mover();

	void setCapacidadeMax(int ale);

	int getCapacidadeMax();

	virtual ~Terrestre() {
			cout << nome << " foi destruido.\n";
		};
};



//*****************************************************************
class Aquatico : public Veiculo{
	float carga_max = 10; //em toneladas

public:
	Aquatico (const char * nove) : Veiculo (nove){
		this->carga_max;

		}

	void mover();

	void setCargaMax(float ale);

	int getCargaMax();

	virtual ~Aquatico() {
			cout << nome << " foi destruido.\n";
		};

};


//***********************************************************************
class Aereo : public Veiculo{
	float vel_max = 100; //velocidade em km/h

public:
	Aereo (const char * nove) : Veiculo (nove){
		this->vel_max;

		}

	void mover();

	void setVelocidadeMax(float ale);

	int getVelocidadeMax();

	virtual ~Aereo() {
			cout << nome << " foi destruido.\n";
		};
};


#endif /* VEICULO_H_ */
