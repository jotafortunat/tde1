#include <stdio.h>

struct Produto {
    int id;
    char nome[50];
    float valor;
};

void atualizarValorProduto(struct Produto produtos[], int n, int id, float novoValor) {
    for (int i = 0; i < n; i++) {
        if (produtos[i].id == id) {
            produtos[i].valor = novoValor;
            printf("Valor do produto atualizado para %.2f\n", novoValor);
            return;
        }
    }
    printf("Produto com ID %d não encontrado.\n", id);
}

int main() {
    struct Produto produtos[5] = {
        {1, "Produto A", 50.0},
        {2, "Produto B", 30.0},
        {3, "Produto C", 60.0},
        {4, "Produto D", 25.0},
        {5, "Produto E", 40.0}
    };

    int id;
    float novoValor;
    printf("Digite o ID do produto para atualizar: ");
    scanf("%d", &id);
    printf("Digite o novo valor: ");
    scanf("%f", &novoValor);

    atualizarValorProduto(produtos, 5, id, novoValor);

    return 0;
}

