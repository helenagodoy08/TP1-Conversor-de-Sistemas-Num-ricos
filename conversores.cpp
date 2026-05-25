#include <iostream>
#include <algorithm>
#include "arquivoHPP.hpp"
using namespace std;

string digitos = "0123456789ABCDEF";

/*/Auxiliares
int valorChar(char c) {      //função que converte char pra int
    c = toupper(c);   //toupper converte minúscula pra maiúscula

    for (size_t i = 0; i < digitos.size(); i++) {
        if (digitos[i] == c)
            return static_cast<int>(i);
    }

    return -1;
}

char charValor(int v) {    //converte int pra char
    return digitos[v];
}*/

//1. Decimal -> bases
void dec_base(double numero, int baseConversao) {

    int resto[100];

    char escolha;
    bool passo;
    cout<<"Ativar modo passo a passo? Digite S ou N"<<endl;
    cin>>escolha;
    if (escolha=='S'){
        passo=true;
    } else {
        passo=false;
    }

    if (numero==0){
        cout<<"Resultado: 0";
        return;
    }

    if (passo){
        cout<<"Numero Divisor Quociente Resto"<<endl;
        
    }

    int i=0;
    while (numero>0){
        if (passo){
            cout << numero << "        ";
            cout << baseConversao << "        ";
            cout << numero/baseConversao << "        ";
            cout << int(numero)%baseConversao << endl;

        }
        resto[i]=int(numero)%baseConversao;
        numero=numero/baseConversao;
        i++;
    }

    if (passo){
        cout<<"Lendo os resultados de baixo para cima:"<<endl;
    }
    cout<<"Resultado: ";
    
    for (int j=i-1; j>=0; j--){
        if (resto[j]<10){
            cout<<resto[j];
        } else if (resto[j]==10){
            cout<<'A';
        } else if (resto[j]==11){
            cout<<'B';
        } else if (resto[j]==12){
            cout<<'C';
        } else if (resto[j]==13){
            cout<<'D';
        } else if (resto[j]==14){
            cout<<'E';
        } else if (resto[j]==15){
            cout<<'F';
        }

    }
    return;

}

//2. Bases -> decimal
void base_dec(){}

//3. Binário -> octal
void bin_oct(){}

//4. Octal -> binário
void oct_bin(){}

//5. Binário -> hexadecimal
void bin_hex(){}

//6. Hexadecimal -> binário
void hex_bin(){}

//7. Octal -> hexadecimal
void oct_hex(){}

//8. Hexadecimal -> octal
void hex_oct(){}