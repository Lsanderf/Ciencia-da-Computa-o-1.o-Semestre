#include <stdio.h>
#define MAX 500
void Espalhar_agua(char parede[][MAX], int N, int M);

int main(){
int N, M;
    char parede[MAX][MAX];
    
    scanf("%d %d", &N, &M);
    
    for (int i = 0; i < N; i++) {
        scanf("%s", parede[i]);
    }
    
    Espalhar_agua(parede, N, M);
    
    for (int i = 0; i < N; i++) {
        printf("%s\n", parede[i]);
    }
    
    return 0;
}

void Espalhar_agua(char parede[MAX][MAX], int N, int M){
   for (int i = 1; i < N; i++) { 
        for (int j = 0; j < M; j++) {
            if (parede[i][j] == '.') { 
                if (parede[i - 1][j] == 'o') { 
                    parede[i][j] = 'o';
                } 
                if (j > 0 && parede[i][j - 1] == 'o' && i + 1 < N && parede[i + 1][j - 1] == '#') {
                    parede[i][j] = 'o';
                } 
                if (j < M - 1 && parede[i][j + 1] == 'o' && i + 1 < N && parede[i + 1][j + 1] == '#') {
                    parede[i][j] = 'o';
                }
            }
        }
    }
}