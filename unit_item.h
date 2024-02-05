#ifndef UNIT_ITEM_H
#define UNIT_ITEM_H

// ---------- CONSTRUTORES E DESTRUTOR ----------

/**
 * @brief Teste unitário para o construtor padrão de Item.
*/
void unit_Item_construtor_padrao();

/**
 * @brief Teste unitário para o construtor completo de Item.
*/
void unit_Item_construtor_completo();

/**
 * @brief Teste unitário para o construtor de cópia de Item.
*/
void unit_Item_construtor_copia();

/**
 * @brief Teste unitário para o destrutor de Item.
*/
void unit_Item_destrutor();

// ---------- GETTERS E SETTERS ----------

/**
 * @brief Teste unitário para o método getNome.
*/
void unit_Item_getNome();

/**
 * @brief Teste unitário para o método setNome.
*/
void unit_Item_setNome();

/**
 * @brief Teste unitário para o método getPreco.
*/
void unit_Item_getPreco();

/**
 * @brief Teste unitário para o método setPreco.
*/
void unit_Item_setPreco();

/**
 * @brief Teste unitário para o método getQuantidade.
*/
void unit_Item_getQuantidade();

/**
 * @brief Teste unitário para o método setQuantidade.
*/
void unit_Item_setQuantidade();

/**
 * @brief Teste unitário para o método getDescricao.
*/
void unit_Item_getDescricao();

/**
 * @brief Teste unitário para o método setDescricao.
*/
void unit_Item_setDescricao();

// ---------- SOBRECARGA ----------

/**
 * @brief Teste unitário para a sobrecarga do operador de atribuição (=) para Item.
*/
void unit_Item_sobrecarga_atribuicao();


// ---------- RODAR TESTES ----------

/**
 * @brief Função para rodar todos os testes unitários de Item.
*/
void run_testes_unitarios_Item();

#endif // UNIT_ITEM_H
