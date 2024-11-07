#include <stdio.h>

struct Clube {
    int id;
    char nome[50];
    int vitorias;
    int empates;
    int derrotas;
    int gols_pro;
    int gols_contra;
};

int calcularPontuacao(struct Clube clube) {
    return (clube.vitorias * 3) + (clube.empates * 1);
}

int main() {
    struct Clube clubes[10];
    
    for (int i = 0; i < 10; i++) {
        printf("Digite os dados do clube %d\n", i + 1);
        printf("ID: ");
        scanf("%d", &clubes[i].id);
        printf("Nome: ");
        scanf(" %[^\n]", clubes[i].nome);
        printf("Vitórias: ");
        scanf("%d", &clubes[i].vitorias);
        printf("Empates: ");
        scanf("%d", &clubes[i].empates);
        printf("Derrotas: ");
        scanf("%d", &clubes[i].derrotas);
        printf("Gols pró: ");
        scanf("%d", &clubes[i].gols_pro);
        printf("Gols contra: ");
        scanf("%d", &clubes[i].gols_contra);

        int pontos = calcularPontuacao(clubes[i]);
        printf("Pontuação do clube %s: %d\n\n", clubes[i].nome, pontos);
    }

    return 0;
}
