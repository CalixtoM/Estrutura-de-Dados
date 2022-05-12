#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int a = 1, b = 2, c = 3;
    int vetor[10] = {0, 10, 20, 30, 40, 50, 60, 70, 80, 90};
    int *pt1, *pt2, *pt3, *vaux;
    pt1 = &a;
    pt2 = &b;
    pt3 = &c;
    cout << "Endereco de a: " << pt1 << " Endereco de pt1: " << &pt1 << "\n";
    cout << "\n" << *pt1 << "\n";
    vaux = &vetor[1];
    cout << "Endereco presente na variavel do ponteiro vaux: " << *vaux << "\n";
    for(int i = 1; i <= 9; i = i+2){
            cout << " Posicao numero " << i << " valor: " << vetor[i];
            vetor[i] = vetor[i] + 10;
    }
    
    cout << "\n \n";
    
    for(int j = 1; j <= 9; j = j+2){
              cout << " Posicao numero " << j << " novo valor: " << vetor[j];      
    }
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
