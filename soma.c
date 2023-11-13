/*Programa que realiza a soma entre dois numeros*/
/*inclusão da biblioteca de cabeçalho de entrada e saida*/

#include <stdio.h>

/*função principal*/
int main (){
    int numero1, numero2, resultado;
    printf("Digite um número:\n");
    scanf("%d", &numero1);
    printf("Digite outro número:\n");
    scanf("%d",&numero2);

    resultado = numero1+numero2;
    printf("Resultado da soma é %d\n\n",resultado);

    printf("Posição em memoria da variavel numero 1 %p\n",&numero1);
    printf("Posição em memoria da variavel numero 2 %p\n",&numero2);
    printf("Posição em memoria da variavel resultado %p\n",&resultado);

}