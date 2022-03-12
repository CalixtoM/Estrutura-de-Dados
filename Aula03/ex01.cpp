#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char *argv[]){

    int matriz[4][4];
    int soma = 0;

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            cout << "Insira um numero da matriz linha " << i << " coluna " << j << "\n";
            cin >> matriz[i][j];
            if(i == j) {
                soma = soma + matriz[i][j];
            }
        }
    }

    cout << "O Resultado da soma é: " << soma;

    system("PAUSE");
    return EXIT_SUCCESS;
}