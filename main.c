#include <stdio.h>
#include "abb.h"

int main(int argc, char *argv[]){
    TreeNode *root;
    root = CriarNoRaiz(20);
    Insert(root,5);
    Insert(root,1);
    Insert(root,40);
    Insert(root, 42);
    printf("\nExiste 2 na arvore? %d\n", Busca(root, 2));
    printf("\nExiste 40 na arvore? %d\n", Busca(root, 40));

    inorder(root);
    printf("\n");

    root = Delete(root, 1);
    /*
                   20
                 /    \
                /      \
               5       30
                 \     /\
                  \   /  \
                  15 25   40
                /           \
               /             \
              9              45
            /   \           /
           /     \         /
          7      12       42
    */

    root = Delete(root, 40);
    /*
                   20
                 /    \
                /      \
               5       30
                 \     /\
                  \   /  \
                  15 25  45
                 /       / 
                /       /   
               9       42    
             /   \          
            /     \        
           7      12      
    */

    root = Delete(root, 45);
    /*
                   20
                 /    \
                /      \
               5       30
                 \     /\
                  \   /  \
                  15 25  42
                 /          
                /            
               9            
             /   \          
            /     \        
           7      12      
    */
    root = Delete(root, 9);
    inorder(root);
    /*
                   20
                 /    \
                /      \
               5       30
                 \     /\
                  \   /  \
                  15 25  42
                 /          
                /            
               12            
             /             
            /             
           7            
    */
    printf("\n");
    printf("\nMaior Valor: %d", MaiorValor(root, root->key));
    printf("\nMenor Valor: %d", MenorValor(root, root->key));

    return 0;
}