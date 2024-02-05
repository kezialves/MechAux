#ifndef VEICULO_H
#define VEICULO_H

#include <string>

using namespace std;

/**
* @brief Classe que representa um veículo.
*/
class Veiculo {
    string placa; ///< Placa do veículo.
    string modelo; ///< Modelo do veículo.
    string marca; ///< Marca do veículo.
    int ano; ///< Ano de lançamento do veículo.
    int eixos; ///< Quantidade de eixos do veículo.
    
public:

    // ---------- CONSTRUTORES E DESTRUTOR ----------

    /**
    * @brief Construtor padrão de Veiculo.
    */
    Veiculo();
    
    /**
    * @brief Construtor completo de Veiculo.
    * @param placa Placa do veículo.
    * @param modelo Modelo do veículo.
    * @param marca Marca do veículo.
    * @param ano Ano do veículo.
    * @param eixos Quantidade de eixos do veículo.
    */
    Veiculo(string, string, string, int, int);

    /**
    * @brief Construtor de cópia de Veiculo.
    * @param other Outro objeto de Veiculo a ser copiado.
    */
    Veiculo(Veiculo&);

    /**
    * @brief Destrutor virtual de Veiculo.
    */
    virtual ~Veiculo();

    // ---------- GETTERS E SETTERS ----------

    /**
    * @brief Getter da placa de um veículo.
    * @return Placa do veículo.
    */
    string getPlaca() const;
    
    /**
     * @brief Setter da placa de um veículo.
     * @param placa Valor int a ser definido para o atributo da classe.
     * @return true se for atribuído com sucesso e false caso contrário.
     */
    bool setPlaca(string);
    
    /**
    * @brief Getter do modelo de um veículo.
    * @return Modelo do veículo.
    */
    string getModelo() const;

    /**
     * @brief Setter do modelo de um veículo.
     * @param nodelo Valor int a ser definido para o atributo da classe.
     * @return true se for atribuído com sucesso e false caso contrário.
     */
    bool setModelo(string);
    
    /**
    * @brief Getter da marca de um veículo.
    * @return Marca do veículo.
    */
    string getMarca() const;

    /**
     * @brief Setter da marca de um veículo.
     * @param marca Valor int a ser definido para o atributo da classe.
     * @return true se for atribuído com sucesso e false caso contrário.
     */
    bool setMarca(string);


    /**
    * @brief Getter do ano de um veículo.
    * @return Ano do veículo.
    */
    int getAno() const;

    /**
     * @brief Setter de ano de um veículo.
     * @param ano Valor int a ser definido para o atributo da classe.
     * @return true se for atribuído com sucesso e false caso contrário.
     */
    bool setAno(int);

    /**
    * @brief Getter da quantidade de eixos de um veículo.
    * @return Quantidade de eixos do veículo.
    */
    int getEixos() const;
    
    /**
     * @brief Setter da quantidade de eixos de um veículo.
     * @param eixos Valor int a ser definido para o atributo da classe.
     * @return true se for atribuído com sucesso e false caso contrário.
     */
    bool setEixos(int);

    // ---------- SOBRECARGA ----------
    
    /**
     * @brief Sobrecarga do operador = para Veiculo.
     * @param other Outro objeto de Veiculo a ser atribuído ao veículo atual.
     * @return Referência para o objeto após atribuição.
     */
    Veiculo& operator=(const Veiculo&);
};

#endif // VEICULO_H
