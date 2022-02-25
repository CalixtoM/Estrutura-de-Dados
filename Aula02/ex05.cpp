//Criar um programa que leia dados de um vetor de 12 elementos inteiros. 
//Imprima o maior e menor sem ordenar, o percentual de números pares e a média dos elementos do vetor.

#include <cstdlib>
#include <iostream>
#include <math.h>


using namespace std;

int main(int argc, char *argv[]){

    int n[12];
    int menor = 0;
    int maior = 0;
    float media = 0;
    int pares = 0; 

    for(int i = 0; i < 10; i++){
        cout << "Informe o " << i+1 << " numero: ";
        cin >> n[i];

        if(maior < n[i]){
            maior = n[i];
        }

        if(menor > n[i]){
            menor = n[i];
        }

        if(n[i] % 2 == 0){
            pares = pares + 1;
        }

        media = media + n[i];

    }

    media = media / 10;
    pares = pares * 10;

    cout << "Menor numero: " << menor << endl;
    cout << "Maior numero: " << maior << endl;
    cout << "Media: " << media << endl;
    cout << "Porcentagem de pares: " << pares << "%" << endl;

    system("PAUSE");
    return EXIT_SUCCESS;
}