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

void buscarClubePorID(struct Clube clubes[], int n, int idBusca) {
    int encontrado = 0;
    for (int i = 0; i < n; i++) {
        if (clubes[i].id == idBusca) {
            printf("Clube encontrado: %s\n", clubes[i].nome);
            printf("Vitórias: %d, Empates: %d, Derrotas: %d\n", clubes[i].vitorias, clubes[i].empates, clubes[i].derrotas);
            printf("Gols pró: %d, Gols contra: %d\n", clubes[i].gols_pro, clubes[i].gols_contra);
            encontrado = 1;
            break;
        }
    }
    if (!encontrado) {
        printf("

