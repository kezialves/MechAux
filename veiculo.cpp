#include "veiculo.h"

// ---------- CONSTRUTORES E DESTRUTOR ----------

Veiculo::Veiculo()
    : placa(""), modelo(""), marca(""), ano(0), eixos(0){}

Veiculo::Veiculo(string placa, string modelo, string marca, int ano, int eixos)
    : placa(placa), modelo(modelo), marca(marca), ano(ano), eixos(eixos){}

Veiculo::Veiculo(Veiculo& other) {
    placa = other.getPlaca();
    modelo = other.getModelo();
    marca = other.getMarca();
    ano = other.getAno();
    eixos = other.getEixos();
}

Veiculo::~Veiculo(){};

// ---------- GETTERS E SETTERS ----------

string Veiculo::getPlaca() const{
    return placa;
}
bool Veiculo::setPlaca(string placa){
    this->placa = placa;
    return true;
}

string Veiculo::getModelo() const{
    return modelo;
}
bool Veiculo::setModelo(string modelo){
    this->modelo = modelo;
    return true;
}

string Veiculo::getMarca() const{
    return marca;
}
bool Veiculo::setMarca(string marca){
    this->marca = marca;
    return true;
}

int Veiculo::getAno() const{
    return ano;
}
bool Veiculo::setAno(int ano){
    this->ano = ano;
    return true;
}

int Veiculo::getEixos() const{
    return eixos;
}
bool Veiculo::setEixos(int eixos){
    this->eixos = eixos;
    return true;
}

// ---------- SOBRECARGA ----------

Veiculo& Veiculo::operator=(const Veiculo& other){

    if(this == &other)
        return *this;

    placa = other.getPlaca();
    modelo = other.getModelo();
    marca = other.getMarca();
    ano = other.getAno();
    eixos = other.getEixos();

    return *this;

}
