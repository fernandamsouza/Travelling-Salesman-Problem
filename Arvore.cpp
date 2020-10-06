#include "Arvore.hpp"
#include "Folha.hpp"

#include <stack>

Arvore::Arvore(Folha* raiz): raiz{raiz}{}

void Arvore::menorDistancia(){
    std::stack<Folha*> caminho;
    for(unsigned int i=0;(unsigned int) this->raiz->getFilhos().size();++i){
        Folha* aux = this->raiz->getFilhos().at(i);
        unsigned short j = 0;
        do{
            if(aux->getFilhos().size()>0){
                aux = aux->getFilhos().at(j);
                caminho.push(aux);
                j++;
            }else{
                break;
            }
        }while(aux!=this->raiz);
    }
}