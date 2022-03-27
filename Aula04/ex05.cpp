#include <cstdlib>
#include <iostream>

using namespace std;

float adicao(float a, float b){
    float r = a + b;

    return r;
}

float sub(float a, float b){
    float r = a - b;

    return r;
}

float div(float a, float b){
    float r = a / b;

    return r;
}

float multi(float a, float b){
    float r = a * b;

    return r;
}

int main(int argc, char *argv[]){
    
    float n1, n2;
    int opc;
    cout << "Digite um numero: ";
    cin >> n1;
    cout << "Digite outro numero: ";
    cin >> n2;
    cout << "Escolha \n 1 - Adicao \n 2 - Subtracao \n 3 - multiplicacao \n 4 - Divisao: ";
    cin >> opc;
    switch(opc){
        case 1:
            cout << adicao(n1, n2);
            break;
        case 2:
            cout << sub(n1, n2);
            break;
        case 3:
            cout << multi(n1, n2);
            break;
        case 4:
            cout << div(n1, n2);
            break;
    }

    system("PAUSE");
    return EXIT_SUCCESS;
}