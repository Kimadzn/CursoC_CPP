#include <stdio.h>
#include <string.h>
#include <fstream>
#include <string>
#include <iostream>
 
using namespace std;
 
int main () {
 
    // Objeto do arquivo

    ofstream meuArquivo;

    //Abre o arq

    meuArquivo.open("Vocabulario.txt");

    //Esvazia o Arquivo

    meuArquivo << "";

    meuArquivo.close();

    
 
    return 0;
}