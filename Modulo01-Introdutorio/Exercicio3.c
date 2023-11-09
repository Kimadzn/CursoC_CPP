#include <stdio.h>
#include <stdlib.h>
 


 int main (void)
 {
    int nota1, nota2,nota3, multiplica;
    printf("Escreva tres notas\n");

    scanf("%d %d %d", &nota1, &nota2, &nota3);
    
    multiplica = nota1*nota2*nota3;

    printf("A a multiplicacao das notas e %d", multiplica);
    return 0 ;
 }