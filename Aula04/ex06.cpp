#include <cstdlib>
#include <iostream>

using namespace std;

int fatorial (int a){
    int r = a;
    
    for(int i = a - 1; i >= 1; i--){
        r = r * i;
    }

    return r;


}

int main(int argc, char *argv[]){
    int n;
    cout << "Digite um numero: ";
    cin >> n;
    cout << fatorial(n);

    system("PAUSE");
    return EXIT_SUCCESS;
}