#ifndef UNIT_ESTOQUE_H
#define UNIT_ESTOQUE_H

// ---------- CONSTRUTOR E DESTRUTOR ----------

/**
 * @brief Teste unitário para o construtor padrão de Estoque.
*/
void unit_Estoque_construtor_padrao();

/**
 * @brief Teste unitário para o destrutor de Estoque.
*/
void unit_Estoque_destrutor();

// ---------- ITERADOR ----------

/**
 * @brief Teste unitário para o método de iterador itensInicio.
*/
void unit_Estoque_itensInicio();

/**
 * @brief Teste unitário para o método de iterador itensFim.
*/
void unit_Estoque_itensFim();

// ---------- MÉTODOS ----------

/**
 * @brief Teste unitário para o método adicionaItem.
*/
void unit_Estoque_adicionaItem();

/**
 * @brief Teste unitário para o método consulta.
*/
void unit_Estoque_consulta();

// ---------- RODAR TESTES ----------

/**
 * @brief Função para rodar todos os testes unitários de Estoque.
*/
void run_testes_unitarios_Estoque();

#endif // UNIT_ESTOQUE_H
