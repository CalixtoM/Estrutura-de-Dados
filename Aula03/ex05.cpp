#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char *argv[]){

    int matriz[6][6];
    int produto = 1;

    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 6; j++){
            cout << "Insira um numero: ";
            cin >> matriz[i][j];
            if(i > j){
                produto = produto * matriz[i][j];
            }
        }
    }

    cout << "Produto = " << produto;

    system("PAUSE");
    return EXIT_SUCCESS;
}