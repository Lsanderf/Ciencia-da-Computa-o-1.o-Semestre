#include <iostream>
#define MAX 50
using namespace std;

class Quadrado{
    public:
    int lado;

    int GetPerimetro(){
        return lado * 4;
    }

    int GetArea(){
        return lado * lado;
    }
};

void GetLado(Quadrado &L){
    cout <<"Digite o Lado desse quadrado:" << endl;
    cin >> L.lado;
    do{
        cout << "Digite um Valor > 0 e menor que 50" << endl;
        cin >> L.lado;
    } while(L.lado < 1 || L.lado > MAX);
}


int main(){
    Quadrado L;
    cout << "vamos calular" << endl;
    GetLado(L);
    cout <<"Lado = " << L.lado <<endl;
    cout <<"Perimetro = "<<L.GetPerimetro << endl;
    cout <<"Area ="<< L.GetArea << endl;

}