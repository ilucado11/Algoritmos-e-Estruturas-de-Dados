#include <iostream>

using namespace std;

template<class T>

class Pilha {
private:
// Atributos para array de items, capacidade e topo da pilha
	T * array;
	int capacidade;
	int cont;

public:
	Pilha(int capacidade) {
// instancia array de items, inicializa capacidade e topo
		this-> array = new T[capacidade]();
		this-> capacidade = capacidade;
		this-> cont= 0;
	}


	~Pilha() {
// destroy array de items
		delete [] this->array;
	}


	void empilha(T item) {
// empilha um item no topo da pilha; lança “Estouro da pilha” se cheia
		if(this ->cont+1 < this-> capacidade){
			this->array[cont] = item;
			this->cont++;
		}else{
			throw "Estouro de Pilha";
		}

	}


	T desempilha() {
// remove um item do topo da pilha; lança “Pilha vazia” se vazia
		T * item;
		if(this ->cont-1 > 0){
					item = this->array[cont-1];
					this->array[cont-1] = ;
					this->cont--;
				}else{
					throw "Estouro de Pilha";
				}
	}


	int tamanho() {
// retorna o número de elementos na pilha.
		return this->cont;
	}
};
