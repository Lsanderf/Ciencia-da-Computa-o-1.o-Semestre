#include <iostream>
using namespace std;

class Play{
    public:
    string cor;
    int tipo;

    Play(string cor, int tipo){
        this -> cor = cor;
        this -> tipo = tipo;
    }
};

int main(){
    Play play1("Branco", 5);
    cout << play1.cor << endl;
    cout << play1.tipo << endl;
return 0;
}
