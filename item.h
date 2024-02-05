#ifndef ITEM_H
#define ITEM_H

#include <string>

using namespace std;

/**
* @brief Classe que representa um item (peça/ferramenta).
*/
class Item {
    string nome; ///< Nome do item.
    float preco; ///< Preço unitário do item.
    int quantidade; ///< Quantidade do item em estoque.
    string descricao; ///< Descrição do item.

public:

    // ---------- CONSTRUTORES E DESTRUTOR ----------

    /**
    * @brief Construtor padrão de Item.
    */
    Item();
    
    /**
    * @brief Construtor completo de Item.
    * @param nome Nome do item.
    * @param preco Preço unitário do item.
    * @param quantidade Quantidade do item.
    * @param descricao Descrição do item.
    */
    Item(string, float, int, string);

    /**
    * @brief Construtor de cópia de Item.
    * @param other Outro objeto de Item a ser copiado.
    */
    Item(Item&);

    /**
    * @brief Destrutor virtual de Item.
    */
    virtual ~Item();

    // ---------- GETTERS E SETTERS ----------

    /**
    * @brief Getter do nome de um item.
    * @return Nome do item.
    */
    string getNome() const;
    
    /**
     * @brief Setter do nome de um item.
     * @param nome Valor string a ser definido para o atributo da classe.
     * @return true se for atribuído com sucesso e false caso contrário.
     */
    bool setNome(string);

    /**
     * @brief Getter do preco de um item.
     * @return Preço do item.
     */
    float getPreco() const;
    
    /**
     * @brief Setter do preco de um item.
     * @param preco Valor float a ser definido para o atributo da classe.
     * @return true se for atribuído com sucesso e false caso contrário.
     */
    bool setPreco(float);

    /**
     * @brief Getter da quantidade de um item.
     * @return Quantidade do item.
     */
    int getQuantidade() const;
    
    /**
     * @brief Setter da quantidade de um item.
     * @param quantidade Valor int a ser definido para o atributo da classe.
     * @return true se for atribuído com sucesso e false caso contrário.
     */
    bool setQuantidade(int);

    /**
     * @brief Getter da descricao de um item.
     * @return Descrição do item.
     */
    string getDescricao() const;
    
    /**
     * @brief Setter de descricao de um item.
     * @param descricao Valor string a ser definido para o atributo da classe.
     * @return true se for atribuído com sucesso e false caso contrário.
     */
    bool setDescricao(string);

    // ---------- SOBRECARGAS ----------

    /**
     * @brief Sobrecarga do operador = para Item.
     * @param other Outro objeto de Item a ser atribuído ao item atual.
     * @return Referência para o objeto após atribuição.
     */
    Item& operator=(const Item&);

    /**
     * @brief Sobrecarga do operador << para Item.
     * @param os fluxo de saída para onde o item é enviado
     * @param item item a ser impresso na tela
     * @return retorna o fluxo de saída necessário para imprimir na tela o item, com todas as suas informações, útil para retornar as informações do item em uma consulta
     */
    friend ostream& operator<<(ostream&, const Item&);
};

#endif // ITEM_H
