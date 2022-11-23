//Projeto em terminal do Professor ALberane (Método de ordenação de vetores utilizados: bubbleSort)
#include<stdio.h>

void swap(int ap, intbp){
      int temp = *ap;
      ap =bp;
      *bp = temp;
}

//função para implementar Bubble Sort
void bubbleSort(int arr[], int size){
      int i,j;
      for(i = 0; i < size; i++){    //O for permite que um certo trecho de programa seja executado um determinado número de vezes
            //últimos elementos já colocados
            for(j = 0; j < size-i-1; j++){
                  if(arr[j] > arr[j+1])    //o if foi utilizado para alterar o fluxo de execução de um programa em C baseado no valor
                        swap(&arr[j], &arr[j+1]);
            }
      }
}

//função para imprimir matriz
void printArray(int arr[], int size){
      int i;
      for(i = 0; i < size ; i++){
              printf("%d ",arr[i]);    //armazenadas em uma biblioteca padrão de rotinas da linguagem C
      }
}

//programa principal
int main(){
      int arr[] = {12,23,56,1,1,50,80};    //O int foi utilizado para converte um dado string para um número inteiro
      int n = sizeof(arr)/sizeof(arr[0]);
      bubbleSort(arr,n);
      printf("Sorted array:\n");    //armazenadas em uma biblioteca padrão de rotinas da linguagem C
      printArray(arr,n);
      return 0;
}