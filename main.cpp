#include <iostream>
#include <vector>
#include "Grafo.hpp"
#include "Cidade.hpp"
#include "Caminho.hpp"
#define INF 99999999

int main(){

    Cidade *c1{new Cidade("Joinville",1.0,1.2,0)};
    Cidade *c2{new Cidade("Blumenau",10.1,1.2,1)};
    Cidade *c3{new Cidade("Florianopolis",3.0,5.2,2)};
    Cidade *c4{new Cidade("Tubarao",4.1,6.2,3)};
    Cidade *c5{new Cidade("Palhoca",3.1,6.2,4)};
     Cidade *c6{new Cidade("Gaspar",15.1,6.3,5)};
     Cidade *c7{new Cidade("Indaial",4.12,12.2,6)};
     Cidade *c8{new Cidade("Brusque",12.234,6.6,7)};
     Cidade *c9{new Cidade("Sao Bento do Sul",43.13,7.2,8)};
     Cidade *c10{new Cidade("Mafra",41.12,6.12,9)};

    Caminho *cm2{new Caminho(c1,c2)};
    Caminho *cm3{new Caminho(c1,c3)};
    Caminho *cm1{new Caminho(c1,c4)};
    Caminho *cm4{new Caminho(c1,c5)};
    Caminho *cm21{new Caminho(c1,c6)};
    Caminho *cm22{new Caminho(c1,c7)};
    Caminho *cm23{new Caminho(c1,c8)};
    Caminho *cm24{new Caminho(c1,c9)};
    Caminho *cm25{new Caminho(c1,c10)};

    Caminho *cm6{new Caminho(c2,c3)};
    Caminho *cm7{new Caminho(c2,c4)};
    Caminho *cm8{new Caminho(c2,c5)};
    Caminho *cm90{new Caminho(c2,c6)};
    Caminho *cm26{new Caminho(c2,c7)};
    Caminho *cm27{new Caminho(c2,c8)};
    Caminho *cm28{new Caminho(c2,c9)};
    Caminho *cm29{new Caminho(c2,c10)};
    Caminho *cm91{new Caminho(c2,c1)};

    Caminho *cm9{new Caminho(c3,c1)};
    Caminho *cm10{new Caminho(c3,c2)};
    Caminho *cm11{new Caminho(c3,c4)};
    Caminho *cm12{new Caminho(c3,c5)};
    Caminho *cm30{new Caminho(c3,c6)};
    Caminho *cm31{new Caminho(c3,c7)};
    Caminho *cm32{new Caminho(c3,c8)};
    Caminho *cm33{new Caminho(c3,c9)};
    Caminho *cm34{new Caminho(c3,c10)};  

    Caminho *cm13{new Caminho(c4,c1)};
    Caminho *cm14{new Caminho(c4,c2)};
    Caminho *cm15{new Caminho(c4,c3)};
    Caminho *cm16{new Caminho(c4,c5)};
    Caminho *cm35{new Caminho(c4,c6)};
    Caminho *cm36{new Caminho(c4,c7)};
    Caminho *cm37{new Caminho(c4,c8)};
    Caminho *cm38{new Caminho(c4,c9)};
    Caminho *cm39{new Caminho(c4,c10)};

    Caminho *cm17{new Caminho(c5,c1)};
    Caminho *cm18{new Caminho(c5,c2)};
    Caminho *cm19{new Caminho(c5,c3)};
    Caminho *cm20{new Caminho(c5,c4)};
    Caminho *cm40{new Caminho(c5,c6)};
    Caminho *cm41{new Caminho(c5,c7)};
    Caminho *cm42{new Caminho(c5,c8)};
    Caminho *cm43{new Caminho(c5,c9)};
    Caminho *cm44{new Caminho(c5,c10)};

    Caminho *cm45{new Caminho(c6,c1)};
    Caminho *cm46{new Caminho(c6,c2)};
    Caminho *cm47{new Caminho(c6,c3)};
    Caminho *cm48{new Caminho(c6,c4)};
    Caminho *cm49{new Caminho(c6,c5)};
    Caminho *cm50{new Caminho(c6,c7)};
    Caminho *cm51{new Caminho(c6,c8)};
    Caminho *cm52{new Caminho(c6,c9)};
    Caminho *cm53{new Caminho(c6,c10)};

    Caminho *cm54{new Caminho(c7,c1)};
    Caminho *cm55{new Caminho(c7,c2)};
    Caminho *cm56{new Caminho(c7,c3)};
    Caminho *cm57{new Caminho(c7,c4)};
    Caminho *cm58{new Caminho(c7,c5)};
    Caminho *cm59{new Caminho(c7,c6)};
    Caminho *cm60{new Caminho(c7,c8)};
    Caminho *cm61{new Caminho(c7,c9)};
    Caminho *cm62{new Caminho(c7,c10)};

    Caminho *cm63{new Caminho(c8,c1)};
    Caminho *cm64{new Caminho(c8,c2)};
    Caminho *cm65{new Caminho(c8,c3)};
    Caminho *cm66{new Caminho(c8,c4)};
    Caminho *cm67{new Caminho(c8,c5)};
    Caminho *cm68{new Caminho(c8,c6)};
    Caminho *cm69{new Caminho(c8,c7)};
    Caminho *cm70{new Caminho(c8,c9)};
    Caminho *cm71{new Caminho(c8,c10)};

    Caminho *cm72{new Caminho(c9,c1)};
    Caminho *cm73{new Caminho(c9,c2)};
    Caminho *cm74{new Caminho(c9,c3)};
    Caminho *cm75{new Caminho(c9,c4)};
    Caminho *cm76{new Caminho(c9,c5)};
    Caminho *cm77{new Caminho(c9,c6)};
    Caminho *cm78{new Caminho(c9,c7)};
    Caminho *cm79{new Caminho(c9,c8)};
    Caminho *cm80{new Caminho(c9,c10)};

    Caminho *cm81{new Caminho(c10,c1)};
    Caminho *cm82{new Caminho(c10,c2)};
    Caminho *cm83{new Caminho(c10,c3)};
    Caminho *cm84{new Caminho(c10,c4)};
    Caminho *cm85{new Caminho(c10,c5)};
    Caminho *cm86{new Caminho(c10,c6)};
    Caminho *cm87{new Caminho(c10,c7)};
    Caminho *cm88{new Caminho(c10,c8)};
    Caminho *cm89{new Caminho(c10,c9)};

    
    //std::cout<<"Passou caminho"<<std::endl;
    Grafo *g{new Grafo()};
    //std::cout<<"Passou grafo"<<std::endl;
    g->adicionaCaminho(cm1);
    //std::cout<<"Passou add caminho"<<std::endl;
    g->adicionaCaminho(cm2);
    g->adicionaCaminho(cm3);
    g->adicionaCaminho(cm4);
    g->adicionaCaminho(cm6);
    g->adicionaCaminho(cm7);
    g->adicionaCaminho(cm8);
    g->adicionaCaminho(cm9);
    g->adicionaCaminho(cm10);
    g->adicionaCaminho(cm11);
    g->adicionaCaminho(cm12);
    g->adicionaCaminho(cm13);
    g->adicionaCaminho(cm14);
    g->adicionaCaminho(cm15);
    g->adicionaCaminho(cm16);
    g->adicionaCaminho(cm17);
    g->adicionaCaminho(cm18);
    g->adicionaCaminho(cm19);
    g->adicionaCaminho(cm20);
    g->adicionaCaminho(cm21);
    g->adicionaCaminho(cm22);
    g->adicionaCaminho(cm23);
    g->adicionaCaminho(cm24);
    g->adicionaCaminho(cm25);
    g->adicionaCaminho(cm26);
    g->adicionaCaminho(cm27);
    g->adicionaCaminho(cm28);
    g->adicionaCaminho(cm29);
    g->adicionaCaminho(cm30);
    g->adicionaCaminho(cm31);
    g->adicionaCaminho(cm32);
    g->adicionaCaminho(cm33);
    g->adicionaCaminho(cm34);
    g->adicionaCaminho(cm35);
    g->adicionaCaminho(cm36);
    g->adicionaCaminho(cm37);
    g->adicionaCaminho(cm38);
    g->adicionaCaminho(cm39);
    g->adicionaCaminho(cm40);
    g->adicionaCaminho(cm41);
    g->adicionaCaminho(cm42);
    g->adicionaCaminho(cm43);
    g->adicionaCaminho(cm44);
    g->adicionaCaminho(cm45);
    g->adicionaCaminho(cm46);
    g->adicionaCaminho(cm47);
    g->adicionaCaminho(cm48);
    g->adicionaCaminho(cm49);
    g->adicionaCaminho(cm50);
    g->adicionaCaminho(cm51);
    g->adicionaCaminho(cm52);
    g->adicionaCaminho(cm53);
    g->adicionaCaminho(cm54);
    g->adicionaCaminho(cm55);
    g->adicionaCaminho(cm56);
    g->adicionaCaminho(cm57);
    g->adicionaCaminho(cm58);
    g->adicionaCaminho(cm59);
    g->adicionaCaminho(cm60);
    g->adicionaCaminho(cm61);
    g->adicionaCaminho(cm62);
    g->adicionaCaminho(cm63);
    g->adicionaCaminho(cm64);
    g->adicionaCaminho(cm65);
    g->adicionaCaminho(cm66);
    g->adicionaCaminho(cm67);
    g->adicionaCaminho(cm68);
    g->adicionaCaminho(cm69);
    g->adicionaCaminho(cm70);
    g->adicionaCaminho(cm71);
    g->adicionaCaminho(cm72);
    g->adicionaCaminho(cm73);
    g->adicionaCaminho(cm74);
    g->adicionaCaminho(cm75);
    g->adicionaCaminho(cm76);
    g->adicionaCaminho(cm77);
    g->adicionaCaminho(cm78);
    g->adicionaCaminho(cm79);
    g->adicionaCaminho(cm80);
    g->adicionaCaminho(cm81);
    g->adicionaCaminho(cm82);
    g->adicionaCaminho(cm83);
    g->adicionaCaminho(cm84);
    g->adicionaCaminho(cm85);
    g->adicionaCaminho(cm86);
    g->adicionaCaminho(cm87);
    g->adicionaCaminho(cm88);
    g->adicionaCaminho(cm89);
    g->adicionaCaminho(cm90);
    g->adicionaCaminho(cm91);
    
    g->imprimeMatriz();
    std::vector<double> result;
    std::vector<double> result2;
    double mS = 0.0;
    double menor = INF;
    double menor2 = INF;
    double ordenacaoPeso;
    double resultado = 0;
    // --------------------------------
    // Mínimos sucessivos 
    for (int i = 0; i < 10; i++) {
        mS = g->minimosSucessivos(result, i);
        printf ("\nMS:%lf\n", mS);
        printf ("\n-----------------------\n");
        if (mS < menor) {
            menor = mS;
        }
    }
    printf("Menor distância entre Minimos sucessivos = %lf", menor);
    printf ("\n-----------------------\n");
    // --------------------------------
    // Ordenação Peso das Arestas 
    Grafo* aux{new Grafo()};
    aux = g;
    aux->ordenarVertice();
    ordenacaoPeso = g->ordenacaoPesoArestas(10, aux->getCaminhos().at(0)->getCidades().at(0)->getId(), result2);
    printf ("\nOrdenação do Peso das Arestas:%lf\n", ordenacaoPeso);
    // --------------------------------
    // Construção de árvores
    // 
}       