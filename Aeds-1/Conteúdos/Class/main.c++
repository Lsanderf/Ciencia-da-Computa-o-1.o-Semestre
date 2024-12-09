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
   do {
        cout << "Digite um valor maior que 0 e menor ou igual a " << MAX << ": "<<endl;
        cin >> L.lado;
    } while (L.lado < 1 || L.lado > MAX);
}



int main(){
    Quadrado L;
    cout << "Ola, vamos calcular os atributos de um quadrado." << endl;
    GetLado(L);
    cout <<"Lado = " << L.lado <<endl;
    cout <<"Perimetro = "<<L.GetPerimetro() << endl;
    cout <<"Area ="<< L.GetArea() << endl;

return 0;
}