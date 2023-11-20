#include <stdio.h>
#include <stdlib.h>
#include "abb.h"

int Busca(TreeNode *root, int x)
{
    if(root->right == NULL && root->left == NULL){
         return 0;
    }
    else if(root->key == x) 
    {
         return 1;
    }
    else if(x > root->key)
    {
        return Busca(root->right, x);
    }  
    else if(x < root->key)
    {
        return Busca(root->left,x);
    } 
}
int MaiorValor(TreeNode *root, int maiorValor){
    if(root->right != NULL){
        if(maiorValor < root->right->key){
           return MaiorValor(root->right, root->right->key);
        }
    }
    return maiorValor;
}
int MenorValor(TreeNode *root, int menorValor){
    if(root->left != NULL){
        if(menorValor > root->left->key){
           return MenorValor(root->left, root->left->key);
        }
    }
    return menorValor;
}

TreeNode* MenorValorDireita(TreeNode *root)
{
    if(root == NULL)
        return NULL;
    else if(root->left != NULL) 
        return MenorValorDireita(root->left); 
    return root;
}


TreeNode* CriarNoRaiz(int key)
{
    TreeNode *t;
    t = malloc(sizeof(TreeNode));
    t->key = key;
    t->left = NULL;
    t->right = NULL;

    return t;
}

TreeNode* Insert(TreeNode *root, int  key)
{
    if(root == NULL){
        return CriarNoRaiz(key);
    }
    else if(key > root->key) {
        root->right = Insert(root->right, key);
    }   
    else{
        root->left = Insert(root->left, key);
    } 
       
    return root;
}
TreeNode* LimparNos(TreeNode *root)
{
    if(root==NULL){
        return NULL;
    }  
    else
    {
        free(root);
        return NULL;    
    }
    return root;
}
TreeNode* Delete(TreeNode *root, int key)
{
    if(root==NULL){
        return NULL;
    } 
    if (key > root->key){
        root->right = Delete(root->right, key);
    }
    else if(key<root->key){
        root->left = Delete(root->left, key);
    }  
    else
    {
        //Sem filhos
        if(root->left==NULL && root->right==NULL)
        {
            free(root);
            return NULL;
        }
        //Um filho
        else if(root->left==NULL || root->right==NULL)
        {
            TreeNode *temp;
            if(root->left==NULL)
                temp = root->right;
            else
                temp = root->left;
            free(root);
            return temp;
        }

        //Dois filhos
        else
        {
            TreeNode *temp = MenorValorDireita(root->right);
            root->key = temp->key;
            root->right = Delete(root->right, temp->key);
        }
    }
    return root;
}
//esquerda, nó, direita
void InOrder(TreeNode *root)
{
    if(root!=NULL) 
    {
        InOrder(root->left); 
        printf(" %d ", root->key); 
        InOrder(root->right);
    }
}
//no, esquerda, direita
void PreOrder(TreeNode *root)
{
    if(root != NULL){
        printf(" %d ", root->key);
        PreOrder(root->left);
        PreOrder(root->right);
    }
    
}
//esquerda, direita, no
void PostOrder(TreeNode *root)
{
    if(root != NULL){
        PostOrder(root->left);
        PostOrder(root->right);
        printf(" %d ", root->key);
    } 
}
