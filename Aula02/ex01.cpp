#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char *argv[]){
    int c = 0;
    int numeros[10];
    int x = 1;

    while(x > 0 && c < 10){
        cout << "Informe um numero: " << endl;
        cin >> x;
        numeros[c] = x;
        c = c + 1;
    }

    for(int i = 0; i < c; i++){
        if(numeros[i] > 0){
            cout << numeros[i] * (-1) << endl;
        }
    }

    system("PAUSE");
    return EXIT_SUCCESS;
}