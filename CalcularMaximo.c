/******************************
Arquivo: CalcularMaximo.c
Autor: Guilherme Cordeiro Peixoto
Objetivo: Codigo desenvolvido para gerar um vetor de valores aleatorios, e retornar o maior entre eles. 
*******************************/
#include <stdio.h>
#include <stdlib.h>

/*
Funcao: CalcularMaximo
Objetivo: Retornar o maior numero do vetor de entrada recursivamente, atribuindo o maior valor a posicao 0.
Entrada: vetor[]      Vetor de numeros a serem buscados
         tamanho      Quantidade de indices no vetor
Saída:   vetor[0]     Indice com o maior valor
*/
int CalcularMaximo(int vetor[], int tamanho){
  
  if(tamanho == 1){
    return vetor[0];
  }
  else if(vetor[0] < vetor[tamanho]){
    vetor[0] = vetor[tamanho];
  }
  
  return CalcularMaximo(vetor, tamanho-1);
}

int main(void) {  
// Declaração de vetor para numeros aleatorios e calculo do seu tamanho.  
  int numeros[10];
  int tamanho = sizeof(numeros)/sizeof(numeros[0]);
  
// Geração de dados aleatorios para o vetor numeros[].
  printf("Numeros gerados:\n");
  srand(time(NULL));
  for(int i = 0; i < tamanho; i++){
    numeros[i] = rand();
    printf("%d\n",numeros[i]);
  }

// Obtencao do maior valor no vetor e seu retorno.
  int maior = CalcularMaximo(numeros,tamanho-1);
  printf("O maior numero e %d\n",maior);

  return 0;
}