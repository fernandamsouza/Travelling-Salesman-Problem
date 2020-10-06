#ifndef CAMINHO_HPP
#define CAMINHO_HPP

#include <vector>

#include "Cidade.hpp"

class Cidade;

class Caminho {
   private:
    std::vector<Cidade*> cidades;
    float distancia;
   public:
    Caminho(Cidade *c1, Cidade *c2);

    float getDistancia() { return this->distancia; }

    std::vector<Cidade*> getCidades(){return this->cidades;}
};

#endif