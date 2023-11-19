#include <stdio.h>
#include <stdlib.h>

void display(int var, int *ptr);
void update(int *p);

int main(void)
{
    int var = 15;
    int *ptr;

    ptr = &var;
    
    display(var, ptr);
    
    printf("\n\n");
    
    update(&var);
    
    display(var, ptr);
    
    printf("\nEnd.");
    return 0;
}

void display(int var, int *ptr)
{

    printf("O conteudo de var = %d\n", var);
    printf("O endereco de var = %p\n", &var);
    printf("O conteudo apontado por PTR = %d\n", *ptr);
    printf("O endereco Apontado por PTR = %p\n", ptr);
    printf("O endereco do PTR = %p\n", ptr);
}

void update(int *p){

    *p = *p+1;

}
/*

Ponteiros
*ptr : O apontador por, conteudo do endereço da variavel que ptr aponta
ptr : endereço da variavel
&ptr : endereço do ponteiro(ptr)

*/