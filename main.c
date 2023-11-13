#include <stdio.h>
#include "abb.h"

int main(int argc, char *argv[]){
    TreeNode *root;
    root = CriarNoRaiz(20);
    Insert(root,5);
    Insert(root,1);
    Insert(root,40);
    Insert(root, 42);
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
                  /  \
                 /    \
                5      40
                 \      \
                  \      \
                   1     42
             
    */
    root = Delete(root, 1);
    /*
                   20
                  /  \
                 /    \
                5      40
                        \
                         \
                         42
             
    */

    root = Delete(root, 40);
      /*
                   20
                  /  \
                 /    \
                5      42             
    */

    printf("\nPre ordem:\n");
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
    LimparNos(root);
    return 0;
}