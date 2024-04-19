/******************************************************************************

Crie um programa que pede para o usuário digitar números positivos via teclado. 
Quando o usuário digitar um número negativo, informe a média de todos os números que ele informou.

*******************************************************************************/
#include <stdio.h>


int main() {
    int num;
    int soma = 0;
    int quantidade = 0;
    float media;

    printf("Digite números positivos (digite um número negativo para encerrar): \n");

    while (1) {
        printf("Digite um número: ");
        scanf("%d", &num);

        if (num < 0) {
            break; 
        }

        soma += num; 
        quantidade++; 
    }

    if (quantidade > 0) {
        media = (float)soma / quantidade;
        printf("A média dos números positivos digitados é: %.2f\n", media);
    } else {
        printf("Nenhum número positivo foi digitado.\n");
    }

    return 0;
}
