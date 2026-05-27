#include <iostream>
#include <cmath>
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

    int opcao, opcao1;
    cin>>opcao;

    double numero;
    int baseOriginal, baseConversao;

    //Precisa das mensagens de erro
    //modo passo a passo para conversões
    //Modo batch: ler arquivo entrada.csv para conversoes

    if (opcao == 1) {
        cout<<"|-_-_-_-_-_ Escolha a operação desejada _-_-_-_-_-|"<<endl;
        cout<<"1. Decimal para binário/octal/hexadecimal."<<endl;
        cout<<"2. Binário/octal/hexadecimal para decimal."<<endl;
        cout<<"3. Binário para octal."<<endl;
        cout<<"4. Octal para binário."<<endl;
        cout<<"5. Binário para hexadecimal."<<endl;
        cout<<"6. Hexadecimal para binário."<<endl;
        cout<<"7. Octal para hexadecimal."<<endl;
        cout<<"8. Hexadecimal para octal."<<endl;
        
        cin>>opcao1;

        if (opcao1==1){
            dec_base();
        }
        else if (opcao1==2){
            base_dec();
        }
        else if (opcao1==3){
            bin_oct();
        }
        else if (opcao1==4){
            oct_bin();
        }   
        else if (opcao1==5){
            bin_hex();
        }
        else if (opcao1==6){
            hex_bin();
        }
        else if (opcao1==7){
            oct_hex();
        }
        else if (opcao1==8){
            hex_oct();
        }

    }
    else if (opcao==2){
        calc_max();
    }
    else if (opcao==3){

    }
    else {
        cout<<"Erro: opção inválida! Tente novamente."<<endl;
    }

    return 0;
}