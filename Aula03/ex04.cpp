#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char *argv[]){

    int matriz[5][5];

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cout << "Digite um numero: ";
            cin >> matriz[i][j];
        }
    }
    cout << "Matriz: " << endl;
    for(int k = 0; k < 5; k++){
        for(int l = 0; l < 5; l++){
            cout << matriz[k][l] << "\t" << endl;
        }
    }

    cout << endl << "Numeros impares: " << endl;
    for(int m = 0; m < 5; m++){
        for(int n = 0; n < 5; n++){
            if((m + n) % 2 != 0){
                cout << matriz[m][n] << "\t" << endl;
            }
        }
    }

    system("PAUSE");
    return EXIT_SUCCESS;
}