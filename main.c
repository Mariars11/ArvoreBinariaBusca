#include <stdio.h>
#include "abb.h"

int main(int argc, char *argv[]){
     TreeNode *root = NULL;
   
    InserirNode(&root, 5);
    InserirNode(&root, 14);
    InserirNode(&root, 16);
    InserirNode(&root, 8);
    InserirNode(&root, 3);
    InserirNode(&root, 2);
    InserirNode(&root, 1);
    InserirNode(&root, -5);
    InserirNode(&root, 15);

    printf("No pai: %d", root->key);
    ImprimirArvore(&root);

    printf("Maior valor: %d", MaiorValor(&root, root->key));
    printf("\nMenor valor: %d", MenorValor(&root, root->key));


    return 0;
}