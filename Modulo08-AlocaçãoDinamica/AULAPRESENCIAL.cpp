#include <iostream>
using namespace std;

class teste {
public:
    int aPublico;
    void mApublico();
    void mThis();
private:
    float Aprivado;
};

void teste::mThis() {
    cout << "Conteudo this: " << this << endl;
}

int main() {
    teste obj;
    obj.mThis();
    obj.aPublico = 21;
    cout << "Endereço d obj" << &obj << endl;
    obj.mThis();
    cout << "VALOR " << obj.aPublico << "Endereço" << &(obj.aPublico) << endl;
    obj.mApublico();
    cout<<"tamanho"<< sizeof(teste)<< endl;
    cout<<"tamanho"<< sizeof(int)<< endl;
    cout<<"tamanho"<< sizeof(float)<< endl;

    return 0;
}


void teste :: mApublico (){
    cout <<"Valor " << aPublico << "Endereço "<< &aPublico << endl;
};