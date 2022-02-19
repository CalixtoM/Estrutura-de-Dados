#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int b, a, area;
    cout << "Informe a Base: ";
    cin >> b;
    cout << "Informe a Altura: ";
    cin >> a;
    area = (b * a)/2;
    cout << "A area do trianfulo é: " << area;

    return 0;
}