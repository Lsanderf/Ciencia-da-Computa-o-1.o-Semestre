#include <iostream>
using namespace std;

    class aluno{
    public:
        string nome;
        int idade;
        string mestre;  

        aluno(string nome, int idade, string mestre){
            this -> nome = nome;
            this -> idade = idade;
            this -> mestre = mestre;
        }
    };

    int main(){
        aluno aluno1("Goku", 38,"Whis");
        aluno aluno2("Bills", 1000, "Whis");
        aluno aluno3("Vegetta", 40, "Whis");

        cout << aluno1.nome << '\n';
        cout << aluno1.idade << '\n';
        cout << aluno1.mestre << '\n';
    }

