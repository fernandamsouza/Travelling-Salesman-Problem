#ifndef GRAFO_HPP
#define GRAFO_HPP

#include <vector>
#include <stack>
#include "Caminho.hpp"
#include "Cidade.hpp"

class Grafo {
   private:
    std::vector<std::vector<double>> matriz;

    std::vector<Caminho*> caminhos;
   public:
    Grafo();

    void adicionaCaminho(Caminho* caminho);
    std::vector<std::vector<double>> getMatriz(){return this->matriz;}
    void imprimeMatriz();
    double minimosSucessivos(std::vector<double> &result, int inicio);
    std::vector<Caminho*> getCaminhos(){return this->caminhos;}
    void ordenarVertice();
    bool verificaNum(Grafo* min,Caminho* c);
    std::pair<std::stack<int>,double> dfs(int numVertices,int raiz, std::vector<std::vector<double>> matriz);
    std::vector<std::vector<int>> transformaLista(Grafo* g);
    double ordenacaoPesoArestas(int v, int s, std::vector<double> &path);
    void arvore(int *raiz,int atual);
};

#endif