#include <stdio.h>
#include <stdlib.h>
 
//Aloca um vetor do tamanho pedido
int* alocaMatriz (int *matriz, int linhas, int colunas ){
 
    //É criado um ponteiro
    int *novaMatriz;
 
    //A memória é alocada e o ponteiro recebe o endereço de memória dele
    novaMatriz = (int *)malloc(linhas * colunas * sizeof(int));
 
    //Esse ponteiro é retornado
    return novaMatriz;
}
 
int main(){
 
    
    //Ponteiro que vai apontar para o vetor criado
    int linhas = 3 , colunas = 3, i, j;
 
    //Criando a um ponteiro
    int (*mat)[colunas];
 
    //Alocando memória
    mat=(int (*)[colunas])malloc(sizeof(*mat)*linhas);
 
    //mat = alocaMatriz(mat, linhas, colunas);
 
    //Imprimindo a matriz
    for(i = 0; i < linhas; i++){
        for(j = 0; j< colunas; j++){
            mat[i][j] = i;
            printf(" %d ", mat[i][j]);
        }
        printf("\n");
    }
 
    free(mat);
 
    return 0;
}