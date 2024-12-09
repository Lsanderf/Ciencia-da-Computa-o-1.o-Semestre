#include <stdio.h>
#include "Funções.h"

LerTAM(int *TAM){
   do{
    printf("Casas da sequencia: (MAXIMO = 10)\n");
    scanf("%d", TAM);

    if(TAM > 10 | TAM < 0){
        printf("Valor invalido\n");
    }
}while(TAM > 10 || TAM < 0);
}