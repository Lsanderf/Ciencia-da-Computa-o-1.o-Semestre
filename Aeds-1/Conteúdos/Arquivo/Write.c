#include <stdio.h>

int main(){   
    FILE *arq = fopen("Pra prova de amanha", "a");
   if (arq != NULL){
 
    fprintf(arq, "\nADD Commit");
} 
   
    fclose(arq);
}