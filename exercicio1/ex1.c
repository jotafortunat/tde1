#include <stdio.h>

struct Produto {
    int id;
    char nome[50];
    float valor;
};

int contarProdutosAbaixoValor(struct Produto produtos[], int n, float limite) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (produtos[i].valor < limite) {
            count++;
        }
    }
    return count;
}

int main() {
    struct Produto produtos[5] = {
        {1, "Produto A", 50.0},
        {2, "Produto B", 30.0},
        {3, "Produto C", 60.0},
        {4, "Produto D", 25.0},
        {5, "Produto E", 40.0}
    };

    float limite;
    printf("Digite o valor limite: ");
    scanf("%f", &limite);

    int count = contarProdutosAbaixoValor(produtos, 5, limite);
    printf("Número de produtos abaixo de %.2f: %d\n", limite, count);

    return 0;
}
