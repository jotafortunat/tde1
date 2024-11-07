#include <stdio.h>

struct Produto {
    int id;
    char nome[50];
    float valor;
};

float calcularMediaPrecos(struct Produto produtos[], int n) {
    float soma = 0.0;
    for (int i = 0; i < n; i++) {
        soma += produtos[i].valor;
    }
    return soma / n;
}

int main() {
    struct Produto produtos[5] = {
        {1, "Produto A", 50.0},
        {2, "Produto B", 30.0},
        {3, "Produto C", 60.0},
        {4, "Produto D", 25.0},
        {5, "Produto E", 40.0}
    };

    float media = calcularMediaPrecos(produtos, 5);
    printf("Média dos preços: %.2f\n", media);

    return 0;
}

