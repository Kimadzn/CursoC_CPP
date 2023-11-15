#include <stdio.h>
#include <stdlib.h>

void LimpaTela(){
    system("CLS");
}

int main(){

    int a;
    printf("Escreva um valor para 'a' \n");

    scanf("%d", &a);

    LimpaTela();

    printf("O valor digitado foi %d", a);

    return 0;
}