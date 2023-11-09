#include <stdio.h>
#include <stdlib.h>
 


 int main (void)
 {
    int nota1, nota2, media;
    printf("Escreva duas notas\n");

    scanf("%d %d", &nota1, &nota2);
    media = (nota1+nota2)/2;

    printf("A media das notas e %d", media);
    return 0 ;
 }