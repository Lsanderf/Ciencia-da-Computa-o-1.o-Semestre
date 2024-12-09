#include <stdio.h>

int main(){
    int seq[] = {0, 1, 2, 3, 4, 5, 6, 7, 7, 7};
    int tamanho = 10;
    int moda = seq[0];
    int maxFrequencia = 0;

    for (int i = 0; i < tamanho; i++) {
        int frequencia = 0;
        for (int j = 0; j < tamanho; j++) {
            if (seq[j] == seq[i]) {
                frequencia++;
            }
        }
        if (frequencia > maxFrequencia) {
            maxFrequencia = frequencia;
            moda = seq[i];
        }
    }

    printf("A moda eh: %d (aparece %d vezes)\n", moda, maxFrequencia);

    return 0;
}