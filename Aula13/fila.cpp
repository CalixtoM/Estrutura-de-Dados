#include <cstdlib>
#include <iostream>

using namespace std;

class FilaDeArray
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
             FilaDeArray(int qtde)
             {
                 MAX = qtde;
                 //new indica que esta sendo instaciado um espaco na memoria
                 VET = new int[MAX];
                 ProximaPosicaoLivre = 0;
             }
             //método responsável por empilhar os valores
             void Empilha(int n)
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
             
             int Retira()
             {
                 int aux = VET[0];
                 for(int i = 1; i < MAX; i++){
                              VET[i - 1] = VET[i];   
                 }
                 return aux;
             }
};

int main(int argc, char *argv[])
{
    FilaDeArray fila(50);
    fila.Empilha(3);
    fila.Empilha(5);
    fila.Empilha(7);
    fila.Empilha(1);
    fila.Mostra();
    //Exibe o ultimo numero colocado na pilha, por ser o de cima
    cout <<"\nRetira " <<fila.Retira() <<".\n\n";
    //Exibe o penultimo numero colocado na pilha, por ser o de cima
    cout <<"\nRetira " <<fila.Retira() <<".\n\n";
    cout <<"\nRetira " <<fila.Retira() <<".\n\n";
    fila.Mostra();
    system("PAUSE");
    return EXIT_SUCCESS;
}
