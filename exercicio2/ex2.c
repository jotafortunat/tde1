#include <stdio.h>

struct Produto {
    int id;
    char nome[50];
    float valor;
};

void buscarProdutoPorID(struct Produto produtos[], int n, int idBusca) {
    int encontrado = 0;
    for (int i = 0; i < n; i++) {
        if (produtos[i].id == idBusca) {
            printf("Produto encontrado: %s, %.2f\n", produtos[i].nome, produtos[i].valor);
            encontrado = 1;
            break;
        }
    }
    if (!encontrado) {
        printf("Produto com ID %d não encontrado.\n", idBusca);
    }
}

int main() {
    struct Produto produtos[5] = {
        {1, "Produto A", 50.0},
        {2, "Produto B", 30.0},
        {3, "Produto C", 60.0},
        {4, "Produto D", 25.0},
        {5, "Produto E", 40.0}
    };

    int idBusca;
    printf("Digite o ID do produto a buscar: ");
    scanf("%d", &idBusca);

    buscarProdutoPorID(produtos, 5, idBusca);

    return 0;
}
