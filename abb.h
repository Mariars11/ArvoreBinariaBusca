typedef struct TreeNode {
    int key;                // Valor do nó
    struct TreeNode *left;  // Ponteiro para o filho esquerdo
    struct TreeNode *right; // Ponteiro para o filho direito
} TreeNode;

TreeNode* MenorValorDireita(TreeNode *root);
TreeNode* CriarNoRaiz(int x);
int MenorValor(TreeNode *root, int menorValor);
int MaiorValor(TreeNode *root, int maiorValor);
TreeNode* Insert(TreeNode *root, int x);
TreeNode* Delete(TreeNode *root, int x);
void InOrder(TreeNode *root);
int Busca(TreeNode *root, int x);
void PostOrder(TreeNode *root);
void PreOrder(TreeNode *root);
TreeNode* LimparNos(TreeNode *root);


