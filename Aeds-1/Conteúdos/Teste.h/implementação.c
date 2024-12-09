// Calculadora.c
#include "Declarações.h"
#include <stdio.h> // Para usar printf se necessário

int soma(int a, int b) {
    return a + b;
}

int subtracao(int a, int b) {
    return a - b;
}

int multiplicacao(int a, int b) {
    return a * b;
}

float divisao(int a, int b) {
    if (b == 0) {
        printf("Erro: Divisão por zero!\n");
        return 0;
    }
    return (float)a / b;
}
