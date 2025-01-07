#include <iostream>
using namespace std;

class Quadrado{
   private:
     float lado;
   
    public: 
     float getperimetro(){
        return lado * 4;
     }
    float getarea(){
        return lado * lado;
    }
     Quadrado(float lado){
       if(lado > 0){
        this -> lado = lado;
       }else{
       this -> lado = 0;
       }
        
     }
     Quadrado(){
        lado = 0;
     } 
     float getlado() {
        return lado;
    }
     void lerlado(){
        float novolado = 0;
        do{
         cout << "digite o valor do lado:"<<endl;
         cin >> novolado;}
        while(novolado < 0);
        Quadrado(novolado);
}
 void setlado(float novolado) {
        if (novolado > 0) {
            lado = novolado;
        } else {
            lado = 0;
        }
    }
};


int main(){
    Quadrado quadrado1(10);
    cout << quadrado1.getlado()<<endl;
    cout << quadrado1.getperimetro()<<endl;
    cout << quadrado1.getarea()<<endl;
    lerlado();
        cout << quadrado1.getlado()<<endl;
        cout << quadrado1.getperimetro()<<endl;
        cout << quadrado1.getarea()<<endl;
return 0;
}