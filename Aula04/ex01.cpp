#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

int celsius(int a){

    int cel = (a - 32) * 5/9;

    return cel;
}

int fahrenheit(int a){

    int fah = (a * 9/5) + 32;

    return fah;
}

int main(int argc, char *argv[]){

    int c, f;

    cout << "Informe um valor em celsius: ";
    cin >> c;
    cout << "Informe um valor em fahreinheit: ";
    cin >> f;

    cout << "Valor em Celsius = " << celsius(f) << endl;
    cout << "Valor em Fahreinheit = " << fahreinheit(f) << endl;

    system("PAUSE");
    return EXIT_SUCCESS;
}