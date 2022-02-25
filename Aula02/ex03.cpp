#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[]){

    int n[10];
    int x;

    for(int i = 0; i < 10; i++){
        x = 0;
        while(x == 0){
            cout << "Digite o " << i+1 << " numero: ";
            cin >> x;
            for(int j = 0; j < i; j++){
                if(n[j] == x){
                    x = 0;
                }
            }
        }
        n[i] = x;
    }

    for(int k = 0; k < 10; k++){
        cout << "Numero: " << n[k] << endl;
    }
    system("PAUSE");
    return EXIT_SUCCESS;

}