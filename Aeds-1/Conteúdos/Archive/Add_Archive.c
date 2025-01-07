#include <stdio.h>

int main(){ 
    FILE *arq = fopen("C:\\Users\\Lucca\\Desktop\\Arquivo\\Arquivo Teste", "a");
    if(arq != NULL){ 
    fprintf(arq, "\nAdd mensages");
    }
    fclose(arq);
}


 