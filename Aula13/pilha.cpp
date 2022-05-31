#include <cstdlib>
#include <iostream>

using namespace std;

class PilhaDeArray
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
             PilhaDeArray(int qtde)
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
             //desempilha os numeros
             int Desempilha()
             {
                  //se a proximaposicaolivre for maior que 0, retorna o valor do vetor anterior ao valor da proximaposicaolivre
                  if(ProximaPosicaoLivre > 0) 
			return VET[--ProximaPosicaoLivre];
             }
};

int main(int argc, char *argv[])
{
    PilhaDeArray pilha(50);
    pilha.Empilha(3);
    pilha.Empilha(5);
    pilha.Empilha(7);
    pilha.Empilha(1);
    pilha.Mostra();
    //Exibe o ultimo numero colocado na pilha, por ser o de cima
    cout <<"\nDesempilha " <<pilha.Desempilha() <<".\n\n";
    //Exibe o penultimo numero colocado na pilha, por ser o de cima
    cout <<"\nDesempilha " <<pilha.Desempilha() <<".\n\n";
    
    pilha.Mostra();
    system("PAUSE");
    return EXIT_SUCCESS;
}
