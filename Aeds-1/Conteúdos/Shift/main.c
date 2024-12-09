#include <stdio.h>
#include "Funções.h"

#define MAX 50
int TAM;

int main() {
    int N;
    int vetor[MAX] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    LerTAM(&TAM);
    LerPosicao(vetor, &N, &TAM);
    Shift_Esquerda(vetor, &N, &TAM);
}