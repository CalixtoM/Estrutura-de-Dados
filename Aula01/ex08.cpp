#include <iostream>
#include <iostream>
#include <math.h>
using namespace std;

int main() {

    int l1, l2, l3;
    cout << "Escreva o lado 1: ";
    cin >> l1;
    cout << "Escreva o lado 2: ";
    cin >> l2;
    cout << "Escreva o lado 3: ";
    cin >> l3;
    if(l1 < (l2 + l3) && l2 < (l1+l3) && l3 < (l2 + l1)){
        if(l1 == l2 && l1 == l3){
            cout << "Equilatero";
        } else{
            cout << "Desigaualdade";
        }
    } else if(l1 == l2 || l1 == l3){

        cout << "Isosceles";
    
    } else{
        cout << "Escaleno";  
    }

    system("PAUSE");
    return EXIT_SUCCESS;
}