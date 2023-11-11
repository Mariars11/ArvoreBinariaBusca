#include <stdio.h>
#include "abb.h"

int main(int argc, char *argv[]){
     TreeNode *root = NULL;
   
    InserirNode(&root, 5);
    InserirNode(&root, 14);
    InserirNode(&root, 8);
    InserirNode(&root, 2);
    printf("No pai: %d", root->key);
    ImprimirArvore(&root);


    return 0;
}