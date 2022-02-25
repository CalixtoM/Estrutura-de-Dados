#include <cstdlib>
#include <iostream>
#include <math.h>


using namespace std;

int main(int argc, char *argv[]){

    int v[10], w[10];
    int x = 0;
    for(int i = 0; i < 10; i++){
        cout << "Digite um numero: ";
        cin >> x;
        v[i] = x;
        w[i] = v[i];
    }
    for(int j = 0; j < 10; j++){
        x = w[j];
        for(int l = x-1; l > 1; l--){
            x = x * l;
        }
        w[j] = x;
    }
    for(int k = 0; k < 10; k++){
        cout << w[k] << endl;
    }

    system("PAUSE");
    return EXIT_SUCCESS;

}