#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fstream>


using namespace std;


int main (){

// cria o objeto do arquivo 

ofstream ArquivoSaida;

//Abre o  arquivo de saida

ArquivoSaida.open("texto.txt", std::ios_base::app);

//Escreve ALgo

ArquivoSaida << "Teste";

//Fecha

ArquivoSaida.close();


return 0 ;
}