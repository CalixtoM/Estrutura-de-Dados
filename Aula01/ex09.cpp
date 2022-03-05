#include <cstdlib>
#include <iostream>
#include <math.h>


using namespace std;

int main(int argc, char *argv[]){
    int n1, n2, n3, n4, menor, maior;
    float media;
    cout << "Informe o primeiro numero: ";
    cin >> n1;
    menor = n1;
    maior = n1;
    media = n1;
    cout << "Informe o segundo numero: ";
    cin >> n2;
    media = media + n2;
    if(n2 > maior){
        maior = n2;
    } else if(n2 < menor){
        menor = n2;
    }
    cout << "Informe o terceiro numero: ";
    cin >> n3;
    media = media + n3;
    if(n3 > maior){
        maior = n3;
    } else if(n3 < menor){
        menor = n3;
    }
    cout << "Informe o quarto numero: ";
    cin >> n4;
    media = media + n4;
    if(n4 > maior){
        maior = n4;
    } else if(n4 < menor){
        menor = n4;
    }
    media = media / 4;
    cout << "Maior: " << maior << " Menor: " << menor << " Media: " << media;

    system("PAUSE");
    return EXIT_SUCCESS;
}