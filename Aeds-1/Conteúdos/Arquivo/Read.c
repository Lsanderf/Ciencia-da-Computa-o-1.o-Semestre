#include <stdio.h>

int main() {
    char Escrever[255];  
    FILE *arq = fopen("Pra Prova de amanha", "r"); 
    if (arq != NULL) {
     
        while (fgets(Escrever, sizeof(Escrever), arq) != NULL) {
            printf("%s", Escrever);  
        }
        fclose(arq);  
    } else {
        printf("Impossivel achar o arquivo\n");  
    }

    return 0;
}
