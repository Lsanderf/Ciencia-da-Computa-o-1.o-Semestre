#include <iostream>
using namespace std;
bool VerificaPerfeito(int n){
    bool ehperfeito = false;
    int soma = 0;
    if(n > 0){
        for(int i = 1; i <= n/2; i++){
            if(n % i == 0){
                soma+= i;
            }
        }
         if(soma == n){
        ehperfeito = true;
    }
   

    }
return ehperfeito;
}
int main() {
    int numero;
    cout << "Digite um número: ";
    cin >> numero;

    if (VerificaPerfeito(numero)) {
        cout << numero << " é um número perfeito!" << endl;
    } else {
        cout << numero << " não é um número perfeito." << endl;
    }

    return 0;
}