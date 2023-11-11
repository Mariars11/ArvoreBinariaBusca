#include <stdio.h>
#include <stdlib.h>
#include "abb.h"

void ImprimirArvore(TreeNode **root){
        if((*root)->left != NULL){
            printf("\n%d", (*root)->left->key);
            ImprimirArvore(&(*root)->left);
        }
        if((*root)->right != NULL){
            printf("\t%d", (*root)->right->key);
            ImprimirArvore(&(*root)->right);
        }
}
//O valor maior é inserido a direita, e o menor a esquerda
void InserirNode(TreeNode **root, int key)
{
    if((*root) == NULL)
    {
        *root = (struct TreeNode*) malloc(sizeof(TreeNode));
        (*root)->key = key;
        (*root)->left = NULL;
        (*root)->right = NULL;
    }
    else
    {
        if(key < (*root)->key)
        {
            InserirNode(&((*root)->left), key);
        }
        else
        {
            InserirNode(&((*root)->right), key);
        }
    }
}

