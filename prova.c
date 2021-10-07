/******************************************************************************

A Alfandega tem um limite para valores dos produtos trazidos do exterior. 
Faça um algoritmo que receba do usuário os valores dos 50 produtos encontrados na mala de um passageiro. 
Mostre  na tela o valor total dos produtos.

*******************************************************************************/
#include <stdio.h>
int main() {
    int acc, unit;
    float value, item;
    value = 0;
    acc = 1;
    printf("Quantos itens foram encontrados na mala? ");
    scanf("%i", &unit);
    while (acc <= unit){
        printf("Preco do nota fiscal (em R$) do %i: item ", acc);
        scanf("%f", &item);
        acc++;
        value += item;
    }
        printf("Valor total dos itens R$%.2f", value);
  
} 
