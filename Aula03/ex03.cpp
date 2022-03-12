#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char *argv[]){

    int matriz[2][3], transp[3][2];

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            cout << "Digite um numero: ";
            cin >> matriz[i][j];
            transp[j][i] = matriz[i][j];
        }
    }

    for(int k = 0; k < 2; k++){
        for(int l = 0; l < 3; l++){
            cout << matriz[k][l] << "\t";
        }
        cout << endl;
    }

    cout << endl;

    for(int m = 0; m < 3; m++){
        for(int n = 0; n < 2; n++){
            cout << transp[m][n] << "\t";
        }
        cout << endl;
    }

    system("PAUSE");
    return EXIT_SUCCESS;
}