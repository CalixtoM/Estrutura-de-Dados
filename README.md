# Estrutura-de-Dados
Repositório para postagem dos exercícios em C++ da matéria de Estrutura de dados, do terceiro semestre do curso de Análise e Desenvolvimento de Sistemas na [Fatec de Praia Grande](www.fatecpg.edu.br).

Ps: Nem todos os códigos já estão disponíveis!


### 💡 Ideia:
A ideia central desse repositório é armazenar códigos desenvolvidos durante as aulas, tendo como objetivo utilizar como uma linha do tempo dos meus estudo, alinhado aos demais repositórios dedicados a matérias da Fatec.

## Sumário:
 - Aula 01 - Revisão
 - Aula 02 - Vetor
 - Aula 03 - Matriz
 - Aula 04 - Método
 - Aula 05 - Recursividade
 - Aula 06 - Apresentação
 - Aula 07 - Prova
 - Aula 08 - Desafio
 - Aula 09 - Classes Orientação a Objetos
 - Aula 10 - Construtor
 - Aula 11 - Ponteiro
 - Aula 12 - Trabalho Prático Calendário
 - Aula 13 - Fila, Pilha e Lista
 - Aula 14 - Grafos

## Aula 01 - Revisão:
### (16/02)

- Exercicio 1 - Crie um programa que solicite ao usuário os três coeficientes de uma equação do segundo grau e informe os valores de x’ e x’’. 

- Exercicio 2 - Crie um programa que solicite ao usuário os lados de um retângulo e informe a sua área.   

- Exercicio 3 - Crie um programa que solicite ao usuário os lados de um triângulo e informe a sua área.  

- Exercicio 4 - Crie um programa que solicite ao usuário os lados de um trapézio e informe a sua área.  

- Exercicio 5 - Escreva um programa que solicite ao usuário um valor inteiro e informe se esse número é par ou ímpar.  

- Exercicio 6 - Escreva um programa que solicite ao usuário a idade de uma pessoa e informe se essa pessoa é criança (0 a 11 anos), adolescente (12 a 17 anos), adulta (18 a 49 anos) ou idosa (a partir de 50 anos).  

- Exercicio 7 - Escreva um programa que solicite ao usuário um ano qualquer e informe se esse ano é bissexto. Um ano é considerado bissexto se ele for divisível por quatro, mas não por 100. Ou então se ele for divisível por 400.  

- Exercicio 8 - Crie um programa que solicite ao usuário os três ângulos de um triângulo e informe se este é um triângulo equilátero, isósceles ou escaleno. 

- Exercicio 9 - Escreva um programa que solicite ao usuário quatro números e mostre na tela o maior, o menor e a média aritmética dos números digitados. 

## Aula 02 - Vetor:
### (23/02)

- Exercicio 1 - Fazer um programa que leia vários números inteiros e positivos. A leitura se encerra quando encontrar um número negativo ou quando o vetor ficar completo. Sabe-se que o vetor possui, no máximo, 10 elementos. Gerar e imprimir um vetor onde cada elemento é o inverso do correspondente do vetor original. 

- Exercicio 2 - Fazer um programa que digite vários números no vetor de tamanho máximo de 100 elementos, até digitar o número “0”. Imprimir quantos números iguais ao último número foram lidos. O limite de números é 100.  Sem considerar o “0” como último número.

- Exercicio 3 - Criar um programa para ler 10 números DIFERENTES a serem armazenados em um vetor. Os dados deverão ser armazenados no vetor na ordem que forem sendo lidos, sendo que caso o usuário digite um número que já foi digitado anteriormente, o programa deverá pedir para ele digitar outro número. Note que cada valor digitado pelo usuário deve ser pesquisado no vetor, verificando se ele existe entre os números que já foram fornecidos. Exibir na tela o vetor final que foi digitado. 

- Exercicio 4 - Ler um vetor V de 10 elementos e obter um vetor W cujos componentes são os fatoriais dos respectivos componentes de V.

- Exercicio 5 - Criar um programa que leia dados de um vetor de 12 elementos inteiros. Imprima o maior e menor sem ordenar, o percentual de números pares e a média dos elementos do vetor.

- Exercicio 6 - Criar um vetor com a 8 elementos e ordená-los.

- Exercicio 7 - Fazer um programa que, dados dois vetores de 7 posições cada, efetue as operações aritméticas básicas, indicadas por um terceiro vetor cujos dados também são fornecidos pelo usuário, gerando e imprimindo um quarto vetor.

## Aula 03 - Matriz:
### (09/03)

- Exercicio 1 - Criar uma matriz de ordem 4 e exibir a soma da 
diagonal principal.

- Exercício 2 - Ler valores inteiros para a matriz A[3][5]. Gerar e 
imprimir o vetor Soma_Linha, onde cada elemento é a 
soma dos elementos de uma linha da matriz A. Faça o 
trecho que gera a matriz separadamente da entrada e 
saída.

- Exercício 3 - Criar uma matriz 2x3. Gerar e imprimir a transposta 
dessa matriz. A matriz transposta é gerada trocando linha 
por coluna.

- Exercício 4 - Criar uma matriz de ordem 5 e imprima: toda a matriz 
e depois os números que se encontram em posições cuja 
a linha mais a coluna formam um número ímpar.

- Exercício 5 - Ler os elementos de uma matriz de ordem 6 e 
imprima o produto dos elementos que estão abaixo da 
diagonal principal.

## Aula 04 - Método:
### (16/03)

- Exercício 1 - Desenvolva um programa que tenha dois métodos fahrenheit e celsius, onde você entra com um valor em fahrenheit e transforma em celsius e vice e versa.

  Fórmula Celsius: (fahrenheit – 32) * 5/9;
  Fahrenheit = (Celsius * 9/5) + 32;

- Exercício 2 - Calcule a soma dos quadrados de dois números fornecidos pelo usuário. Trabalhe com chamada de métodos usadas como argumento de outros métodos.
Dica: você vai criar 3 métodos onde duas delas estarão dentro de uma.
    
- Exercício 3 -
Um número primo é qualquer inteiro divisível por si próprio e por 1. Escreva um método
que receba um inteiro positivo e, se este número for primo retorne 1, caso contrário retorne 
0.

- Exercício 4 - Escreva um método que receba o ano e retorne 1 se for bissexto e 0 se não for. Um ano é bissexto quando divisível por 4, mas não por 100. Um ano também é bissexto quando divisível por 400.

- Exercício 5 - Desenvolver um programa onde você entre via teclado com dois valores e após a 
digitação o usuário escolha um seletor de opção (menu) com as seguintes opções:

    - Multiplicação;
    - Adição;
    - Divisão;
    - Subtração;
    - Fim do processo;
    
Obs. Criar um método para cada opção e dentro do case chamar as funções respectivamente.

- Exercicio 6 - Gere um método que trabalhe com fatorial, lembrando o fatorial é ele vezes a quantidade dele mesmo. Ex. fat 5 = 5*4*3*2*1.

## Aula 05 - Recursividade:
### (23/03)

- Desafio: Usar método recursivo para calcular a sequencia de Fibonacci.

## Aula 06 - Apresentação:
### (30/03)

- Quicksort: Nessa aula nos dividimos em grupos para explicar métodos, meu tema foi o método Quicksort, onde desenvolvi um algoritmo utilizando esse método, além de recursividade para organizar todos os números.

## Aula 07 - Prova:
### (07/04)

## Aula 08 - Desafio:
### (13/04)

- Enunciado: Desenvolver método de ordenação de vetor, depois realizar uma busca binária.

## Aula 09 - Classes Orientação a Objetos
### (27/04)

- Exercício 1 - Criar uma classe matemática que contenham dois atributos da classe A, B inteiros e os seguintes métodos:

    Entrada de dados; soma, multiplicação, subtração e divisão (fazer o tratamento da divisão, não dividir por zero)

- Exercício 2 - Crie uma classe chamada Triangulo onde crie variáveis da classe, os métodos que são 2, o primeiro é para ver se é triangulo e o segundo é para ver que tipo de triangulo é, os três abaixo:

    - Escaleno – os 3 lados diferentes

    - Isósceles – 2 lados iguais

    - Eqüilátero – os 3 lados iguais

    Obs. Não esquecer de verificar primeiramente se é triangulo

- Exercício 3 - Crie uma classe Estacionamento que tenha como atributos da classe dia, horaEntrada, horaSaida, e dois métodos o primeiro Solicita os dados para o usuário e o outro método calcule o valor a ser pago sendo que cada hora equivale a 5 reais.

## Aula 10 - Construtor
### (04/05)

- Exercício 1 - Baseado no diagrama de classe abaixo faça a classe no C++.

  *Conta:*
    + número: int
    + saldo: double
    + limite: double
    + nome: string
    ~conta (int, double, double, string)
    + saca (valor: double) bool
    + deposita (valor: double)
    + transfere ( destino: Conta, valor: double) bool

- Exercício 2 - Escreva uma classe chamada classe “Comparavel” que tem como 
atributo um valor inteiro, um construtor para inicializar o atributo e os 
métodos éMaiorOuIgual, éMenorOuIgual e éDiferenteDe que recebem um 
valor do tipo int como parâmetro e retornam true se o valor encapsulado 
for, respectivamente, maior ou igual, menor ou igual ou diferente do 
passado como parâmetro.

- Exercício 3 - Escreva uma classe “EntradaDeCinema” com a seguinte estrutura 
(dados): 

  • Int dia do filme
  • float horário
  • int sala
  • float valor 
  E com as seguintes ações (métodos):
  • Construtor: com a finalidade de inicializar todos os atributos.
  CalculaDesconto: que deve receber como parâmetro a data de nascimento do cliente (do tipo Data) e caso seja menor de 12 anos, deve ser dado um desconto de 50% no valor normal.
  • CalculaDesconto: que deve receber como parâmetro a data de nascimento do cliente (do tipo Data) e o número de sua carteira de estudante (do tipo int). Se o estudante tiver idade entre 12 e 15 anos, deve ser dado um desconto de 40%, de 16 a 20 um desconto de 30% e mais que 20 anos um desconto de 20% no valor normal.
  • CalculaDescontoHorário: esse método deve dar um desconto de 10% sobre o valor aferido após todas as outras opções de desconto, caso o horário do filme seja antes das 16 horas.
  • toString(): que deve imprimir todos os dados do ingresso.

- Exercício 4 - Crie uma classe Aluno contendo seu nome, número de matrícula e telefone. 
a) Crie dois construtores, um iniciando valores “vazios” e outro iniciando 
valores dados pelo teclado. 
b) Faça um método que imprima dados de dois alunos simultâneamente.

## Aula 11 - Ponteiro
### (17/05)

- Exercicio 1 - Desenvolva um programa onde você crie 3 variáveis a, b e soma e dois ponteiros: pont1 e pont2, todos do tipo int.

  - Peça para o usuário entrar com o valor de a e b via teclado e faça com que os ponteiros recebam o endereço de memória de a e b.

  - Exibir na tela o endereço de memória das variáveis a, b e dos dois ponteiros.

  - Some a e b e guarde dentro da variável soma.

  - Atribuir o conteúdo de soma para o ponteiro pont1 e exibir o conteúdo do pont1.

- Exercicio 2 - Desenvolva um programa onde você crie 3 variáveis e inicialize-as com o valor que quiser, um vetor de 10 posições que receba os valores diretamente dentro do programa como: 0,10,20,30,40,50,60,70,80,90 e também 4 ponteiros chamados pt1, pt2, pt3 e vaux.

  - Atribuir o pt1 ao endereço de memória de a, pt2 ao de b e pt3 ao de c;

  - Exiba na tela o endereço de memória de a e o do ponteiro pt1;

  - Exiba na tela o valor da variável apontada por pt1;

  - Atribuir o valor do endereço de memória da posição 1 do vetor já criado para o ponteiro vaux e exibir na tela o valor da variável apontada pelo ponteiro;

  - Agora varra o vetor de 2 em 2 a partir da posição 1 (ex. 1,3,5,7,9) e acrescente o valor de + 10 em cada posição, exibir na tela os valores dos vetores criados acima.

Ex. v[1] = 20, v[3] = 40...

- Exercicio 3 - Faça um método que peça 2 (dois) números inteiros, e mostre no vídeo todos os números ímpares entre eles (incluindo-os). Os dois valores podem ser informados em qualquer ordem, devendo o programa trata-los de forma adequada.

Obs: Os parâmetros do método deve ser dois ponteiros de inteiros. Manipule-os corretamente dentro do método.

## Aula 12 - Trabalho Prático Calendário
### (18/05)

- Enunciado: Dado o exercicio do calendário transforme-o em uma classe com seus 3 métodos e crie um objeto no "main" e manipule a classe.


## Aula 13 - Fila, Pilha e Lista
### (25/05)

- Exercício 1 - Faça um sistema de Pilha (Primeiro que entra é o último que saí).

- Exercício 2 - Faça um sistema de Fila (Primeiro que entra é o primeiro que saí, com outros assumindo as posições vazias).

- Exercício 3 - Faça um sistema de Lista (Primeiro ou último saem, substituindo posições).

## Aula 14 - Grafos
### (01/06)

- Foi solicitada uma pesquisa sobre grafos.

## Aula 15 - P2
### (08/06)

- Prova 2, contendo todo o conteúdo ministrado no segundo semestre.
