#include <stdio.h>
#include <stdlib.h>



int main (void) {

    int nota1, nota2, nota3, media;

    printf("Escreva 3 notas para o aluno!\n"); 
    scanf("%d %d %d", &nota1, &nota2, &nota3);
    media = (nota1+nota2+nota3)/3;

    if(media>= 7)
    {
        printf("Aluno APROVADO!!");
    }else
    {
        printf("Aluno REPROVADO!");
    }

    return 0;
}