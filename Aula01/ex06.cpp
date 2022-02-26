#include <cstdlib>
#include <iostream>
#include <math.h>


using namespace std;

int main(int argc, char *argv[]){
    int idade;

    cout << "Digite a idade: ";
    cin >> idade;

    if(idade < 12){
        cout << "crianca";
    } else if(idade >= 12 && idade < 18){
        cout << "adolescente";
    } else if(idade > 17 && idade < 50){
        cout << "Adulto";
    } else{
        cout << "Idosa";
    }

    system("PAUSE");
    return EXIT_SUCCESS;
}