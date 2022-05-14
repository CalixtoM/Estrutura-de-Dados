#include <cstdlib>
#include <iostream>

using namespace std;

void impares(int *a, int *b){
     int aux;
     if(*a > *b){
          aux = *a;
          *a = *b;
          *b = aux;     
     }
     for(int i = *a; i <= *b; i++){
             if(i % 2 != 0){
                  cout << "\n" << i << "\n";     
             }        
     }
    
}

int main(int argc, char *argv[])
{
    int n1, n2;
    int *p1, *p2;
    cout << "Digite dois numeros: ";
    cin>>n1>>n2;
    p1 = &n1;
    p2 = &n2;
    impares(p1, p2);
    system("PAUSE");
    return EXIT_SUCCESS;
}
