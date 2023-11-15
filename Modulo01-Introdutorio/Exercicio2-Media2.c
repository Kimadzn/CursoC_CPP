#include <stdio.h>
#include <stdlib.h>
 


 int main (void)
 {
    int nota1, nota2, diferenc;
    printf("Escreva duas notas\n");

    scanf("%d %d", &nota1, &nota2);
    
    printf("A media das notas e %d", abs(nota1- nota2));
    return 0 ;
 }