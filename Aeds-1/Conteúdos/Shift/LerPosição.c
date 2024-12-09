#include <stdio.h>
#include "Funções.h"

    void LerPosicao(int vetor[],int *N,int *TAM){
    do{ 
        printf("Qual a posicao que deseja apagar? (0 a %d)\n", *TAM - 1);
        scanf("%d", &N);
        if(*N < 0 || *N >= TAM){
            printf("Posicao invalida!\n");
        }
    }while(*N < 0 || *N >= TAM);
}