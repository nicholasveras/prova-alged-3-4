//Projeto em terminal do Professor ALberane (Método de ordenação de vetores utilizados: Selection sort)
#include <stdio.h>

void selection_sort(int a[], int size);
void initializeArray(int a[], int size);

int main(void)
{
    int n; // O int foi utilizado para converte um dado string para um número inteiro
    printf("Quantos números você gostaria de classificar?\n");
    scanf("%d", &n);
    printf("Liste %d números a serem classificados, separados por um espaço:\n", n);
    int a[n];
    //inicializar todos os elementos como 0
    //numeros corretos de numeros inteiros 
    initializeArray(a, n);

    //reunindo números para array do usuário
    int i = 0;
    while(i < n)
        scanf("%d", &a[i++]);

    selection_sort(a, n);
    printf("Os números sorteados são:\n");
    i = 0;
    while (i < n) // repetição de um bloco de instruções enquanto uma condição é verdadeira
        printf("%d ", a[i++]); 
    printf("\n");
    return 0;
}

void initializeArray(int a[], int size)
{
    for(int i = 0; i< size; i++) // O for permite que um certo trecho de programa seja executado um determinado número de vezes
        a[i] = 0;
}

void selection_sort(int a[], int size)
{
    int index = 1;
    if(index == size) //quando a matriz tem um elemento
        return; // classificado quando existe apenas um elemento
    else
    {
        int highest = 0;
        int highIndex = 0;
        for(int i=0; i< size; i++)
        {
            if(a[i] > highest)
            {
                highest = a[i];
                highIndex = i;
            }
        }
        int temp = a[size-1];
        a[size-1] = highest;
        a[highIndex] = temp;
        selection_sort(a, size-1); //chamando a si mesmo
    }
}