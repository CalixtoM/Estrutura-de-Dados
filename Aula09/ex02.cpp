#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

class triangulo{

    public:
            float a, b, c;

            void entrada(){
                cout << "Digite os lados: ";
                cin>>a>>b>>c;
                
            }

            int verificacao(){
                if((a + b) > c && (b + c) > a && (a + c) > b){
                    return 1;
                } else{
                    return 0;
                }
            }

            void tipo(){
                if(a != b && b != c && a != c){
                    cout << "Escaleno";
                } else if(a == b || b == c || a == c){
                    cout << "Isosceles";
                } else if(a == b && b == c && a == c){
                    cout << "Equilatero";
                }
            }

};

int main(){
    triangulo obj;
    obj.entrada();
    if(obj.verificacao() == 1){
        obj.tipo();
    } else{
        cout << "Nao e triangulo!";
    }
}