#include "classes.hpp"
#include <iostream>
#include <stdlib.h>
#include <string>


base::base(){
    std :: cout << "Construtor padrao da classe base"
 << std:: endl;}

 base::~base() {
    std:: cout << "Destrutor da classe base" << std::endl;
 }

 void base :: print(){
    std::cout <<"print implementando na classe base " << std :: endl;
 }

 derivada :: derivada(){
    std::cout <<"Construtora padrao da classe derivada" << std::endl;
 }

 derivada :: ~derivada(){
    std::cout<<"Destrutor de classe derivada"<< std::endl;
 }

void derivada:: teste(){
   std::cout<<"teste implementado na classe derivada"<< std::endl;
}