#include <cstdlib>
#include <iostream>



using namespace std;

int main(int argc, char *argv[])
{

    int a, b, soma;
    int *pont1, *pont2;
    cout << "Digite dois numeros: ";
    cin>>a>>b;
    pont1 = &a;
    pont2 = &b;
    cout << "Endereco de memoria de a: " << pont1 << "\n Endereco de memoria de b: " << pont2 << "\n Endereco de memoria do ponteiro 1: " << &pont1 << "\n Endereco de memoria do ponteiro 2: " << &pont2;
    soma = a + b;
    *pont1 = soma;
    cout << "Conteudo de pont1: " << *pont1;

    system("PAUSE");
    return EXIT_SUCCESS;
}
