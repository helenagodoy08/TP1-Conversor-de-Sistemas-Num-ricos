#include <iostream>
#include "arquivoHPP.hpp"
using namespace std;

int main() {
    cout<<"|-_-_-_-_-_ Escolha a operação desejada _-_-_-_-_-|"<<endl;
    cout<<"1. Conversão de bases."<<endl;
    cout<<"----------------------"<<endl;
    cout<<"2. Calcular máximos."<<endl;
    cout<<"----------------------"<<endl;
    cout<<"3. Quiz de conversões."<<endl;
    cout<<"----------------------"<<endl;

    int opcao;
    cin>>opcao;

    double numero;
    int baseOriginal, baseConversao;

    //Precisa das mensagens de erro
    //modo passo a passo para conversões
    //Modo batch: ler arquivo entrada.csv para conversoes

    if (opcao == 1) {

        cout<<"Qual número quer converter? "<<endl;
        cin>>numero;

        cout<<"Qual a base desse número? (2, 8, 10 ou 16) "<<endl;
        cin>>baseOriginal;
        if (baseOriginal != 2 && baseOriginal != 8 && baseOriginal != 10 && baseOriginal != 16){
            cout<<"Erro: base inválida! Tente novamente."<<endl;
            exit(1);
        }

        cout<<"Para qual base deseja converter? (2, 8, 10 ou 16) "<<endl;
        cin>>baseConversao;
        if (baseConversao != 2 && baseConversao != 8 && baseConversao != 10 && baseConversao != 16){
            cout<<"Erro: base inválida! Tente novamente."<<endl;
            exit(1);
        }

        //Mensagens de erro

    }

    //Fazer as outras opções
    /*else if (opcao == 2) {}
    else if (opcao == 3) {}*/
    else {cout<<"Erro: opção inválida! Tente novamente."<<endl;}

    //resultados
    if (baseOriginal == 10) {dec_base(numero, baseConversao);}
    /*else if (baseConversao == 10) {base_dec();}
    else if (baseOriginal == 2 && baseConversao == 8) {bin_oct();}
    else if (baseOriginal == 8 && baseConversao == 2) {oct_bin();}
    else if (baseOriginal == 2 && baseConversao == 16) {bin_hex();}
    else if (baseOriginal == 16 && baseConversao == 2) {hex_bin();}
    else if (baseOriginal == 8 && baseConversao == 16) {oct_hex();}
    else if (baseOriginal == 16 && baseConversao == 8) {hex_oct();}*/

    return 0;
}