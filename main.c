#include <stdio.h>
#include "abb.h"

int main(int argc, char *argv[]){
    //Criação do nó raiz
    TreeNode *root;
    root = CriarNoRaiz(20);
    //Inserção dos nós
    Insert(root,5);
    Insert(root,1);
    Insert(root, 50);
    Insert(root,40);
    Insert(root, 42);
    //Impressões de valores para ver a estrutura
    printf("\nMaior Valor: %d", MaiorValor(root, root->key));
    printf("\nMenor Valor: %d", MenorValor(root, root->key));
    printf("\nExiste 2 na arvore? %d\n", Busca(root, 2));
    printf("\nExiste 40 na arvore? %d\n", Busca(root, 40));
    printf("\nPre ordem:\n");
    PreOrder(root);
    printf("\nEm ordem simetrica:\n");
    InOrder(root);
    printf("\nPos ordem:\n");
    PostOrder(root);
    printf("\n");
    /*
                    20
                  /    \
                 /    /  \
                5     40  50
                 \      \
                  \      \
                   1     42
             
    */
    //Deleta o 1 da arvore
    root = Delete(root, 1);
    //Impressão de percurso para ver como ficou sem o 1
    printf("\nPre ordem:\n");
    PreOrder(root);
    printf("\nEm ordem simetrica:\n");
    InOrder(root);
    printf("\nPos ordem:\n");
    PostOrder(root);
   
    /*
                   20
                  /  \
                 /   /\
                5   40 50
                        \
                         \
                         42
             
    */

    root = Delete(root, 40);
      /*
                   20
                  /  \
                 /   50
                /      \
               5       42             
    */

    printf("\n\nPre ordem:\n");
    PreOrder(root);
    printf("\nEm ordem simetrica:\n");
    InOrder(root);
    printf("\nPos ordem:\n");
    PostOrder(root);
   
    printf("\n");
    printf("\nMaior Valor: %d", MaiorValor(root, root->key));
    printf("\nMenor Valor: %d", MenorValor(root, root->key));
    printf("\nExiste 2 na arvore? %d\n", Busca(root, 2));
    printf("\nExiste 40 na arvore? %d\n", Busca(root, 40));
    //Libera o espaço de memoria
    LimparNos(root);
    return 0;
}