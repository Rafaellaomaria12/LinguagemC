#include <stdio.h>

int main (){
    int num;
    printf("Digite um ano e lhe diremos se ele é bissexto ou não\n");
    scanf("%d", &num);
    if ( num % 4 == 0)
        printf("O ano é %d bissexto\n",num);
    else
        printf("O ano %d não é bissexto\n",num);

        return 0;
    




}