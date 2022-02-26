#include <cstdlib>
#include <iostream>
#include <math.h>


using namespace std;

int main(int argc, char *argv[]){

    int n;

    cout << "Digite um numero: ";
    cin >> n;
    if(n % 2 == 0){
        cout << "Numero par";
    }
    else{
        cout << "Numero impar";
    }

    system("PAUSE");
    return EXIT_SUCCESS;
}