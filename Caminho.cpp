#include "Caminho.hpp"
#include "Cidade.hpp"
#include <vector>
#include <math.h>

Caminho::Caminho(Cidade *c1, Cidade *c2){
    if(c1 != c2 && c1 != nullptr && c2 != nullptr){
        for(unsigned int i=0;i<(unsigned int) c1->getVizinhos().size();++i){
            if(c1->getVizinhos().at(i)->getCidades().at(0) == c2 || c1->getVizinhos().at(i)->getCidades().at(1) == c2){
                return;
            }
        }
        for(unsigned int i=0;i<(unsigned int) c2->getVizinhos().size();++i){
            if(c2->getVizinhos().at(i)->getCidades().at(0) == c1 || c2->getVizinhos().at(i)->getCidades().at(1) == c1){
                return;
            }
        }
        this->cidades.push_back(c1);
        this->cidades.push_back(c2);
        
        this->distancia = sqrt((pow(c1->getX() - c2->getX(),2)) + ((pow(c1->getY() - c2->getY(),2))));
    }
}