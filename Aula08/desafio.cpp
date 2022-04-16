#include <cstdlib>
#include <iostream>

using namespace std;

void ordenar(int a[]){
    
    int auxiliar;

    for(int i = 0; i < 5; i++){
        for(int j = i+1; j < 5; j++){
            if(a[i] > a[j]){
                auxiliar = a[i];
                a[i] = a[j];
                a[j] = auxiliar;
            }
        }
    }
}

int busca_binaria(int a[], int item){
    int inicio = 0;
    int fim = 5 - 1;

    while(inicio <= fim){
        int i = (inicio + fim) / 2;

        if(a[i] == item){
            return i;
        }

        if(a[i] < item){
            inicio = i + 1;
        } else{
            fim = i;
        }
    }

    return -1;
}

int main(){
    int vetor[5];
    int pivo;

    for(int i = 0; i < 5; i++){
        cout << "Digite um numero: \n";
        cin >> vetor[i];
    }

    ordenar(vetor);
    cout << "Escolha um numero a ser buscado: ";
    cin >> pivo;

    if(busca_binaria(vetor, pivo) == -1){
        cout << "Numero nao encontrado";
    } else{
        cout << "posicao: " << busca_binaria(vetor, pivo) << "\n";
    }

    return 0;
}