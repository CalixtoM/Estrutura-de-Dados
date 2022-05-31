#include <cstdlib>
#include <iostream>

using namespace std;

class ListaDeArray
{
      private:
             //Ponteiro do vetor
             int *VET;
             //define a posição vazio a seguir do vetor
             int ProximaPosicaoLivre;
             //Armazena o valor maximo de posições do vetor
             int MAX;
      public:
             //Define a pilha de array, passando o valor maximo do vetor, além de definir a primeira posição livre
             ListaDeArray(int qtde)
             {
                 MAX = qtde;
                 //new indica que esta sendo instaciado um espaco na memoria
                 VET = new int[MAX];
                 ProximaPosicaoLivre = 0;
             }
             //método responsável por empilhar os valores
             void EntradaFim(int n)
             {
                  //Se a proximaposicaolivre for menor que o tamanho maximo do vetor, o vetor da posicao a seguir recebe o n que foi passado como parametro
                  if(ProximaPosicaoLivre < MAX) 
			VET[ProximaPosicaoLivre++] = n;
             }
             //metodo responsavel por mostrar todos os valores do vetor
             void Mostra()
             {
                  //exibe o elemento do vetor na posicao i enquanto a mesma for menor que a proximaPosicaoLivre
                  for(int i = 0; i<ProximaPosicaoLivre; i++)
                  {
                          cout <<VET[i] <<"\n";
                  }
             }
             
             void EntradaInicio(int n){
                  for(int i = ProximaPosicaoLivre++; i >= 0; i--){

                          VET[i + 1] = VET[i];
                          
                                  
                  }
                  VET[0] = n;
             }
             
             int RetiraInicio()
             {
                 int aux = VET[0];
                 for(int i = 1; i < MAX; i++){
                              VET[i - 1] = VET[i];   
                 }
                 return aux;
             }
             int RetiraFim(){
                 return VET[--ProximaPosicaoLivre];
             }
};

int main(int argc, char *argv[])
{
    ListaDeArray lista(50);
    lista.EntradaFim(3);
    lista.EntradaFim(5);
    lista.EntradaFim(7);
    lista.EntradaFim(1);
    lista.EntradaInicio(10);
    lista.Mostra();
    //Exibe o ultimo numero colocado na pilha, por ser o de cima

    //Exibe o penultimo numero colocado na pilha, por ser o de cima
    cout <<"\nRetira " <<lista.RetiraFim() <<".\n\n";
    cout <<"\nRetira " <<lista.RetiraInicio() <<".\n\n";
    lista.Mostra();
    system("PAUSE");
    return EXIT_SUCCESS;
}
