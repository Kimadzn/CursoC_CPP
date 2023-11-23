#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>

using namespace std;

void LimpaTela(){

    system("CLS");
}

int main (void){


    int a = 10;


    char palavra[3];
    palavra [0] = 'g';
    palavra [1] = 'o';
    palavra [2] = 'l';

    printf("%d", a);
    printf("\n %c%c%c", palavra[0], palavra [1], palavra [2]);

     string outapalavra = "gol";
     cout << outapalavra;
    

    cout << "\nO valor De: " <<a << " E maior do que 0";


    return 0;
}