#include <cstdlib>
#include <iostream>
#include <math.h>


using namespace std;

int main(int argc, char *argv[]){
    int v1[8], v2[8], apoio;

    for(int i = 0; i < 8; i++){
        cout << "Informe um numero: ";
        cin >> v1[i];
    }

    for(int j = 0; j < 8; j++){
        for(int x = 0; x < 8; x++){
            if(x == 0){
                apoio = v1[x];
            } else{
                if(v1[x] < apoio){
                    apoio = v1[x];
                }
            }
        }
        v2[j] = apoio;
    }

    for(int y = 0; y < 8; y++){
        cout << v2[y] << "\n";
    }

    system("PAUSE");
    return EXIT_SUCCESS;
}