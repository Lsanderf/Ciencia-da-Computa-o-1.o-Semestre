// main.c
#include <stdio.h>
#include "Declarações.h"

int main() {
    int x = 10, y = 5;

    printf("Soma: %d\n", soma(x, y));
    printf("Subtração: %d\n", subtracao(x, y));
    printf("Multiplicação: %d\n", multiplicacao(x, y));
    printf("Divisão: %.2f\n", divisao(x, y));

    return 0;
}
