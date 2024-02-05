#ifndef ESTOQUE_H
#define ESTOQUE_H

#include <vector>
#include "item.h"

using namespace std;

/**
* @brief Classe que representa o estoque de itens da oficina.
*/
class Estoque {
protected:

    vector<Item*> itens; ///< Vetor de itens em estoque.

private:

    /**
    * @brief Construtor de cópia de Estoque.
    * @param other Outro objeto de Estoque a ser copiado.
    */
    Estoque(Estoque&);

    /**
     * @brief Sobrecarga do operador = para Estoque.
     * @param other Outro objeto de Estoque a ser atribuído ao estoque atual.
     * @return Referência para o objeto após atribuição.
     */
    Estoque& operator=(const Estoque&);

public:

    // ---------- CONSTRUTOR E DESTRUTOR ----------

    /**
    * @brief Construtor padrão de Estoque.
    */
    Estoque();

    /**
    * @brief Destrutor virtual de Estoque.
    */
    virtual ~Estoque();

    // ---------- ITERADOR ----------

    /**
    * @brief Tipo do interador do contâiner de itens.
    */
    typedef vector<Item*>::iterator ItensIterador;

    /**
    * @brief Iterador para o início do contâiner de itens.
    * @return Ponteiro iterador para o início do contâiner de itens.
    */
    ItensIterador itensInicio();

    /**
    * @brief Iterador para o fim do contâiner de itens.
    * @return Ponteiro iterador para o fim do contâiner de itens.
    */
    ItensIterador itensFim();

    // ---------- MÉTODOS ----------

    /**
    * @brief Adiciona um item ao contâiner de itens.
    * @param item Ponteiro para o item a ser adicionado.
    */
    bool adicionaItem(Item*);

    /**
    * @brief Permite realizar consultas ao estoque.
    * @param nome Nome do item a ser pesquisado.
    * @return true caso o item esteja no estoque e seja exibido e false caso contrário.
    */
    Item consulta(string);
};

#endif // ESTOQUE_H
