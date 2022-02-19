#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int b1, b2, a, area;
    cout << "Informe a Base 1: ";
    cin >> b1;
    cout << "Informe a Base 2: ";
    cin >> b2;
    cout << "Informe a Altura: ";
    cin >> a;
    area = ((b1 + b2) * a)/2;
    cout << "A area do trapezio é: " << area;

    return 0;
}