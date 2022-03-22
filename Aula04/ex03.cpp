#include <cstdlib>
#include <iostream>

using namespace std;

int verificaprimo(int a){

    int cont = 0;

    for(int i = a; i > 0; i--){
        if(a % i ==0){
            cont++;
        }
    }

    if(cont > 2){
        return 0;
    }else{
        return 1;
    }
}

int main(int argc, char *argv[]){
    
    int n;
    cout << "Digite um numero: ";
    cin >> n;
    cout << verificaprimo(n);

    system("PAUSE");
    return EXIT_SUCCESS;
}