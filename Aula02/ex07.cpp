#include <cstdlib>
#include <iostream>
#include <math.h>


using namespace std;

int main(int argc, char *argv[]){

    int vetor1[7];
    int vetor2[7];
    int vetor3[7];
    float vetor4[7];

    for(int i = 0; i < 7; i++){
        cout << "Digite o primeiro numero: ";
        cin >> vetor1[i];
        cout << "Digite o segundo numero: ";
        cin >> vetor2[i];
        cout << "Digite: \n 1 para soma: \n 2 para subtracao: \n 3 para multiplicacao: \n 4 para divisão: ";
        cin >> vetor3[i];
        switch(vetor3[i]){
            case 1:
                vetor4[i] = vetor1[i] + vetor2[i];
            break;
            case 2:
                vetor4[i] = vetor1[i] - vetor2[i];
            break;
            case 3:
                vetor4[i] = vetor1[i] * vetor2[i];
            break;
            case 4:
                vetor4[i] = vetor1[i] / vetor2[i];
            break;
        }
    } 

    for(int j = 0; j < 7; j++){
        cout << "\n Resultado conta " << j+1 << ": " << vetor4[j];

    }

    system("PAUSE");
    return EXIT_SUCCESS;
}