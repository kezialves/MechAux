#include "estoque.h"

// ---------- CONSTRUTOR E DESTRUTOR ----------

Estoque::Estoque(){}
Estoque::~Estoque(){}

// ---------- ITERADOR ----------

Estoque::ItensIterador Estoque::itensInicio(){
    return itens.begin();
}

Estoque::ItensIterador Estoque::itensFim(){
    return itens.end();
}

// ---------- MÉTODOS ----------

bool Estoque::adicionaItem(Item* item) {
    itens.push_back(item);
    return true;
}

Item Estoque::consulta(string nome) {
    
    for(auto itemptr : itens){
        if(itemptr->getNome() == nome)
            return *itemptr;
    }

    return Item();

}

// Item* item = consulta(nome)
// if (item == NULL)
//     cout << "não existe"
// else
//     cout << item
