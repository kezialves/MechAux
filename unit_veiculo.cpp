#include "unit_veiculo.h"
#include "veiculo.h"

#include <iostream>
#include <cassert>

using namespace std;

// ---------- CONSTRUTORES E DESTRUTOR ----------

void unit_Veiculo_construtor_padrao() {
    Veiculo* veiculo = new Veiculo();

    assert(veiculo->getPlaca() == "");
    assert(veiculo->getModelo() == "");
    assert(veiculo->getMarca() == "");
    assert(veiculo->getAno() == 0);
    assert(veiculo->getEixos() == 0);
}

void unit_Veiculo_construtor_completo() {
    Veiculo* veiculo = new Veiculo("placa", "modelo", "marca", 10, 10);

    assert(veiculo->getPlaca() == "placa");
    assert(veiculo->getModelo() == "modelo");
    assert(veiculo->getMarca() == "marca");
    assert(veiculo->getAno() == 10);
    assert(veiculo->getEixos() == 10);
}

void unit_Veiculo_construtor_copia() {
    Veiculo* veiculo1 = new Veiculo();
    Veiculo* veiculo2 = new Veiculo(*veiculo1);

    assert(veiculo2 == veiculo1);
    delete(veiculo1);
    delete(veiculo2);
}

void unit_Veiculo_destrutor(){};

// ---------- GETTERS E SETTERS ----------

void unit_Veiculo_getPlaca() {
    Veiculo* veiculo = new Veiculo();

    string placa = veiculo->getPlaca();
    assert(placa == "");
    delete(&veiculo);
}

void unit_Veiculo_setPlaca() {
    Veiculo* veiculo = new Veiculo();

    veiculo->setPlaca("placa");
    assert(veiculo->getPlaca() == "placa");
    delete(&veiculo);
}

void unit_Veiculo_getModelo() {
    Veiculo* veiculo = new Veiculo();

    string modelo = veiculo->getModelo();
    assert(modelo == "");
    delete(&veiculo);
}

void unit_Veiculo_setModelo() {
    Veiculo* veiculo = new Veiculo();

    veiculo->setModelo("modelo");
    assert(veiculo->getModelo() == "modelo");
    delete(&veiculo);
}

void unit_Veiculo_getMarca() {
    Veiculo* veiculo = new Veiculo();

    string marca = veiculo->getMarca();
    assert(marca == "");
    delete(&veiculo);
}

void unit_Veiculo_setMarca() {
    Veiculo* veiculo = new Veiculo();

    veiculo->setMarca("marca");
    assert(veiculo->getMarca() == "marca");
    delete(&veiculo);
}

void unit_Veiculo_getAno() {
    Veiculo* veiculo = new Veiculo();

    int marca = veiculo->getAno();
    assert(marca == 0);
    delete(&veiculo);
}

void unit_Veiculo_setAno() {
    Veiculo* veiculo = new Veiculo();

    veiculo->setAno(10);
    assert(veiculo->getAno() == 10);
    delete(&veiculo);
}

void unit_Veiculo_getEixos() {
    Veiculo* veiculo = new Veiculo();

    int eixos = veiculo->getEixos();
    assert(eixos == 0);
    delete(&veiculo);
}

void unit_Veiculo_setEixos() {
    Veiculo* veiculo = new Veiculo();

    veiculo->setEixos(10);
    assert(veiculo->getEixos() == 10);
    delete(&veiculo);
}

// ---------- SOBRECARGA ----------

void unit_Veiculo_sobrecarga_atribuicao(){};

// ---------- RODAR TESTES ----------

void run_testes_unitarios_Veiculo() {

    cout << "*------------------------------*" << endl
        << "Testes de Veiculo iniciados.\n" << endl;

    cout << "#--- Construtor padrão." << endl;
    unit_Veiculo_construtor_padrao();
    cout << "#--- Construtor completo." << endl;
    unit_Veiculo_construtor_completo();
    cout << "#--- Construtor de cópia." << endl;
    unit_Veiculo_construtor_copia();
    cout << "#--- Destrutor." << endl;
    unit_Veiculo_destrutor();

    cout << "#--- Get da placa." << endl;
    unit_Veiculo_getPlaca();
    cout << "#--- Set da placa." << endl;
    unit_Veiculo_setPlaca();
    cout << "#--- Get do modelo." << endl;
    unit_Veiculo_getModelo();
    cout << "#--- Set do modelo." << endl;
    unit_Veiculo_setModelo();
    cout << "#--- Get da marca." << endl;
    unit_Veiculo_getMarca();
    cout << "#--- Set da marca." << endl;
    unit_Veiculo_setMarca();
    cout << "#--- Get do ano." << endl;
    unit_Veiculo_getAno();
    cout << "#--- Set do ano." << endl;
    unit_Veiculo_setAno();
    cout << "#--- Get da quantidade de eixos." << endl;
    unit_Veiculo_getEixos();
    cout << "#--- Set da quantidade de eixos." << endl;
    unit_Veiculo_setEixos();

    cout << "#--- Sobrecarga do operador de atribuição (=)." << endl;
    unit_Veiculo_sobrecarga_atribuicao();

    cout << "\nTestes de Veiculo passaram :)." << endl
        << "*------------------------------*\n" << endl;
}
