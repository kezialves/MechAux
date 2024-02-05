#include "unit_item.h"
#include "item.h"

#include <iostream>
#include <cassert>

using namespace std;

// ---------- CONSTRUTORES E DESTRUTOR ----------

void unit_Item_construtor_padrao() {    

    Item* item = new Item();

    assert(item->getNome() == "");
    assert(item->getPreco() == 0.0);
    assert(item->getQuantidade() == 0);
    assert(item->getDescricao() == "");
    
    delete(&item);
}

void unit_Item_construtor_completo() {

    Item* item = new Item("item", 10.0, 10, "item");

    assert(item->getNome() == "item");
    assert(item->getPreco() == 10.0);
    assert(item->getQuantidade() == 10);
    assert(item->getDescricao() == "item");

    delete(&item);
}

void unit_Item_construtor_copia(){
    
    // Item* item1 = new Item();
    // Item* item2 = new Item(*item1);

    // assert(item2 == item1);

    // delete(&item1);
    // delete(&item2);
}

void unit_Item_destrutor(){};

// ---------- GETTERS E SETTERS ----------

void unit_Item_getNome(){

    Item* item = new Item();
    string nome = item->getNome();
    assert(nome == "");
    delete(&item);

}

void unit_Item_setNome(){

    Item* item = new Item();
    item->setNome("teste");
    assert(item->getNome() == "teste");
    delete(&item);
}

void unit_Item_setPreco(){

    Item* item = new Item();
    item->setPreco(15.0);
    assert(item->getPreco() == 15.0);
    delete(&item);
}

void unit_Item_getPreco(){

    Item* item = new Item();
    float preco = item->getPreco();
    assert(preco == 0.0);
    delete(&item);
}

void unit_Item_setQuantidade(){

    Item* item = new Item();
    item->setQuantidade(5);
    assert(item->getQuantidade() == 5);
    delete(&item);
}

void unit_Item_getQuantidade(){

    Item* item = new Item();
    float quantidade = item->getQuantidade();
    assert(quantidade == 0.0);
    delete(&item);
}

void unit_Item_getDescricao(){

    Item* item = new Item();
    string descricao = item->getDescricao();
    assert(descricao == "");
    delete(&item);
}

void unit_Item_setDescricao(){

    Item* item = new Item();
    item->setDescricao("teste");
    assert(item->getDescricao() == "teste");
    delete(&item);
}

// ---------- SOBRECARGA ----------

void unit_Item_sobrecarga_atribuicao(){};

// ---------- RODAR TESTES ----------

void run_testes_unitarios_Item() {

    cout << "*------------------------------*" << endl
        << "Testes de Item iniciados.\n" << endl;

    cout << "#--- Construtor padrão." << endl;
    unit_Item_construtor_padrao();
    cout << "#--- Construtor completo." << endl;
    unit_Item_construtor_completo();
    cout << "#--- Construtor de cópia." << endl;
    unit_Item_construtor_copia();
    cout << "#--- Destrutor." << endl;
    unit_Item_destrutor();

    cout << "#--- Get do nome." << endl;
    unit_Item_getNome();
    cout << "#--- Set do nome." << endl;
    unit_Item_setNome();
    cout << "#--- Get do preço." << endl;
    unit_Item_getPreco();
    cout << "#--- Set do preço." << endl;
    unit_Item_setPreco();
    cout << "#--- Get da quantidade." << endl;
    unit_Item_getQuantidade();
    cout << "#--- Set da quantidade." << endl;
    unit_Item_setQuantidade();
    cout << "#--- Get da descrição." << endl;
    unit_Item_getDescricao();
    cout << "#--- Set da descrição." << endl;
    unit_Item_setDescricao();

    cout << "#--- Sobrecarga do operador de atribuição (=)." << endl;
    unit_Item_sobrecarga_atribuicao();

    cout << "\nTestes de Item passaram :)." << endl
        << "*------------------------------*\n" << endl;
}
