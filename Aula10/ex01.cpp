#include <cstdlib>
#include <iostream>



using namespace std;



class Conta{



public:
int numero;
double saldo, limite;
string nome;

Conta(int a, double b, double c, string d){

numero = a;
saldo = b;
limite = c;
nome = d;

}

Conta(double aa){
saldo = aa;
}

bool saca(){
int valor1;
cout << "Digite um valor a ser sacado: ";
cin >> valor1;
if(valor1 <= saldo){
saldo = saldo - valor1;
cout << "Novo saldo: " << saldo << "\n";
return 1;
}else{
return 0;
}
}

void deposita(){

int valor2;
cout << "Digite um valor a ser depositado: ";
cin >> valor2;
saldo = saldo + valor2;
cout << "Deposito realizado! \n ";
cout << "Novo valor em conta: " << saldo << "\n";


}

bool transfere(Conta destino, double valor4){

double valor3;
cout << "Digite um valor a ser transferido: ";
cin >> valor3;
if(valor3 <= saldo){
saldo = saldo - valor3;
cout << "Novo saldo: " << saldo << "\n";
return 1;
}else{
return 0;
}



/*string destino;
double valor4;
cout << "Digite a conta de destino: ";
cin >> destino;
cout << "Digite um numero para transferir: ";
cin>>valor4;
if(valor4 <= saldo){
saldo = saldo - valor4;
valor3 = valor4 + valor3;
cout << "Valor transferido para: " << destino;
cout << "Seu novo saldo: " << saldo << "\n";
return 1;
}
else{
return 0;
}*/

}

};



int main(int argc, char *argv[])
{
int a;
double b, c;
string d;
cout << "Digite numero: ";
cin>>a;
cout << "Digite saldo: ";
cin>>b;
cout << "Digite limite: ";
cin>>c;
cout << "Digite nome da conta: ";
cin>>d;
Conta Obj(a, b, c, d);
Conta Obj2(1, 20.0, 20.0, "a");
if(Obj.saca() == 1){
cout << "Saque autorizado! \n";
}else{
cout << "Saldo insuficiente! \n";
}
Obj.deposita();
if(Obj.transfere(Obj2, 1200 > 0)){
cout << "Transferencia realizada!";
}
/* cout << Obj.transfere(); */
system("PAUSE");
return EXIT_SUCCESS;
}