#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

class conta{

    public:

            float a, b;
            void entrada(){
                cout << "Digite dois numeros: ";
                cin>>a>>b;
                
            }

            int soma(){
                return a + b;
            }

            int sub(){
                return a - b;
            }

            int mult(){
                return a * b;
            }

            float div(){
                while(b == 0){
                    cout << "Digite um numero maior que 0: ";
                    cin >> b;
                }
                return a / b;
            }
};

int main(int argc, char *argc[]){
    conta obj;
    obj.entrada();
    cout << "\n Soma: " << obj.soma();
    cout << "\n Subtracao: " << obj.sub();
    cout << "\n Multiplicacao: " << obj.mult();
    cout << "\n Divisao: " << obj.div();
    
}