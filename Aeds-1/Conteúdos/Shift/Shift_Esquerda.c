#include <stdio.h>
#include "Funções.h"

void Shift_Esquerda(int vetor[], int *N, int *TAM) {
    if (*N >= 0 && *N < *TAM) {
        for (int i = *N; i < *TAM - 1; i++) {
            vetor[i] = vetor[i + 1];
        }
        (*TAM)--;
        printf("Vetor atualizado:\n");
        for (int i = 0; i < *TAM; i++) {
            printf("%d, ", vetor[i]);
        }
        printf("\n");
    } else {
        printf("\nPosição inválida!\n");
    }
}