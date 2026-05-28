#include "conversores.hpp"
#include "formatador.hpp"
#include <iostream>
#include <cmath>
using namespace std;

//main
void menu(){
    cout<<"|-_-_-_-_-_ Escolha a operação desejada _-_-_-_-_-|"<<endl;
    cout<<"1. Conversão de bases."<<endl;
    cout<<"----------------------"<<endl;
    cout<<"2. Calcular máximos."<<endl;
    cout<<"----------------------"<<endl;
    cout<<"3. Quiz de conversões."<<endl;
    cout<<"----------------------"<<endl;
}

void menu1(){
    cout<<"|-_-_-_-_-_ Escolha a operação desejada _-_-_-_-_-|"<<endl;
    cout<<"1. Decimal para binário/octal/hexadecimal."<<endl;
    cout<<"2. Binário/octal/hexadecimal para decimal."<<endl;
    cout<<"3. Binário para octal."<<endl;
    cout<<"4. Octal para binário."<<endl;
    cout<<"5. Binário para hexadecimal."<<endl;
    cout<<"6. Hexadecimal para binário."<<endl;
    cout<<"7. Octal para hexadecimal."<<endl;
    cout<<"8. Hexadecimal para octal."<<endl;
}

//conversores
void erro(){
   cout<<"Erro: opção inválida! Tente novamente."<<endl;
}

void num(){
    cout<<"Digite um número para conversão:"<<endl;
}

void modopap(){
    cout<<"Ativar modo passo a passo? Digite S/N"<<endl;
}