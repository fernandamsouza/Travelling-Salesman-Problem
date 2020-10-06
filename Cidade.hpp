#ifndef CIDADE_HPP
#define CIDADE_HPP

#include <vector>
#include <list>
#include <string>
#include "Caminho.hpp"

class Caminho;

class Cidade {
   private:
    unsigned int id;
    float x, y;
    std::vector<Caminho*> vizinhos;
    std::list<int> lst;
    std::string nome;
   public:
    Cidade(std::string nome, const float x,const float y, const unsigned int id);
    void adicionarVizinho(Cidade *cidade);

    unsigned int getId(){ return this->id;}
    void setId(unsigned int id){ this->id = id; }

    float getX(){ return this->x;}
    void setX(float x){this->x = x;}
    
    float getY(){ return this->y;}
    void setY(float y){this->y = y;}

    void setAdj(int c){this->lst.push_back(c);}

    std::vector<Caminho*> getVizinhos(){return this->vizinhos;}
};

#endif