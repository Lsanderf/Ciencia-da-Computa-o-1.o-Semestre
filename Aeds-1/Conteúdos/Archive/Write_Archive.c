#include <stdio.h>

int main(){
    FILE *pF = fopen("C:\\Users\\Lucca\\Desktop\\Dragon Ball.txt", "w");
    if(pF != NULL){
    fprintf(pF, "\nGoku");
    }else{
        printf("Archive NOT found!");
    }
     fclose(pF);

}