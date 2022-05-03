#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

class estacionamento{

    public:
            int dia, hentrada, hsaida;

            void entrada(){
                cout << "Informe dia, hora de entrada e hora de saida: ";
                cin>>dia>>hentrada>>hsaida;

            }

            int count(){
                return (hsaida - hentrada) * 5;
            }
};

int main(){
    estacionamento obj;
    obj.entrada();
    cout << obj.count();
}