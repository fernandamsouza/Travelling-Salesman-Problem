#ifndef FOLHA_HPP
#define FOLHA_HPP

#include <vector>

#include "../Grafo/Cidade.hpp"

class Folha {
   private:
    Cidade* dados;
    Cidade* pai;
    std::vector<Folha*> filhos;

   public:
    void adicionaFilho(Folha* filho);
    Folha(Cidade* dados);
    Cidade* getDados() { return this->dados; }
    std::vector<Folha*> getFilhos(){return this->filhos;}
};

#endif