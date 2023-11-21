#include <stdio.h>
#include <stdlib.h>

void descobrirValores(int *v, int *me, int *ma, int tam){

    int i;
    *me = v [0];
    *ma = v[0];

    for (i = 1; i < tam; i++)
    {
        if(v[i]<*me)
        {
            *me = v[i];
        }
        if (v[i]>*ma)
        {
           *ma = v[i];
        }
        
        
    }
    
printf("Na Funcao Menor: %d Maior : %d\n", *me, *ma);
printf("Na funcao Endereco de menor: %p\nend de maior%p\n", &me, &ma);
}



int main () {

    int valor = 10, menor, maior, vet[] = {50, 10 , 250, 500, 25}; 
    int *p;
    p = &valor;

    printf("Valor: %d\nEndereco de valor %p \n", valor, &valor);
    printf("Endereco de p : %p\n", &p);
    printf("Conteudo de p : %p\n", p);
    printf("Conteudo apontado por P: %d\n", *p);

    descobrirValores(vet, &menor, &maior, 5);
    printf("Em main : Menor: %d Maior : %d\n", menor, maior);
    printf("Na MAIN Endereco de menor: %p\nend de maior %p\n", &menor, &maior);
    
    return 0;

}