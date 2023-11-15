#include <stdio.h>
#include <stdlib.h>


void mostraSoma(int primeiroValor, int segundoValor){
    printf("\n A soma entre %d e %d e %d", primeiroValor, segundoValor, primeiroValor+segundoValor);
}

int retornaSoma(int primeiroValor, int SegundoValor){
    return primeiroValor + SegundoValor;
}

int main (void){


    int a = 5, b=7;
    mostraSoma(a,b);
    printf("\n A soma entre %d e %d e %d", a, b, retornaSoma(a,b));

    return 0;
}