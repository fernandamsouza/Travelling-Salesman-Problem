#include "Grafo.hpp"

#include <algorithm>
#include <climits>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <string>
#include <vector>
#include <stack>

#define INF 99999999
#include "Caminho.hpp"
#include "Cidade.hpp"

Grafo::Grafo() {
    this->matriz.resize(10);
    for (unsigned int i = 0; i < 10; ++i) {
        for (unsigned int j = 0; j < 10; ++j) {
            this->matriz[i].push_back(-1);
        }
    }
}

// Função para ordenarCaminhos por BubbleSort
void Grafo::ordenarVertice() {
    int i, j;
    for (i = 0; i < this->caminhos.size() - 1; i++){
        //std::cout<<i<<": "<<std::endl;
        // Last i elements are already in place
        for (j = 0; j < this->caminhos.size() - i-1; j++) {
            //std::cout<<j<<" ";
            if (this->caminhos.at(j)->getDistancia() > this->caminhos.at(j+1)->getDistancia()){
                Caminho* temp = this->caminhos.at(j);
                this->caminhos.at(j) = this->caminhos.at(j+1);
                this->caminhos.at(j+1) = temp;
            }
        }
    }
} 


void Grafo::adicionaCaminho(Caminho* caminho) {
    this->caminhos.push_back(caminho);
    this->matriz.at(caminho->getCidades().at(0)->getId()).at(caminho->getCidades().at(1)->getId()) = caminho->getDistancia();
}

void Grafo::imprimeMatriz() {
    for (unsigned int i = 0; i < 10; ++i) {
        for (unsigned int j = 0; j < 10; ++j) {
            std::cout << this->matriz.at(i).at(j) << "\t";
        }
        std::cout << std::endl;
    }
}

double Grafo::minimosSucessivos(std::vector<double>& result, int inicio) {
    // criando um vetor de cidades visitadas
    int* visitados = NULL;
    visitados = new int[10];
    memset(visitados, 0, 10 * sizeof(int));

    // inicializando a cidade atual como sendo a de início
    int cidadeAtual = inicio;
    // Inicializando true em visitados
    visitados[inicio] = true;
    result.clear();
    result.push_back(inicio);
    // Inicializando a cidade mais próxima da cidade atual
    int cidadeMaisProxima;
    double distanciaTotal = 0.0;
    int count = 0;
    double distanciaMinima = INF;
    printf("\nCaminho:\n");
    printf("Vértice inicial %d\n", inicio);
    while (count < 9) {
        distanciaMinima = INF;
        for (int j = 0; j < 10; j++) {
            if (!visitados[j]) {
                if (this->matriz.at(cidadeAtual).at(j) < distanciaMinima) {
                    distanciaMinima = this->matriz.at(cidadeAtual).at(j);
                    cidadeMaisProxima = j;
                }
            }
        }
        if (!visitados[cidadeMaisProxima]) {
            result.push_back(cidadeMaisProxima);
            distanciaTotal += distanciaMinima;
            visitados[cidadeMaisProxima] = true;
            cidadeAtual = cidadeMaisProxima;
            printf("Vértice -> %d", cidadeMaisProxima);
            printf(" Peso: %lf\n", distanciaMinima);
            count++;
        }
    }
    distanciaMinima = this->matriz.at(cidadeAtual).at(inicio);
    result.push_back(inicio);
    delete[] visitados;
    return distanciaTotal;
}

bool contem(Cidade *c, std::vector<Cidade*> vec){
    for(unsigned int i=0;i<10;i++){
        if(c == vec.at(i)){
            return false;
        }
    }
    return true;
}

bool Grafo::verificaNum(Grafo* min,Caminho* c){
    int c1,c2;
    for(unsigned int j=0;j<10;j++){
        c1=0;
        c2=0;
        //std::cout<<min->matriz.at(c->getCidades().at(0)->getId()).at(j)<<" ";
        if(min->matriz.at(c->getCidades().at(0)->getId()).at(j) != -1){
            c1++;
        }
        if(min->matriz.at(c->getCidades().at(1)->getId()).at(j) != -1){
            c2++;
        }
    }
    if(c1<3 && c2<3){
        return true;
    }
    return false;
}


std::vector<std::vector<int>> Grafo::transformaLista(Grafo* g){
    std::vector<std::vector<int>> adj(10);
    for(unsigned int i=0;i<10;i++) {
        for(unsigned int j=0;j<10;j++){
            if(g->getMatriz().at(i).at(j) !=-1){
                adj[i].push_back(g->getMatriz().at(i).at(j));
            }
        }
    }
    return adj;
}


double Grafo::ordenacaoPesoArestas(int numVertices, int menorVerticeInicio, std::vector<double> &caminho) {
	// Matriz auxiliar para representar o resultado da ordenação do Peso das Arestas.
	double **resultado = 0;
	resultado = new double *[numVertices];
    // Alocação da matriz que conterá o resultado.
	for (int auxiliar = 0; auxiliar < numVertices; auxiliar++) {
		resultado[auxiliar] = new double[numVertices];
		memset(resultado[auxiliar], 0, numVertices * sizeof(double));
	}
    // Variável para armazenar o número de arestas ligadas a determinado vértice.
	int numeroDeArestasAdicionadas = 0;
	// Criação de um vetor para localizar o índice do vértice e defini-lo como falso (caso for selecionado).
	int *visitado = NULL;
	visitado = new int[numVertices];
	memset(visitado, 0, numVertices * sizeof(int));
	// Torna o vértice de entrada (menor) como visitado (true).
	visitado[menorVerticeInicio] = true;
	int linha, coluna; 
    
	// Execução do algoritmo visando a ordenação do peso das arestas ligadas ao menorVerticeInicio.
	while (numeroDeArestasAdicionadas < numVertices - 1) {
        // Define uma variável auxiliar para ser a mínima, visando ordenar o peso das arestas (caminhos).
		double pesoMinimo = INF;
		linha, coluna = 0;
		for (int i = 0; i < numVertices; i++) {
			if (visitado[i] == 1) {
				for (int j = 0; j < numVertices; j++) {
                    // Caso determinado vértice adjacente ainda não estiver sido visitado
					if (visitado[j] == 0) {
                        // Ordenação crescente dos pesos das arestas. 
						if (pesoMinimo > this->matriz.at(i).at(j)) {
							pesoMinimo = this->matriz.at(i).at(j);
							linha = i;
							coluna = j;
						}
					}
				}
			}					
		}
        // Passagem do resultado para a matriz auxiliar resultante 
		resultado[linha][coluna] = this->matriz.at(linha).at(coluna);
		resultado[coluna][linha] = this->matriz.at(linha).at(coluna);
		visitado[coluna] = true;
		numeroDeArestasAdicionadas++;
	}

    // DFS para percorrer a matriz auxiliar resultante visando a não ocorrência de ciclos
    double menorCaminho = 0;
	std::stack<int> pilha;
	int auxMenorVertice = menorVerticeInicio;
	int verticeInicial = menorVerticeInicio;
    std::cout << "Caminho percorrido:" << std::endl;
	// Para todos os vértices visitados, é setado como falso novamente.
	memset(visitado, 0, numVertices * sizeof(int));
	pilha.push(auxMenorVertice);
    // Percorre todos os vértices colocando os não visitados na pilha. 
	while (pilha.empty() == false) {
		auxMenorVertice = pilha.top(); // armazena o vértice do topo da pilha.
		menorCaminho += this->matriz.at(auxMenorVertice).at(verticeInicial); // Somador para armazenar o resultado do menor caminho.
		std::cout << "Vértice: " << auxMenorVertice <<" Peso: " << this->matriz.at(auxMenorVertice).at(verticeInicial) << std::endl;
		pilha.pop();
		caminho.push_back(auxMenorVertice);
		visitado[auxMenorVertice] = 1;
        // Varre todos os vértices adjacentes ao menor, empilhando os que não foram visitados. 
		for (int k = 0; k < numVertices; k++) {
			if (!visitado[k] && resultado[auxMenorVertice][k]) {
				pilha.push(k);
			}
		}
		verticeInicial = auxMenorVertice; // O novo vértice inicial é o adjacente com menor peso do menor vértice inicial. 
	}
	for (int p = 0; p < numVertices; p++) {
		delete[] resultado[p];
	}
	delete[] resultado;
	delete[] visitado;
	return menorCaminho;
}


// Construção da árvore
/*
void Grafo::arvore(int *raiz,int atual){
    if(*raiz == atual){
        return;
    }
    for(int i=0;i<10;i++){
        if(this->getMatriz().at(*raiz).at(i)!=-1){
            for(int j =0;j<10;j++){
                arvore(raiz,j);
            }
        }
    }
}
*/