#include <stdio.h>
#include <stdlib.h>
 
void imprimeVetor(int *vetor, int tamanho){
 
    //Variável Contadora
    int i;
 
    //Percorrendo o vetor
    for(i = 0; i < tamanho;i++)
        printf("%d \n",vetor[i]);
 
}
 
void modificaVetor(int *vetor, int tamanho){
 
    //Variável Contadora
    int i;
 
    //Percorrendo o vetor
    for(i = 0; i < tamanho;i++)
        vetor[i] = vetor[i] + 1;
        printf("\n");
 
}
 
 
int main(){
 
    //Definindo Vetor
    int v[3] = {1,2,3};
    int tamanho =  3;
 
    //Mostrando vetor
    imprimeVetor(v, tamanho);
 
    //Modifica o vetor
    modificaVetor(v, tamanho);
 
    //Mostrando vetor
    imprimeVetor(v, tamanho);
 
    //Retorno da Função
    return 0;
}