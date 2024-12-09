#include <stdio.h>
#include <ctype.h>

#define MAX 100 
int TAM = 0; 

typedef struct{
    char nome[50];
    int idade;
} Pessoa;

void cadastro(Pessoa pessoas[]);
void listar(Pessoa pessoas[]);
int Media(Pessoa pessoas[]);

int main(){
  Pessoa pessoas[MAX];
  cadastro(pessoas);
  listar(pessoas);
  int media = Media(pessoas);
  printf("\nA media das idades da turma eh: %d", media);
return 0;
}

void cadastro(Pessoa pessoas[]){
  char again;
  if(TAM > MAX){
    printf("\nmaximo atingido\n");
  }
  else{
    printf("Nome:\n");
    fgets(pessoas[TAM].nome, 50, stdin);

    printf("idade:\n");
    scanf("%d", &pessoas[TAM].idade);
    getchar();
    TAM++;

    printf("Listar mais alguem?\n  (S OU N)\n");
    scanf(" %c", &again);
    getchar();
    again = toupper(again);
    if( again == 'S'){
      cadastro(pessoas);
    }
} 
}

void listar(Pessoa pessoas[]){
  for(int i=0;i<TAM;i++){
    printf("\n%d Nome = %s, ",i+1, pessoas[i].nome);
    printf("%d\n Idade", pessoas[i].idade);
  }
}

int Media(Pessoa pessoas[]){
  int soma = 0; 
  
  if(TAM > 0){
  for(int i = 0; i < TAM ; i++){
    soma += pessoas[i].idade;
  }
return soma/TAM;
}
}