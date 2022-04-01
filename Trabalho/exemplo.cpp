

#include <iostream>
using namespace std;

// método responsavel pelo particionamento, recebe o array, indice inicial e indice final, respectivamente
int particionamento(int arr[], int start, int end) {

    // define o pivo como o numero que ocupa a primeira posicao do array, de acordo com a variavel start
	int pivo = arr[start];

    // define o contador de numeros menores que o pivo 
	int count = 0;

    // laco que faz a contagem de numeros menores que o pivo, 
    // i é igual ao numero posterior ao inicial (não é igual ao inicial pois o mesmo é o pivo)
    // o laco correrá até a ultima posicao, indicada pela variavel end
	for (int i = start + 1; i <= end; i++) {
		// incrementa sempre que um numero é menor que o pivo
        if (arr[i] <= pivo)
			count++;
	}

    // define a posicao correta do pivo no vetor, de acordo com os valores coletados no laço 
	int IndicePivo = start + count;

    // funcao responsavel por trocar o valor presente na posicao correta do pivo, com o proprio
	swap(arr[IndicePivo], arr[start]);

	int i = start, j = end;

	// laço utilizado para definir numeros a esquerda e direita do pivo
	while (i < IndicePivo && j > IndicePivo) {
		while (arr[i] <= pivo) {
			//incrementa um ao "i", quando o numero é menor ou igual ao pivo
			i++;
		}
		while (arr[j] > pivo) {
			//incrementa um ao "j", quando o numero é maior ao pivo
			j--;
		}

		// quando o valor de i é menor que o indice e o valor de j maior, realiza o swap
		if (i < IndicePivo && j > IndicePivo) {
			swap(arr[i++], arr[j--]);
		}
	}
	return IndicePivo;
}

// Método do quickSort
void quickSort(int arr[], int start, int end) {

	// Encerra quando o numero inicial é maior que o final
	if (start >= end)
		return;

	// particionando o array
	int p = particionamento(arr, start, end);

	// organizando o lado esquerdo. PS "p - 1" equivale a posição final do pivo - 1, sendo assim o valor 
	//antecessor ao pivo
	quickSort(arr, start, p - 1);

	// organizando o lado direito. PS "p + 1" equivale a posição final do pivo + 1, sendo assim o valor 
	//após o pivo
	quickSort(arr, p + 1, end);
}

int main() {

    // define o vetor
	int vetor[6];

    // armazena o tamanho do vetor
	int n = 6;

    // laco para definir valores do vetor
    for(int j = 0; j < 6; j++){
        cout << "Insira um numero: ";
        cin >> vetor[j];
    }

    //executa o quicksort
	quickSort(vetor, 0, n - 1);


    // exibe todos os valores do vetor
	for (int i = 0; i < n; i++) {
		cout << vetor[i] << " ";
	}


	return 0;
}
