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
    FILE *pf = fopen("Lista pessoas", "a"); 
    if(TAM > MAX){
    printf("\nmaximo atingido\n");
  }
  else{
    printf("Nome:\n");
    fgets(pessoas[TAM].nome, 50, stdin);

    printf("idade:\n");
    scanf("%d", &pessoas[TAM].idade);
    getchar(); 
    
    fprintf(pf, "Pessoa %d --> Nome: %s\nIdade: %d.\n", TAM + 1,pessoas[TAM].nome , pessoas[TAM].idade);
   
   TAM++; 
   
    FILE *pft = fopen("Tam", "w");
    fprintf(pft, "TAMANHO: %i",TAM);
   
   
    printf("Listar mais alguem?\n  (S OU N)\n");
    scanf(" %c", &again);
    getchar();
    again = toupper(again);
    if( again == 'S'){
      cadastro(pessoas);
    }
    
} 
fclose(pf);
}

void listar(Pessoa pessoas[]){
    char buffer[14];
    FILE *pf = fopen("Lista Pessoas", "r");
    getchar();
    while( fgets(buffer, 14, pf) != NULL){
       printf(" %s", buffer);
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