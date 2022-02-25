#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char *argv[]){

    int n[100];
    int x = 1;
    int c = 0;
    int ultimo = 0;

    while(c < 100 && x != 0){
        cout << "Digite um numero: ";
        cin >> x;
        n[c] = x;
        if(x != 0){
            ultimo = x;
        }
        c = c+1;
    }

    for(int i = 0; i < c; i++){
        if(n[i] == ultimo){
            rep = rep+1;
        }
    }

    cout << "Repetiu " << rep-1 << " vezes";

    system("PAUSE");
    return EXIT_SUCCESS;
}