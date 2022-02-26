#include <cstdlib>
#include <iostream>
#include <math.h>


using namespace std;

int main(int argc, char *argv[]){
    int ano;

    cout << "Informe um ano: ";
    cin >> ano;

    if((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0){
        cout << "Bissexto";
    } else {
        cout << "não Bissexto";
    }
    
    system("PAUSE");
    return EXIT_SUCCESS;
}