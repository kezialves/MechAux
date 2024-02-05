#include "item.h"
#include <ostream>

// ---------- CONSTRUTORES E DESTRUTOR ----------

Item::Item()
    : nome(""), preco(0.0), quantidade(0), descricao(""){}

Item::Item(string nome, float preco, int quantidade, string descricao)
    : nome(nome), preco(preco), quantidade(quantidade), descricao(descricao){}

Item::Item(Item &other){
    nome = other.getNome();
    preco = other.getPreco();
    quantidade = other.getQuantidade();
    descricao = other.getDescricao();
}

Item::~Item(){};

// ---------- GETTERS E SETTERS ----------

string Item::getNome() const{
    return nome;
}

bool Item::setNome(string nome){
    this->nome = nome;
    return true;
}

float Item::getPreco() const{
    return preco;
}

bool Item::setPreco(float preco){
    this->preco = preco;
    return true;
}

int Item::getQuantidade() const{
    return quantidade;
}

bool Item::setQuantidade(int quantidade){
    this->quantidade = quantidade;
    return true;
}

string Item::getDescricao() const{
    return descricao;
}

bool Item::setDescricao(string descricao){
    this->descricao = descricao;
    return true;
}

// ---------- SOBRECARGAS ----------

Item& Item::operator=(const Item& other){

    if(this == &other)
        return *this;

    nome = other.getNome();
    preco = other.getPreco();
    quantidade = other.getQuantidade();
    descricao = other.getDescricao();

    return *this;
}

ostream& operator<<(ostream& os, const Item& item) {
    os << item.getNome() << ":\n"
        << "\tR$: " << item.getPreco() << "\n"
        << "\tQtd: " << item.getQuantidade() << "\n"
        << item.getDescricao();
    return os;
}
