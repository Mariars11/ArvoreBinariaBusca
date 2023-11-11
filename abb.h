typedef struct TreeNode {
    int key;                // Valor do nó
    struct TreeNode* left;  // Ponteiro para o filho esquerdo
    struct TreeNode* right; // Ponteiro para o filho direito
} TreeNode;

void InserirNode(TreeNode **t, int key);
void ImprimirArvore(TreeNode **root);
int MaiorValor(TreeNode **root, int maiorValor);
int MenorValor(TreeNode **root, int menorValor);

