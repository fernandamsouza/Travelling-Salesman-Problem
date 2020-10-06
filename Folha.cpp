#include "Folha.hpp"

#include <vector>

#include "../Grafo/Cidade.hpp"

Folha::Folha(Cidade* dados): dados{dados}{}

void Folha::adicionaFilho(Folha* filho) {
    this->filhos.push_back(filho);
}