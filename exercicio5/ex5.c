#include <stdio.h>

struct Produto {
    int id;
    char nome[50];
    float valor;
};

void exibirProdutosAcimaMedia(struct Produto produtos[], int n, float media) {
    printf("Produtos acima da média:\n");
    for (int i = 0; i < n; i++) {
        if (produtos[i].valor > media) {
            printf("%s - %.2f\n", produtos[i].nome, produtos[i].valor);
        }
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

    float media = 42.0; // Exemplo fixo de média
    exibirProdutosAcimaMedia(produtos, 5, media);

    return 0;
}
