#ifndef ARVORE_HPP
#define ARVORE_HPP

#include "Folha.hpp"

class Arvore {
   private:
    Folha* raiz;

   public:
    Arvore(Folha* raiz);
    void menorDistancia();

    Folha* getRaiz() { return this->raiz; }
};

#endif