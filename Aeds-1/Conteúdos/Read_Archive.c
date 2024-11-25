#include <stdio.h> 

int main(){
    FILE *pF= fopen("C:\\Users\\Lucca\\Desktop\\BubbleSoft.js", "r");
    char buffer[255];
   
   if(pF != NULL){
    while(fgets(buffer, 255, pF)!=NULL){
    printf("%s", buffer);
        }
    } else {
        printf("Archive NOT found!");
    }
    fclose(pF);
}