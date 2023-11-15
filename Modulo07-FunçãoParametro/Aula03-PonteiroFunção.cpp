#include <stdio.h>
#include <stdlib.h>

// Função que retorna o valor do parâmetro mais 10
int retornaComMaisDez(int numero){
    return numero + 10;
}

// Função que aumenta o valor apontado pelo ponteiro em 10
void AumentaDez(int *numero){
    *numero = *numero + 10;
}

int main(void) {
    // Declaração e inicialização de uma variável inteira 'a' com valor 5
    int a = 5;

    // Imprime o valor atual de 'a'
    printf("%d\n", a);

    // Chama a função que retorna 'a' + 10 e atribui o resultado a 'a'
    a = retornaComMaisDez(a);

    // Imprime o novo valor de 'a' após a chamada da função
    printf("%d\n", a);

    // Chama a função que aumenta o valor de 'a' em 10 usando um ponteiro
    AumentaDez(&a);

    // Imprime o valor final de 'a' após a chamada da função com ponteiro
    printf("%d\n", a);

    return 0;
}
