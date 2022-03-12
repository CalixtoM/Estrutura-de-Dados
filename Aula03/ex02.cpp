#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char *argv[]){

    int matriz[3][5];
    int vetor[3];
    int apoio = 0;

    for(int i = 0; i < 3; i++){
        vetor[i] = 0;
        for(int j = 0; j < 5; j++){
            cout << "Informe o numero referente a linha " << i << " coluna" << j << ": ";
            cin >> matriz[i][j];
            apoio = matriz[i][j];
            vetor[i] = vetor[i] + apoio;
        }
    }

    for(int k = 0; k < 3; k++){
        cout << "Soma linha " << k << ": " << vetor[k] << "\n";
    }

    system("PAUSE");
    return EXIT_SUCCESS;
}