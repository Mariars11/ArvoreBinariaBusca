# Projeto Final - Estrutura de Dados

## Árvore Binária de Busca
> Uma ABB é uma estrutura de dados em forma de árvore em que cada nó possui no máximo dois filhos, e a chave (valor) dos nós segue uma regra de ordenação que facilita a busca eficiente de elementos na árvore
> Valores maiores são inseridos no nó direito, enquanto que valores menores são inseridos no nó esquerdo.

## Estrutura do nó 

> struct TreeNode {
>    int key;                // Valor do nó
>    struct TreeNode* left;  // Ponteiro para o filho esquerdo
>    struct TreeNode* right; // Ponteiro para o filho direito
> };

## Operações
* Inserção
* Remoção
* Busca
* Percurso na arvore
* Minimo e maximo
