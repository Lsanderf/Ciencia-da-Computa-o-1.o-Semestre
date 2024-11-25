#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define max_str 100
#define max 5

int tam = 0;

typedef struct{
    char nome[max_str];
    int idade;
    float altura;
    char comida_favorita[max_str];
} Pessoa;

void ler(Pessoa jogador[]);
void escrever(Pessoa jogador[]);

int main(){
    Pessoa jogador[max];
    ler(jogador);
    escrever(jogador);
    return 0;
}

void ler(Pessoa jogador[]){
    char Ler_mais;
    printf("\nOla, o programa vai ler seus dados agora. ;D;\n");

    do{
        if(tam < max){
            printf("nome:\n");
            fgets(jogador[tam].nome, max_str, stdin);
            jogador[tam].nome[strcspn(jogador[tam].nome, "\n")] = 0;

            printf("Idade:\n");
            scanf("%d", &jogador[tam].idade);
            getchar();

            printf("Altura em metros:\n");
            scanf("%f", &jogador[tam].altura);
            getchar();

            printf("Comida favorita:\n");
            fgets(jogador[tam].comida_favorita, max_str, stdin);
            jogador[tam].comida_favorita[strcspn(jogador[tam].comida_favorita, "\n")] = 0;

            tam++;

            printf("Registrado!\nRegistrar mais alguem? (Digite: S OU N)\n");
            scanf(" %c", &Ler_mais);
            getchar();
            Ler_mais = toupper(Ler_mais);
            
            if(Ler_mais == 'N' || tam >= max) break;
        }
    } while(Ler_mais == 'S');
}

void escrever(Pessoa jogador[]){
    for(int i = 0; i < tam; i++){
        printf("\nDados da pessoa %d:\n", i+1);
        printf("Nome do %d.o: %s\n", i+1, jogador[i].nome);
        printf("Idade do %d.o: %d\n", i+1, jogador[i].idade);
        printf("Altura do %d.o: %.2f\n", i+1, jogador[i].altura);
        printf("Comida favorita do %d.o: %s\n", i+1, jogador[i].comida_favorita);
    }
    printf("\nObrigado!");
}