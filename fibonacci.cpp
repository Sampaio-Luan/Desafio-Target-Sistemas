#include<iostream>

using namespace std;
// 2) Dado a sequência de Fibonacci, onde se inicia por 0 e 1 
// e o próximo valor sempre será a soma dos 2 valores anteriores
// (exemplo: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...), 
// escreva um programa na linguagem que desejar onde, 
// informado um número, ele calcule a sequência de Fibonacci e retorne
// uma mensagem avisando se o número informado pertence ou não a sequência.

int main(){
    int anterior = 0, ultimo = 1, somatoria = 0, numdigitado, controle;
    
    printf("Desafio 2 -- Sequencia de Fibonacci\n\n");

    printf("Digite um numero inteiro para verificar se ele pertence a sequencia de Fibonacci\n");
    scanf(" %d", &numdigitado);

    printf("\n\n%d , %d , ", anterior, ultimo);
    while(somatoria <= numdigitado)
    {
        somatoria = anterior + ultimo;

        printf("%d , ", somatoria);

        controle = anterior;  // controle recebe o número anterior de cada iteração
        anterior = ultimo;   // O numero anterior passa a ser o ultimo dessa iteração
        ultimo += controle; //  O ultimo numero agora é soma dos dois anteriores
        
        if(somatoria == numdigitado)// Verificando se o numero digitado pertence a sequência 
        {
            printf("\n\n O numero que digitou [ %d ] pertence a sequencia Fibonacci\n", numdigitado);
            break;
        }
        if(somatoria > numdigitado) // se valores do sequencia superarem o número digitado então ele não pertence a sequencia
        {
            printf("\n\n O numero que digitou [ %d ] nao pertence a sequencia Fibonacci\n", numdigitado);
            
        }        
    }

    return 0;
}