#include "Cidade.hpp"
#include "Caminho.hpp"
#include <vector>
#include <string>

Cidade::Cidade(std::string nome, const float x,const float y, const unsigned int id): nome{nome},id{id}, x{x}, y{y}{
    this->vizinhos.clear();
}

void Cidade::adicionarVizinho(Cidade *cidade){
    Caminho *c = new Caminho(this, cidade);
    this->vizinhos.push_back(c);
}